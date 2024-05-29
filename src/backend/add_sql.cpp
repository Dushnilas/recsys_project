#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <iostream>

int main() {
    const std::string server = "your_server";
    const std::string username = "your_username";
    const std::string password = "your_password";
    const std::string database = "your_database";

    try {
        // Initialize the MySQL driver
        sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();

        // Create a connection
        std::unique_ptr<sql::Connection> connection(driver->connect(server, username, password));

        // Connect to the database
        connection->setSchema(database);

        // Create a statement object
        std::unique_ptr<sql::Statement> statement(connection->createStatement());

        // Define the query
        std::string query = R"(
            SELECT t.tconst, t.title_type, t.title_name, t.description AS original_description,
                   dm.description AS modified_description, t.year_start, t.year_end, t.is_adult
            FROM titles t
            LEFT JOIN description_modified dm ON t.tconst = dm.tconst
            LIMIT 5;
        )";

        // Execute the query
        std::unique_ptr<sql::ResultSet> resultSet(statement->executeQuery(query));

        // Fetch and print the results
        while (resultSet->next()) {
            std::cout << "tconst: " << resultSet->getString("tconst")
                      << ", title_type: " << resultSet->getString("title_type")
                      << ", title_name: " << resultSet->getString("title_name")
                      << ", original_description: " << resultSet->getString("original_description")
                      << ", modified_description: " << resultSet->getString("modified_description")
                      << ", year_start: " << resultSet->getInt("year_start")
                      << ", year_end: " << resultSet->getInt("year_end")
                      << ", is_adult: " << resultSet->getInt("is_adult")
                      << std::endl;
        }
    } catch (sql::SQLException& e) {
        std::cerr << "SQLException: " << e.what() << std::endl;
        std::cerr << "MySQL error code: " << e.getErrorCode() << std::endl;
        std::cerr << "SQLState: " << e.getSQLState() << std::endl;
    }

    return 0;
}
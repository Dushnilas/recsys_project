import mysql.connector
from mysql.connector import Error
# connection data
host_name = "92.53.120.173"
user_name = "adminchik"
user_password = "aaa_woman_IgNoReALEKO228"
db_name = "recsys_project_database"
port = 3306
# """
#         SELECT t.tconst, t.description, d.description
#         FROM titles t
#         JOIN description_modified d ON t.tconst = d.tconst
#         LIMIT 10;
#         """
def create_connection(host_name, user_name, user_password, db_name, port):
    connection = None
    try:
        connection = mysql.connector.connect(
            host=host_name,
            user=user_name,
            password=user_password,
            database=db_name,
            port=port
        )
        print("Connection to MySQL DB successful")
    except Error as e:
        print(f"The error '{e}' occurred")
    return connection

def execute_select_query(query):
    connection = create_connection(host_name, user_name, user_password, db_name, port)
    cursor = connection.cursor()
    try:
        cursor.execute(query)
        results = cursor.fetchall()
        for row in range(len(results)):
            results[row] = [str(x) for x in results[row]]
        return results
    except Error as e:
        print(f"The error '{e}' occurred")
        return []
    finally:
        cursor.close()
        connection.close()

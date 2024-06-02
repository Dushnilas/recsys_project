#ifndef MYSQL_QUERIES_H
#define MYSQL_QUERIES_H

#include <string>
#include <vector>
#include <map>

extern const std::string red_color_code;
extern const std::string yellow_color_code;
extern const std::string reset_color_code;
extern const std::string project_path;

bool initializePythonInterpreter();
void finalizePythonInterpreter();
std::vector<std::map<std::string, std::string>> ExecuteSelectQuery(const std::string& library, const std::string& query);
bool ExecuteInsertQuery(const std::string& library, const std::string& function_name, const std::string& table_name, const std::vector<std::map<std::string, std::string>>& data);
bool ExecuteUpdateQuery(const std::string& library, const std::string& update_query);
bool ExecuteDeleteQuery(const std::string& library, const std::string& delete_query);

#endif // MYSQL_QUERIES_H

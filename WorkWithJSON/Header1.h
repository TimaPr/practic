#ifndef CHECK_FILE_H
#define CHECK_FILE_H

#include <filesystem>
#include "json.hpp"

//�������� ���������� ����������
void CheckArgumentsAmount(int arguments_amount);

//������������� ����
void CheckInputPath(const std::filesystem::path& path_to_filesystem_object);

//������������ JSON ���������
bool IsJsonCorrect(const nlohmann::json& json);

#endif // CHECK_FILE_H

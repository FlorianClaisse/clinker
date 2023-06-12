//
// Created by Florian Claisse on 12/06/2023.
//

#ifndef CLINKER_VERSION_HPP
#define CLINKER_VERSION_HPP

#include <vector>
#include <string>

#define VERSION "0.0.1"

std::vector<int> splitVersionString(const std::string &version);
bool isVersionLower(const std::string& version1, const std::string& version2);

#endif //CLINKER_VERSION_HPP

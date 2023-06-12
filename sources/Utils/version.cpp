//
// Created by Florian Claisse on 12/06/2023.
//

#include <sstream>

#include "include/version.hpp"

using namespace std;

vector<int> splitVersionString(const string &version) {
    vector<int> versionNumbers;
    stringstream ss(version);
    string number;

    while (getline(ss, number, '.')) {
        versionNumbers.push_back(stoi(number));
    }

    return versionNumbers;
}

bool isVersionLower(const std::string& version1, const std::string& version2) {
    vector<int> numbers1 = splitVersionString(version1);
    vector<int> numbers2 = splitVersionString(version2);

    // Comparaison des numéros de version
    for (size_t i = 0; i < numbers1.size(); ++i) {
        // La première version a plus de composants, donc elle est supérieure
        if (i >= numbers2.size())
            return false;

        if (numbers1[i] < numbers2[i])
            return true;
        else if (numbers1[i] > numbers2[i])
            return false;
    }

    // Les numéros de version sont identiques jusqu'à présent, la première version est supérieure
    return numbers1.size() < numbers2.size();
}
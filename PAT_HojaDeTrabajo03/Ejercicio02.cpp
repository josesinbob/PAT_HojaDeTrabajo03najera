#include "Ejercicio02.h"
#include <unordered_map>
#include <algorithm>

vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings)
{
     std::unordered_map<std::string, std::vector<std::string>> anagramMap;

    for (const std::string& str : strings) 
    {
        std::string sortedStr = str;
        std::sort(sortedStr.begin(), sortedStr.end());

        anagramMap[sortedStr].push_back(str);
    }

    auto result = new vector<vector<string>>;
    for (const auto& pair : anagramMap) 
    {
        result->push_back(pair.second);
    }
    return result;
}


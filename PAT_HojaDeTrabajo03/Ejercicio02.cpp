#include "Ejercicio02.h"
#include <unordered_map>
#include <algorithm>

vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings)
{
    std::unordered_map<std::string, std::vector<std::string>> anagramMap;

    
    std::transform(strings.begin(), strings.end(), std::back_inserter(anagramMap),
                   [](const std::string& str) {
                       std::string sortedStr = str;
                       std::sort(sortedStr.begin(), sortedStr.end());
                       return std::make_pair(sortedStr, std::vector<std::string>{str});
                   },
                   [](const std::pair<const std::string, std::vector<std::string>>& pair) {
                       return pair;
                   });

   
    auto result = new vector<vector<string>>(anagramMap.size());
    std::transform(anagramMap.begin(), anagramMap.end(), result->begin(),
                   [](const std::pair<const std::string, std::vector<std::string>>& pair) {
                       return pair.second;
                   });

    return result;
}


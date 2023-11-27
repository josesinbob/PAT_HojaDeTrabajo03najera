#include "Ejercicio02.h"
#include <unordered_map>
#include <algorithm>

vector<vector<string>> Ejercicio02::groupAnagrams(const vector<string>& strings)
{
    unordered_map<string, vector<string>> anagramMap;

    for (const string& str : strings) 
    {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());

        anagramMap[sortedStr].push_back(str);
    }

    vector<vector<string>> result;
    for (const auto& pair : anagramMap) 
    {
        result.push_back(pair.second);
    }

    return result;
}



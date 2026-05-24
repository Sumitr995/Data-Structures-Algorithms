// Group anagrams 
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> anagramMap;

    for (const string& str : strs) {
        string sortedStr = str; // Create a copy of the original string
        sort(sortedStr.begin(), sortedStr.end()); // Sort the characters in the string

        anagramMap[sortedStr].push_back(str); // Group the original string under the sorted key
    }

    vector<vector<string>> result;
    for (const auto& pair : anagramMap) {
        result.push_back(pair.second); // Add each group of anagrams to the result
    }

    return result;
}
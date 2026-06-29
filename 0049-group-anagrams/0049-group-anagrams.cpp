class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp; // Hashmap {ate : [eat, ate]}
        for (auto& s : strs) {
            string SortedS = s;
            sort(SortedS.begin(), SortedS.end()); 
            mp[SortedS].push_back(s); // pushed Sorted S and s as Key:value pair
        };
        vector<vector<string>>result;
        for(auto& pair : mp ){
            result.push_back(pair.second); // Push's Value of hashmap
        }
        return result;
    }
};
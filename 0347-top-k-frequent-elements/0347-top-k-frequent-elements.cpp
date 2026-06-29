class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int,int>mp;
      for(auto& n : nums){
        mp[n]++;
      }
      vector<pair<int,int>>arr;
      for(auto& count : mp){
        arr.push_back({count.second, count.first});
      }
      sort(arr.rbegin(), arr.rend());
      vector<int>result;
      for(int i=0; i<k; i++){
        result.push_back(arr[i].second);
      }

      return result;

    }
};
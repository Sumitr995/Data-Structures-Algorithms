// Majority Element Problem
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int majorityElement(vector<int>& nums) {
    unordered_map<int, int> countMap;
    int majorityCount = nums.size() / 2;

    for (int num : nums) {
        countMap[num]++;
        if (countMap[num] > majorityCount) {
            return num; // Return the majority element
        }
    }

    return -1; // This line should never be reached since a majority element always exists
}
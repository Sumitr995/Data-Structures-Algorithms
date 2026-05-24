// Contains Duplicate using hashing and brute force approach

// Brute Force Approach
#include <iostream>
#include <vector>
using namespace std;
bool containsDuplicateBruteForce(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] == nums[j]) {
                return true; // Found a duplicate
            }
        }
    }
    return false; // No duplicates found
}

// Hashing Approach
#include <unordered_set>
bool containsDuplicateHashing(vector<int>& nums) {
    unordered_set<int> seen; // Create a hash set to store seen numbers
    for (int num : nums) {
        if (seen.count(num)) {
            return true; // Found a duplicate
        }
        seen.insert(num); // Add the number to the set
    }
    return false; // No duplicates found
}
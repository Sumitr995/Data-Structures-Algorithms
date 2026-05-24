// Valid Anagram - Optimal Solution
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false; // If lengths are different, they cannot be anagrams
    }

    sort(s.begin(), s.end()); // Sort the first string
    sort(t.begin(), t.end()); // Sort the second string

    return s == t; // Check if the sorted strings are equal
}
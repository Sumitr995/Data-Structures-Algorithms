class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        // Check s1 should not be bigger than s2
        if (s1.size() > s2.size()) {
            return false;
        }

        // Fixed arrays of size 26 initialized to 0
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        // Storing Frequency of s1 in freq1 = [a, b, c, .........., x, y, z]
        for (char c : s1) {
            freq1[c - 'a']++;
        }

        // First window of s2
        for (int i = 0; i < s1.size(); i++) {
            freq2[s2[i] - 'a']++;
        }

        // Check first window
        if (freq1 == freq2) {
            return true;
        }

        // sliding window from s1.size() to s2.size() - 1
        for (int i = s1.size(); i < s2.size(); i++) {

            // Remove left character
            freq2[s2[i - s1.size()] - 'a']--;

            // Add right character
            freq2[s2[i] - 'a']++;

            if (freq1 == freq2) {
                return true;
            }
        }

        return false;
    }
};
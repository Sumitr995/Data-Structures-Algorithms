class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>Count; // count Char

        int l = 0; // Left Pointer
        int MaxCount = 0; // Max Count of Char in HashMap
        int res = 0; // MaxLength of Common Char --> Result

        // Expand the window using the right pointer
        for(int r = 0; r < s.size(); r++){

            // New Char Adding to Window
            Count[s[r]]++;

            // Update the maximum frequency seen in the current window
            MaxCount = max(MaxCount, Count[s[r]]);

            // Current Window Size 
            int WindowSize = r - l + 1;

            while(WindowSize - MaxCount > k){
            
                // Remove the leftmost character from the window
                Count[s[l]]--;

                // Shrinking Window
                l++;

                // New Window Length
                WindowSize = r - l + 1;

            }
            // Updating Max Length 
            res = max(res, WindowSize);

        }

        return res;

    }
};
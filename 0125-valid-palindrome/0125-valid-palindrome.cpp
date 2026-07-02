class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int left = 0;
        int right = n - 1 ;

         while (left < right) {

            // Skip non-alphanumeric characters
            while (left < right && !isalnum(s[left]))
                left++;

            while (left < right && !isalnum(s[right]))
                right--;

            // Compare characters ignoring case
            if (tolower(s[left]) != tolower(s[right]))
                return false;

            // Move towards the center
            left++;
            right--;
        }
        return true;
    }
};
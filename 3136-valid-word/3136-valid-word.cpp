class Solution {
public:
    bool vowels(char w) {
        string vowel = "aeiouAEIOU";

        for(char c : vowel) {
            if(w == c) {
                return true;
            }
        }

        return false;
    }

    bool isValid(string word) {
        if(word.size() < 3) {
            return false;
        }

        bool hasVowel = false;
        bool hasConsonant = false;

        for(char w : word) {

            // only letters and digits allowed
            if(!isalnum(w)) {
                return false;
            }

            if(isalpha(w)) {
                if(vowels(w)) {
                    hasVowel = true;
                }
                else {
                    hasConsonant = true;
                }
            }
        }

        return hasVowel && hasConsonant;
    }
};
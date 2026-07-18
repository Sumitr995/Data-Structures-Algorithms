class Solution {
public:
    int countDigits(int num) {
        int original = num;   // Keep the original number
        int count = 0;

        while(num > 0){
            // extract the last digit
            int digit = num % 10; 

            // Avoid division by zero
            if(digit != 0 && original % digit == 0){
                count++;
            }
            // Remove the last digit
            num /= 10;
        }

        return count;
    }
};
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        // 'l' points to the next position where we should place a valid (non-val) element.
        int l = 0;

        // 'r' scans every element in the array.
        for (int r = 0; r < nums.size(); r++) {

            // If current element is NOT the value we want to remove
            if (nums[r] != val) {

                // Copy the valid element to the front
                // of the array at index 'l'.
                nums[l] = nums[r];

                // Move 'l' to the next free position
                // for the next valid element.
                l++;
            }

            // If nums[r] == val,
            // simply skip it (do nothing).
        }

        // 'l' is the number of valid elements remaining.
        // Only the first 'l' elements of the array matter.
        return l;
    }
};
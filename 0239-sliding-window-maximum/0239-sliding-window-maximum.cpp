class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        deque<int> dq;          // Stores INDICES of possible maximums
        vector<int> result;     // Stores answer for each window

        for (int i = 0; i < nums.size(); i++) {

            // ---------------------------------------------------
            // STEP 1 : Remove expired index
            // If the front index is outside the current window,
            // remove it because it is no longer useful.
            // ---------------------------------------------------
            if (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // ---------------------------------------------------
            // STEP 2 : Incoming element fights from the BACK.
            // Remove every smaller element because it can never
            // become the maximum while the current element exists.
            // ---------------------------------------------------
            while (!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }

            // ---------------------------------------------------
            // STEP 3 : Current element joins the deque.
            // We store INDEX, not value.
            // ---------------------------------------------------
            dq.push_back(i);

            // ---------------------------------------------------
            // STEP 4 : Once the first window is complete,
            // the FRONT of deque is always the maximum.
            // ---------------------------------------------------
            if (i >= k - 1) {
                result.push_back(nums[dq.front()]);
            }
        }

        return result;
    }
};
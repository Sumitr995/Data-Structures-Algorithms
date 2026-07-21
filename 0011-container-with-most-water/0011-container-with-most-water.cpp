class Solution {
public:
    int maxArea(vector<int>& heights) {
        int MaxArea = 0;
        int lp = 0;
        int rp = heights.size() - 1; 

        while (lp < rp) {
            int width = rp - lp;
            int ht = min(heights[lp], heights[rp]);
            int currArea = width * ht;

            MaxArea = max(currArea, MaxArea);

            if (heights[lp] < heights[rp]) {
                lp++;
            } else {
                rp--; 
            }
        }
        return MaxArea;
    }
};

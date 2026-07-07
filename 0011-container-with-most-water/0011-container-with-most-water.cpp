class Solution {
public:
    int maxArea(vector<int>& heights) {

        int maxArea = 0;

        int lp = 0;
        int rp = heights.size() - 1;

        while(lp < rp){

            int width = rp - lp; // distance between pointers = width
            int ht = min(heights[lp], heights[rp]); // smallest height between pointers
            int currArea = width * ht; // area of square

            maxArea = max(maxArea, currArea); // compare and push max area

            // move smaller height pointer
            if(heights[lp] < heights[rp]){
                lp++;
            }
            else{
                rp--;
            }
        }

        return maxArea;
    }
};
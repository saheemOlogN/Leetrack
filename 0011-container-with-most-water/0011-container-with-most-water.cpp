class Solution {
public:
    int maxArea(vector<int>& height) {
        int res=0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            int w=right-left;

            if(height[left]<height[right]){
                res=max(res,w*height[left]);

                left++;
            }
            else{
                      res=max(res,w*height[right]);

                right--;
            }

        }
        return res;
    }
};
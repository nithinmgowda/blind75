// yak ist confuse agutho yeno kadlepuri one pointer two pointer yakri beku idhu
// lolipop cheepo time alle life chennagithu


class Solution{
    public:
    int maxarea(vector<int> &height){
        int left =0, right = height.size()-1, maxarea = 0;
        while(left < right){
            maxarea = max(maxarea, (right - left) * min(height[left], height[right]));
            if(height[left]< height[right]){
                left++;
                
                
            }else{
                right--;
            }
        }
    }
};
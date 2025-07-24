// to find minimum element in a sorted and rotated array

//use bianary search 
// my first thought was using linear search but that would f the complexity 

class solution{
    public:

    int findmin(vector<int>& nums){
        int n = nums.size():
        int left =0;
        int right = n-1;

        while(left<right){
            int mid = left + ( right - left) / 2;
            if(nums[mid] > nums[right])
            left = mid + 1;
            else
            right = mid;
            }
            return nums[left];
        }
    };
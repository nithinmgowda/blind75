class solution{
    public:

    int maxsubarray(vector<int>& nums){
        int n = nums.size();
        int current_max = nums[0];
        int global_max = nums[0];

        for(int i=1; i<n; i++){
            current_max = max(nums[i] + current_max, nums[i]);
            if(current_max>global_max){
                global_max = current_max;

            }
        }
        return global_max;
    }
    };

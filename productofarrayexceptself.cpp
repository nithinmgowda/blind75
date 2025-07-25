class solution{
    public:

    vector<int>productexceptself(vector<int>& nums){
        vector<int> res(nums.size(), 1);

        int prefix = 1, sufix =1;

        for(int i=0; i<nums.size(); i++){
            res[i] *= prefix;
            prefix *= nums[i];

        }
        for(int i=nums.size()-1; i>=0; i--){
            res[i] *= sufix;
            sufix *= nums[i];
        }
        return res;
    }
};
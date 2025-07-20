class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for(int i = 0; i <=n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

// optimal solution
    int n=nums.size();
        unordered_map<int, int> a;
        for(int i=0; i<n; i++){
            if(a.find(target-nums[i]!= a.end())){
                return{a[target-nums[i]],i};
            
            }
            a[nums[i]] =i;
        
        }
        return{};
    }
}

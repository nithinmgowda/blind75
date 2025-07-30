// array / vector will be given where 
// we need to find the longest increasing subsequence 
// what is subsequence?
// subsequence means a part of array where u some elements are skipped or not
// ex arr [ 0, 2, 3, 4, 5, 6]
// subsequence can be [0, 2, 3, 4] or [0, 2, 5] or [2, 3, 4, 5]

class Solution {
    private:
    int binary_search(vector<int>& arr, int target){
        int n = arr.size(), left = 0, right = n - 1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(arr[mid]== target)return mid;
            else if(arr[mid]< target) left = mid +1;
            else right = mid - 1;
        }
    }
    return left;
}

public:
    int lengthoflis(vector<int>& nums){
        for(int n : nums){
            if(res.empty() || res.back()< n){
                res.push_back(n);
            
            }else{
                int index = binary_search(res , n);
                res[index] = n;
            }
        }
        return res.size();
    }

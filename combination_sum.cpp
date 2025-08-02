//this is such a confusing question come on y do all this?
// to be gooad at programming u duffer lol
// the solution is a mix of recursion and backtracking 
// also makes use of desicion trees kinda stuff
//lets get started
// so basically u have a target and a list of candidates 
// you have to find unique combinations of the candidates that add up to the target 
// input 
// candidates = [1 ,2, 3, 4 , 5] target = 4
// output = [[1, 1, 1, 1], [1, 1, 2], [1, 2, 1], [2, 2], [1, 3], [3, 1], [4]]

class Solution {
    private:
    void makecomb(std::vector<int>& can, int tar, vector<int>& comb,int idx, int total, vector<vector<int>>& res){
        if (total == tar){
            res.push_back(comb);
            return;
        }
        if (total > tar || idx >= can.size()){
            return;
        }
        comb.push_back(can[idx]);
        makecomb(can, tar, comb, idx, total + can[idx], res);
        comb.pop_back();
        makecomb(can , tar , comb , idx + 1, total , res);
    }

    public:
    vector<vector<int>> combinationSum(vector<int>& can, int tar){
        vector<vector<int>> res;
        makecomb(can , tar , 0 , comb , 0 , res);
        return res;
    }
};



// here can is candidates and tar is target 
// my lazy ass didnt want to type the whole stuff

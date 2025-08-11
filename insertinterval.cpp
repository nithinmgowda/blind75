/*You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.

Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).

Return intervals after the insertion.

Note that you don't need to modify intervals in-place. You can make a new array and return it.

i just copy pasted the description from leetcode cause this thing is massive*/
 

class Solution{
    public:

    vector<vector<int>> insert(vector<vector<int>>& interval , vector<int>& newInterval){

        interval.push_back(newInterval);
        sort(interval.begin(),interval.end());
        int n = interval.size();

        vector<vector<int>> res;
        res.push_back(interval[0]);

        for(int i = 1; i<n ; ++i){
        if(res.back()[i]>=interval[i][0]){
            res.back()[i] = max(res.back()[1], interval[i][1]);
        }else{
            res.push_back(interval[i]);
        }
    }
    return res;
}
};

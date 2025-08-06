/* there is a robot which which is at the start of the grid and he has to cross the grid to reach the end
the end being grid[m-1][n-1] and start being grid[0][0]*/

/*we have to return no of possible unique paths that the robot can take to reach the finish line*/


class Solution{
    public:
    int uniquepath(int m , int n){
        std::vector<int> aboverow(n,1);

        for(int rows = 1; rows < m; rows++){
            vector<int> currrow(n,1);
            for(int cols = 1; cols < n; cols++){
                currrow[cols] = aboverow[cols] + currrow[cols - 1];
            }
            aboverow = currrow;
        }
        return aboverow[n - 1];
    }
};
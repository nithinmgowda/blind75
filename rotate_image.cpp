/* given a n * n matrix which u have to rotate
simple enough to understand 
constraints cant use a different matrix to rotate

         1  2  3          7  4  1
         4  5  6  >>>>>   8  5  2
         7  8  9          9  6  3 
         
so how do we solve this 
simple using a temp variable same as swapping number */


class Solution{
    public:

    void rotate(vector<vector<int>>& matrix){
        int edgelen = matrix.size();
        int top = 0;
        int bottom = edgelen - 1;

        while(top < bottom){
            for(int col =0; col < edgelen; col++){
                int temp = matrix[top][col];
                matrix[top][col] = matrix[bottom][col];
                matrix[bottom][col] = temp;
            }
            top++;
            bottom--;
        }
        for(int row = 0; row<edgelen; row++){
            for(int col = 0; col < endgelenl col++){
                int temp = matrix[row][col];
                matrix[row][col] = matrix[col][row];
                matrix[col][row] = temp;
            }
        }
    }
};


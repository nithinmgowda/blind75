/*a fun question to solve you are given with m*n matrix where all you have to do is where ever there is an element 
zero in the matrix the equvivalent row and columns elements to be made zero

think of it as zombies 
here zero is the zombie and it infects all the other elements in its rows and columns 
make note its only for rows and columns it does not apply for diagonal elements*/

/*example :  1   1   1                   1   0   1
             1   0   1        >>>>>>>    0   0   0
             1   1   1                   1   0   1 */

//code

class Solution{
    public:
    void setzeros(vector<vector<int>>& matrix){
        int rows = matrix.size();
        int cols = matrix[0].size();

        bool frz = false;  // frz is just firstrowzeros
        bool fcz = false;  // fcz again is just firstcolzeros


        for(int c=0; c<cols; c++){
            if(matrix[0][c]==0){
                frz = true;
                break;
            }
        }
        for(int r=0; r<rows; r++){
            if (matrix[r][0] == 0){
                fcz = true;
                break;
            }
        }
        for(int r = 1; r < rows; r++){
            for(int c = 1; c < cols; c++){
                if(matrix[r][c]==0){
                    matrix[r][0] = 0;
                    matrix[0][c] = 0;

                }
            }
        }

         for(int r = 1; r < rows; r++){
            if(matrix[r][0]==0){
                for(int c = 1; c<cols; c++){
                    matrix[r][c] = 0;

            }
        }
        }
         for(int c = 1; c < cols; c++){
            if(matrix[c][0]==0){
                for(int r = 1; r<rows; r++){
                    matrix[r][c] = 0;
                }
            }
        }
        if(frz){
            for(int c = 0; c<cols; c++){
                matrix[0][c] = 0;
            }
        }
        if(fcz){
            for(int r = 0; r<rows; r++){
                matrix[r][0] = 0;
            }
        }
    }
};
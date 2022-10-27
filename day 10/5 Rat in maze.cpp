
class Solution{
    public:
    
    void getPath(vector<vector<int>>&matrix,int n,int row,int col,vector<string>&res,string curr)
    {
        
        if((row>(n-1))||(col>(n-1))||(row<0)||(col<0)||(matrix[row][col]==0))
        {
            return;
        }
        
        if((row==(n-1))and(col==(n-1)))
        {
            res.push_back(curr);
            return;
        }
        
        matrix[row][col]=0;
        
        getPath(matrix,n,row-1,col,res,curr+"U");
        getPath(matrix,n,row+1,col,res,curr+"D");
        getPath(matrix,n,row,col-1,res,curr+"L");
        getPath(matrix,n,row,col+1,res,curr+"R");
        
        
        matrix[row][col]=1;
        
        return;
        
        
    }
    vector<string> findPath(vector<vector<int>> &matrix, int n) 
    {
        
        vector<string>res;
        
        getPath(matrix,n,0,0,res,"");
        
        return res;
        
    }
};

    
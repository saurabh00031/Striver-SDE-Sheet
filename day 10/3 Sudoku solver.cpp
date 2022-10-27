class Solution {
public:
	bool isValid(int r, int c, char ch, vector<vector<char>>& board)
	{
		for(int i=0;i<9;i++)
			if(board[i][c]==ch || board[r][i]==ch || board[3*(r/3)+i/3][3*(c/3)+i%3] == ch)   return false;
		return true;
	}
	bool solve(vector<vector<char>>& board) 
	{
		for(int i=0;i<9;i++)
			for(int j=0;j<9;j++)
				if(board[i][j]=='.')
				{
					for(char d='1';d<='9';d++)
						if(isValid(i,j,d,board))
						{
							board[i][j] = d;
							if(solve(board))    return true;
							else    board[i][j] = '.';
						}
					return false;
				}
		return true;
	}
	void solveSudoku(vector<vector<char>>& board)
	{
		solve(board);
	}
};
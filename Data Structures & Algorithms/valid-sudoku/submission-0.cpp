class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //For row checking
        for(int i=0;i<9;i++)
        {
            set<char>st;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                continue;
                if(st.count(board[i][j]))
                return false;
                st.insert(board[i][j]);
            }
        }

        //For column checking
        for(int j=0;j<9;j++)
        {
            set<char>st;
            for(int i=0;i<9;i++)
            {
                if(board[i][j]=='.')
                continue;
                if(st.count(board[i][j]))
                return false;
                st.insert(board[i][j]);
            }
        }

        // For 3x3 checking
        for(int i = 0; i < 9; i += 3)
        {
            for(int j = 0; j < 9; j += 3)
            {
                set<char> st;

                // Current 3x3 box
                for(int row = i; row < i + 3; row++)
                {
                    for(int col = j; col < j + 3; col++)
                    {
                        if(board[row][col] == '.')
                            continue;

                        if(st.count(board[row][col]))
                            return false;

                        st.insert(board[row][col]);
                    }
                }
            }
        }
        return true;
    }
};

class Solution {
public:
    bool checkRow(vector<vector<char>>& board,int row) {
        set<char> c_st;;
        
        for(int i = 0; i < 9; i++) {
            char c = board[row][i];        
            if(c_st.find(c) != c_st.end()) return false;        
            if(c != '.') c_st.insert(c);
        }
        return true;
    }
    
    bool checkCol(vector<vector<char>>& board,int col) {
        set<char> c_st;;
        
        for(int i = 0; i < 9; i++) {
            char c = board[i][col];          
            if(c_st.find(c) != c_st.end()) return false;         
            if(c != '.') c_st.insert(c);
        }
        return true;
    }
    
    bool checkBox(vector<vector<char>>& board,int startRow,int startCol) {
        set<char> c_st;;
        
        for(int i = 0; i < 9; i++) {
            for(int i = 0; i < 9; i++) {
                char c = board[i + startRow][i + startCol];           
                if(c_st.find(c) != c_st.end()) return false;         
                if(c != '.') c_st.insert(c);   
            }
        }
        return true;
    }
    
    bool isValid(vector<vector<char>> board, int row, int col) {
        return checkRow(board, row) && checkCol(board, col) && checkBox(board, row - (row%3), col - (col%3)); 
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(!isValid(board, i, j)) return false;
            }
        }
        return true;
    }
};
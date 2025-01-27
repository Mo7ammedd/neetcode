class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int r = 0; r < 9; ++r) {
            unordered_set<char> set;
            for(int c = 0; c < 9; ++c) {
                char val = board[r][c];
                if(val != '.' && set.count(val)) 
                    return false;
                set.insert(val);
            }
        }

        for(int c = 0; c < 9; ++c) {
            unordered_set<char> set;
            for(int r = 0; r < 9; ++r) {
                char val = board[r][c];
                if(val != '.' && set.count(val)) 
                    return false;
                set.insert(val);
            }
        }

        vector<unordered_set<char>> v(9);
        for(int r = 0; r < 9; ++r) {
            for(int c = 0; c < 9; ++c) {
                int loc = (r / 3) * 3 + c / 3;
                char val = board[r][c];
                if(val != '.' && v[loc].count(val))
                    return false;
                v[loc].insert(val);
            }
        }

        return true;
    }
};
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;
        for(int r=0;r<9;r++)
        for(int c=0;c<9;c++)
        {
            if(board[r][c]=='.')
            continue;
            char val=board[r][c];
            string rowkey=string(1,val)+"in row"+to_string(r);
            string colkey=string(1,val)+"in col"+to_string(c);
            string boxkey=string(1,val)+"in box"+to_string(r/3)+"-"+to_string(c/3);
            if(seen.count(rowkey)||seen.count(colkey)||seen.count(boxkey))
            {
                return false;
            }
            seen.insert(rowkey);
            seen.insert(colkey);
            seen.insert(boxkey);
        }
        return true;
    }
};
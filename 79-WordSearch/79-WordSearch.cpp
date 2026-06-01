// Last updated: 6/1/2026, 11:44:41 AM
class Solution {
public:

    bool dfs(vector<vector<char>>& board, string& word, int row, int col, int count) {
        if (count == word.size())
    return true;

        if (row < 0 || col < 0 ||
            row >= board.size() ||
            col >= board[0].size())
            return false;

        if (board[row][col] != word[count])
            return false;
                char temp = board[row][col];
                board[row][col] = '#';

        bool find = dfs(board, word, row + 1, col, count + 1) ||
                    dfs(board, word, row, col + 1, count + 1) ||
                    dfs(board, word, row - 1, col, count + 1) ||
                    dfs(board, word, row, col - 1, count + 1);
        board[row][col]=temp;

        return find;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (dfs(board, word, i, j, 0))
                    return true;
            }
        }
        return false;
    }
};
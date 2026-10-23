class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int row = 0; row < numRows; row++){
            vector<int> ansRow;
            long long val = 1;

            for(int col =0; col <= row; col++){
                ansRow.push_back(val);
                val = val * (row - col) / (col + 1);
            }
            ans.push_back(ansRow);

        }
        return ans;

        
    }
};
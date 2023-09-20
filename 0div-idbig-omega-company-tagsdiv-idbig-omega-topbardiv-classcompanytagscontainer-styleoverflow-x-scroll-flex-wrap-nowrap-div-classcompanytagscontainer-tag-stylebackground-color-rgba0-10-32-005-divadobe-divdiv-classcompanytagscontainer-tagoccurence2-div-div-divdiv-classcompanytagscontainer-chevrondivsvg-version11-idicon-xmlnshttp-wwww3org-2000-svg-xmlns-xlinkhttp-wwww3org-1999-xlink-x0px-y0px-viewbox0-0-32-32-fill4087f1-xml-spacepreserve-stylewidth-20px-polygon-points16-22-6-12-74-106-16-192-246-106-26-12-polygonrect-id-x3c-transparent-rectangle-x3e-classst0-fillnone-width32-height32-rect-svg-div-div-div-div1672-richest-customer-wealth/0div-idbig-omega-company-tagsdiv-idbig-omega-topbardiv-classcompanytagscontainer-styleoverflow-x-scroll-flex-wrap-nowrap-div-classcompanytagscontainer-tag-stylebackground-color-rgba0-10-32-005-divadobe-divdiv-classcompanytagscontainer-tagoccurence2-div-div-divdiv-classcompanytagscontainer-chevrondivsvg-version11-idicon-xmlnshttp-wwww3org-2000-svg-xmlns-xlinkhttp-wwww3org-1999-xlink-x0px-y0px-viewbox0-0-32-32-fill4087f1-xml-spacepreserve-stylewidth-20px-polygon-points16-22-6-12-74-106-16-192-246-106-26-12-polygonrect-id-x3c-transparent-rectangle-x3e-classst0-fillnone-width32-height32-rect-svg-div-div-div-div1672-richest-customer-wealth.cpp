class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = -99999999;
        int row = accounts.size();
        int col = accounts[0].size();
        for(int i = 0;i<row;i++){
            int wealth = 0;
            for(int j = 0;j<col;j++){
                wealth += accounts[i][j];
                
            }maxi = max(maxi,wealth);
        }
        return maxi;
    }
};
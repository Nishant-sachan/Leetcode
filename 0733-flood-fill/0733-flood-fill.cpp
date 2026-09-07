class Solution {
public:
    vector<int> delrow={-1,0,1,0};
    vector<int> delcol={0,1,0,-1};
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, vector<vector<int>>&ans){
        int n = image.size();
        int m = image[0].size();
        for(int i=0;i<4;i++){
            int nrow=sr+delrow[i];
            int ncol= sc+delcol[i];
            if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and image[nrow][ncol]==image[sr][sc] and ans[nrow][ncol]!=color){
                ans[nrow][ncol]=color;
                dfs(image,nrow,ncol,color,ans);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans= image;
        int initialColor = image[sr][sc];
        if(initialColor != color) {
            ans[sr][sc]=color;
             dfs(image,sr,sc,color,ans);
        }
       
        return ans;
    }
};
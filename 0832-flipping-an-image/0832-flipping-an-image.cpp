class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans;
        vector<int> temp;
        for(auto i: image){
            temp.clear();
            for(int j:i){
                if(j==0){
                    temp.push_back(1);
                }
                else{
                    temp.push_back(0);
                }
            }
        reverse(temp.begin(),temp.end());
        ans.push_back(temp);
        }
        return ans;
    }
};
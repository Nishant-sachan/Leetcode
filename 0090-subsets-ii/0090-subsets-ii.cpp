class Solution {
public:
set<vector<int>> result;
    void solve(int i , vector<int> &nums , vector<int>&temp){
            if(i>= nums.size()){
                result.insert(temp);  //final answer
                return ;
            }
            temp.push_back(nums[i]); //include
            solve(i+1,nums,temp);
            temp.pop_back();   //exclude
            solve(i+1,nums,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp; //store subsets
        sort(nums.begin(),nums.end());
        solve(0,nums,temp);
        return vector<vector<int>>(result.begin(), result.end());
    }
};
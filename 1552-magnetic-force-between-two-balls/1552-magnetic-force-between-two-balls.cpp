class Solution {
public:
    bool MinForce(vector<int>& position,int mid , int m){
        int n=position.size();
        int ball=1;
        int last=position[0];
        for(int i=0;i<n;i++){
            if(position[i]-last>=mid){
                ball++;
                last=position[i];
                if(ball>=m){
                    return true;
                }
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int start =1;
        int minn=*min_element(position.begin(),position.end());
        int maxx=*max_element(position.begin(),position.end());
        int end=maxx-minn;
        int ans;
        while(start<=end){
            int mid= start+(end-start)/2;
            if(MinForce(position , mid ,m)){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};
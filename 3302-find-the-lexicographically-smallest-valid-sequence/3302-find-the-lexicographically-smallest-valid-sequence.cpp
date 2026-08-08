class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n= word1.length();
        int m= word2.length();
        vector<int> right(n+1,0);
        int i=n-1;
        int j=m-1;
        int matched=0;
        while(i>=0){
            if(j>=0 and word1[i]==word2[j]){
                matched+=1;
                j--;
            }
            right[i]=matched;
            i--;
        }
        vector<int> seq;
        bool power =true;
        i=0;
        j=0;
        while(i<n and j<m){
            if(word1[i]==word2[j]){
                seq.push_back(i);
                j++;
            }
            else if(power==true and right[i+1]>=m-j-1){
                seq.push_back(i);
                j++;
                power=false;
            }
            i++;

        }
        return j==m?seq:vector<int>();
    }
};
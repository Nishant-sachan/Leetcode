class Solution {
public:
    bool isPossible(int row, int col ,int n, vector<string> &temp){
    int dupRow = row;
    int dupCol=col;

    // top left 
    while(row>=0 and col>=0){
        if(temp[row][col]=='Q'){
            return false;
        }
        row--;
        col--;
    }
    // Reset row and col
        row = dupRow;
        col = dupCol;

    // left
        while(col>=0){
        if(temp[row][col]=='Q'){
            return false;
        }
        col--;
    }
    // Reset row and col
        row = dupRow;
        col = dupCol;
    //bottom left
        while(row<n and col>=0){
        if(temp[row][col]=='Q'){
            return false;
        }
        row++;
        col--;
    }
    return true;
}
void solve(int col,int n,vector<string>&temp,int &count){

    if(col==n){
        count++;
        return ;
    }
    for(int row=0;row<n;row++){
        if(isPossible(row,col,n,temp)){
            temp[row][col]='Q';
            solve(col+1,n,temp,count);
            temp[row][col]='.';
        }
    }

}

    int totalNQueens(int n) {
        vector<string> temp(n, string(n, '.'));

        int count=0;

        solve(0, n, temp, count);

        return count;
    }
        
    
};
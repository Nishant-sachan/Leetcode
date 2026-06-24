class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i =0;
        int index=0;
        while(i<n){

            //current character 
            char curr = chars[i];
            int count =0;    // count is zero

            while(i<n and chars[i]== curr){
                count++;
                i++;
            }
            // now do assign work 
            chars[index] = curr;
            index++;
            if(count>1){
                string curr_count = to_string(count);
                for(char &ch : curr_count){
                    chars[index]=ch;
                    index++;
                }
            }
            
        }  
        return index;      
        
        
    }
};
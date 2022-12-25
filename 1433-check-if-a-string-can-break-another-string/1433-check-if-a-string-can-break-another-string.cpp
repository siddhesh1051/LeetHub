class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        bool ans = true;
        bool ansa = true; 
   for(int i=0;i<s1.size();i++){     
        if(s1[i]<s2[i]){
            ans = false;
            
            break;
            
        }
       }
        for(int i=0;i<s1.size();i++){     
        if(s2[i]<s1[i]){
            ansa = false;
           
            break;
            
        }
       }
        
        bool final = ans || ansa;
        
        return final;
    }
};
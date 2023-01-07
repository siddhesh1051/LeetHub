class Solution {
public:
    string categorizeBox(long length, long width, long height, int mass) {
        
         bool heavy = false;
         bool bulky = false;
        string s="";
        long long int volume = length*width*height;
        
        if(length>=10000 ||width>=10000 ||height>=10000 ||mass>=10000 || (volume)>=1000000000){
            
            bulky = true;
            
        }
        
        if(mass>=100){
            heavy = true;
            
        }
        
        
        if(heavy==1 && bulky==1){
            s  = "Both";
            
        }
        if(heavy==1 && bulky==0){
            s  = "Heavy";
            return s;
        }
        if(heavy==0 && bulky==1){
            s  = "Bulky";
            return s;
        }
        if(heavy==0 && bulky==0){
            s  = "Neither";
            return s;
        }
        
        
        
      return s;  
    }
};
class Solution {
public:
    int myAtoi(string s) {
        long long int i=0, cnt=0, chk=1;
        while(s[i]==' '){i++;}
        if(s[i]=='-' || s[i]=='+'){if(s[i]=='-'){chk=-1;} i++;}
        for(; i<s.size(); i++){
            if(s[i]>='0' && s[i]<='9'){
                if(chk==1 && cnt>=pow(2, 31)-1){
                    cnt=pow(2, 31)-1; break;
                }
                if(chk==-1 && cnt>pow(2, 31)){
                    cnt=(-1)*pow(2, 31);
                    break;
                }
                cnt*=10;
                cnt+=s[i]-'0';
            }
            else{break;}
        }
        if(chk==-1 && cnt>0){cnt*=(-1);}
        if(cnt>=pow(2, 31)-1){
            return pow(2, 31)-1;
        }
        if(cnt<=(-1)*pow(2, 31)){
            return (-1)*pow(2, 31);
        }
        return cnt;
    }
};
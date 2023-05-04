class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> qr,qd;
        int n = senate.size();
        
        for(int i=0;i<n;i++){
            if(senate[i]=='R') qr.push(i);
            else if(senate[i]=='D') qd.push(i);
            
        }
        
        while(!qr.empty() && !qd.empty()){
            int r = qr.front();
            int d = qd.front();
            if(r<d) {
                    qr.push(n);}
            else if(r>d){ 
                        qd.push(n);}
            qd.pop();
            qr.pop();
            n++;
        }
        
        if(qr.empty()) return "Dire";
        else if(qd.empty()) return "Radiant";
        
        return "no";
    }
};
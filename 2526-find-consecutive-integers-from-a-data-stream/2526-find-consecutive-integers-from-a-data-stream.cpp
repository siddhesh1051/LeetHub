class DataStream {
public:
    int val=0,a=0;
    int cnt=0;
    DataStream(int value, int k) {
        val=value;
        a=k;
    }
    
    bool consec(int num) {
        if(num!=val)
            cnt=0;
        if(num==val)
            cnt++;
    return cnt>=a?1:0;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
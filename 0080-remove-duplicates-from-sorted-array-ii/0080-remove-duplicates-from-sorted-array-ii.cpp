class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int i=1,c=1;
        while(i<nums.size()){
            if(nums[i]==nums[i-1] && c<2){ i++;c++;}
            else if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i);
            }
            else{
                i++;
                c=1;
            }
        }
        
        return nums.size();
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int freq=1;
        for(int i=0; i<n; i++){
            int a = nums[i];
            for(int j=i+1; j<n; j++){
                if(nums[i]==nums[j]){
                    freq++;
                }
            }
            if(freq > n/2){
                return nums[i];
                break;
            }else{
                freq=1;
            }
        }
        return -1;
    }
};

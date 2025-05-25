class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> temp;
        int n=nums.size();
        int freq=0;
        int ans=0;
        for(int i=0; i<n; i++){
            if(nums[i]==1){
                freq+=1;
                ans = max(ans, freq);
            }else{
                ans = max(ans, freq);
                freq=0;
            }
        }
        return ans;
    }
};

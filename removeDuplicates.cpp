class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = nums.size();
        int ans = 0;
        for(int i=0; i<l-1; i++){
            if(nums[i]==nums[i+1]){
                ans++;
            }
        }
        set<int> s(nums.begin(), nums.end());
        nums.assign(s.begin(), s.end());
    return (l-ans);
    }
};

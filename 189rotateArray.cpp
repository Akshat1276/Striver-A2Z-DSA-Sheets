class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> s(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            s[(i+k)%n] = nums[i];
        }
        nums.assign(s.begin(), s.end());
    }
};



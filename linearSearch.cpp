class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        int n = nums.size();
        int answer = -1;
        for(int i=0; i<n; i++){
            if(nums[i]==target){
                answer = i;
                break;
            }
        }
        return answer;
    }
};

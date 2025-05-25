class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        //case 1
        if(nums[0] != 0)return 0;
        //case 2 
        if(nums[n-1] != n)return n;
        for(int i =1;i<nums.size();i++){
            if(nums[i] != i){
            //case 3
            return i;
            }
        }
        return 0;
    }
};


//sigma boy code //beats 100%
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int temp=0;
        for(int i=0; i<n; i++){
            temp+=nums[i];
        }
        return n*(n+1)/2 - temp;
    }
};

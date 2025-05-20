class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n = nums.length();
        int largest = nums[0];
        int sLargest = -1;
        for(int i=1; i<n; i++){
            if(largest > nums[i]){
                int sLargest = largest;
                int largest = nums[i];
            }else if(largest < nums[i]){
                if(sLargest > nums[i]){
                    sLargest = nums[i];
                }
            }
        }
    return sLargest;
    }
};

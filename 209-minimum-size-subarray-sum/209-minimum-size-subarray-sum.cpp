class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=0;
        int result = 9876543;
        while(j<nums.size()){
            sum+=nums[j];
            j++;
            while(sum>=target){
                result = min(result,j-i);
                sum-=nums[i];
                i++;
            }
        }
        if(result==9876543) return 0;
        return result;

    }
};
class Solution {
public:
    void sortColors(vector<int>& nums) {
    for (int i =0; i<nums.size()-1; i++)
    {
        for (int j=0; j<nums.size()-1-i; j++)
        {
        if(nums[j]>nums[j+1])
        {
            // swap(nums[i],nums[i+1]);
            swap(nums[j],nums[j+1]);
        };
        };
    };
        
    };
};
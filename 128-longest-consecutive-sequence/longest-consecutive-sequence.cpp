class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ctr = 0,  lastSmaller= INT_MIN ,longest = 0,n=nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n ; i++) {
            if (nums[i]-1 == lastSmaller) {
                ctr++;
                lastSmaller = nums[i];
            } else if ( lastSmaller!= nums[i]) {
                ctr = 1;
                 lastSmaller= nums[i];
            }
            longest =max(longest,ctr);
        }
        return longest;
    }
};
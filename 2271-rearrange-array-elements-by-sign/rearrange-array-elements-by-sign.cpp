class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p = 0, n = 1;
        vector<int> out(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                out[p] = nums[i];
                p = p + 2;

            } else if (nums[i] < 0) {
                out[n] = nums[i];
                n = n + 2;
            }
        }

        return out;
    }
};
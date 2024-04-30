class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p = 0;
        vector<int> pos;
        vector<int> nig;
        vector<int> out;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                pos.push_back(nums[i]);
            } else if (nums[i] < 0) {
                nig.push_back(nums[i]);
            }
        }
        for (int i = 0; i < nums.size() / 2; i++) {
            out.push_back(pos[i]);
            out.push_back(nig[i]);
        }

        return out;
    }
};
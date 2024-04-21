class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_multiply = INT_MIN;
        int product = 1;
        int prefix=1;
        int suffix=1;
    
        int n = nums.size();

        for (int i =0; i<n; i++)
        {
            if (prefix==0)
            {
                prefix=1;
            }
            if(suffix==0)
            suffix=1;

            prefix = prefix * nums[i];
            suffix = suffix * nums[n-i-1];
            max_multiply = max(max_multiply,max(prefix,suffix));
    
       }
        return max_multiply;

    }
};
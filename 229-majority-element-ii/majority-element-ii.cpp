#include <iostream> 
#include <vector> 
using namespace std; 

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        vector<int >arr;
        int count=0;
        
        for (int i=0; i<nums.size(); i++)
        {
                count=0;
           for (int j=i; j<nums.size(); j++)
            {
                if (nums[j]==nums[i])
                {
                    count++;
                };

            }

            if(arr.size()==2)
            {
                break;
            };

            if((nums.size()/3)<count)
            {
                if (find(arr.begin(), arr.end(), nums[i]) == arr.end()) {
                    arr.push_back(nums[i]);
                };
            };



        }
    return arr;

    }


};
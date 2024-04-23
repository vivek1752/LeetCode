#include <iostream> 
#include <vector> 
using namespace std; 

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int count1=0; int count2=0;
        int ele1=INT_MIN; int ele2=INT_MIN;

        for (int i=0; i<nums.size(); i++)
        // {
        //     if (count1==0 && ele1!=nums[i])
        //     {
        //         count1=1;
        //         ele1=nums[i];
        //     }else if (count2==0 && ele2!=nums[i]){
        //         count2=1;
        //         ele2=nums[i];
        //     }else if (ele1==nums[i])count1++;
        //     else if (ele2==nums[i])count2++;
        //     else {
        //         count1--; count2--;
        //     }
        // }
       {
        
            if (ele1==nums[i])
                count1++;
            else if (ele2==nums[i])
                count2++;
            else if (count1==0) {
                count1=1;
                ele1=nums[i];
            } else if (count2==0) {
                count2=1;
                ele2=nums[i];
            } else {
                count1--; count2--;
            }
       } 
        vector <int> out;
        count1=0; count2=0;

        for (int i=0; i<nums.size(); i++)
        {
            if (ele1 == nums[i]) count1++;
            if (ele2 == nums[i]) count2++;
            
           
        }
        int mini = ((int)(nums.size()/3));
         if (count1>mini)out.push_back(ele1);
         if (count2>mini)out.push_back(ele2);
         sort(out.begin(), out.end());
       return out; 
    }


};
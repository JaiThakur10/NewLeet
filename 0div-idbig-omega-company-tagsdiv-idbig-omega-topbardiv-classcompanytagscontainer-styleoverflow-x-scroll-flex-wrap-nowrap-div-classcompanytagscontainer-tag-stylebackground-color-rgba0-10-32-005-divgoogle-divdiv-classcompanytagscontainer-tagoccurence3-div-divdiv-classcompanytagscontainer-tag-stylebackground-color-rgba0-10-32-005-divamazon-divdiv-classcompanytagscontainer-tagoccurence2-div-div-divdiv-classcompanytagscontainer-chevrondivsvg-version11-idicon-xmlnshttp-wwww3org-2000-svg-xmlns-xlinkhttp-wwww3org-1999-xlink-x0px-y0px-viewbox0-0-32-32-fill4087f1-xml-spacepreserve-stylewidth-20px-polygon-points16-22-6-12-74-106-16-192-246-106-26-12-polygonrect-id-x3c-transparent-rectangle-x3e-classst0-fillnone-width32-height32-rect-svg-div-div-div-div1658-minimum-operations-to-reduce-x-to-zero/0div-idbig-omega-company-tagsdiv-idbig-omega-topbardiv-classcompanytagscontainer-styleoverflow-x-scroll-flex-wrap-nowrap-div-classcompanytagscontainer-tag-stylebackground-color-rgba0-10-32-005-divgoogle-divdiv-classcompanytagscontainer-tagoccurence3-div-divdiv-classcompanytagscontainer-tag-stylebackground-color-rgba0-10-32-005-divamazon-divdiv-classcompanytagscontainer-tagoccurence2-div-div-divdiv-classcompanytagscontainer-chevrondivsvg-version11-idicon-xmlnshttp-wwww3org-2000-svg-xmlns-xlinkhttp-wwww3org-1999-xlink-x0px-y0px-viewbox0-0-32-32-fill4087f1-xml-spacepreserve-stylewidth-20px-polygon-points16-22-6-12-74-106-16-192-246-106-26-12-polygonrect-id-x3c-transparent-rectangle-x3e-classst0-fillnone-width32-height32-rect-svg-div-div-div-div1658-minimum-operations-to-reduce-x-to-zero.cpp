class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int start =0;
        int end =0;
        int totalsum = accumulate(nums.begin(),nums.end(),0); 
        int sum_to_make = totalsum - x; 
        if(totalsum==x)return nums.size();
        int ans = 0;
        int sum =0;
        
        while(end<nums.size())
        {  sum+=nums[end]; 
            
         while(start<end && sum>sum_to_make) 
         {
             sum-=nums[start++]; 
         }
         if(sum==sum_to_make) 
         {
             ans = max(ans,end-start+1); 
         }
         
           end++;
            
        }
        
        return ans==0 ? -1 : nums.size()-ans;
    }
};
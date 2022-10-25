class Solution {
public:
    
    unordered_map<int, int>mp;
    
   int  maximumAmount(vector<int>&nums, int currentvalue )
    {
      if(currentvalue>=nums.size())
          return 0;
       
       int currentkey=currentvalue;
       
       if(mp.find(currentkey)!=mp.end())
           return mp[currentkey];
       
       int rob=nums[currentvalue]+maximumAmount(nums, currentvalue+2);
       int norob=maximumAmount(nums, currentvalue+1);
       
       
       
       
       
       mp[currentkey]=max(rob,norob);
       
       return max(rob,norob);
       
    }
    int rob(vector<int>& nums)
    {
        
       return  maximumAmount(nums, 0);
        
    }
};

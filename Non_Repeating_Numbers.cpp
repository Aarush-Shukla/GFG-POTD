  vector<int> singleNumber(vector<int> nums) 
    {
           vector<int>ans;
        if(nums.size()==0) return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]) ans.push_back(nums[i]);
        }
        return ans;
    }

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n=nums.size();
      vector<int> op;
      for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
          if(target == nums[i]+nums[j]) {
            op.push_back(i);
            op.push_back(j);
          }
        }
      }
      return op;
    }
};
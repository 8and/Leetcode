class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
      vector<int> op;
        for(int i=0; i<nums.size(); i+=2) {
          for(int j=0; j<nums[i]; j++) op.push_back(nums[i+1]);
        }
      return op;
    }
};
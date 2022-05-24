class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
      vector<int> op;
      for(int i: nums) {
        sum+= i;
        op.push_back(sum);
      }
      return op;
    }
};
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      vector<int> op;
      for(int i: nums) op.push_back(i);
      for(int i: nums) op.push_back(i);
      return op;
    }
};
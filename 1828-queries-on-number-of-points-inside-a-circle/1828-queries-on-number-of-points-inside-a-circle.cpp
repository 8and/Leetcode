class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>op;
      for(vector<int> i: queries) {
        int count=0;
        for(vector<int> arr: points) {
          if((arr[0]-i[0])*(arr[0]-i[0]) +(arr[1]-i[1])*(arr[1]-i[1]) <= i[2]*i[2]) count++;
        }
        op.push_back(count);
      }
      return op;
    }
};
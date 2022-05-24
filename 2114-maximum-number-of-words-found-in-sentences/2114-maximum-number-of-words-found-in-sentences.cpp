class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
      int mWF=0;
      for(string i: sentences) {
        int max=0;
        for(char c: i) { 
          if(c == ' ') max++;
        }
        if(max+1>mWF) mWF = max+1;
      }
      return mWF;
    }
};
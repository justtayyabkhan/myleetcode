class Solution {
public:
    int strStr(string haystack, string needle) {
      int m=haystack.size();
      int n=needle.size();
      for(int l=0;l<=m-n;l++)
      {
          int first=l;
          int second=0;
          while(second<n)
          {
              if(haystack[first]==needle[second])
              {
                  first++;
                  second++;
              }
              else break;
          }
          if(second==n) return first-second;

      }

        return -1;
    }
};

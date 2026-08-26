class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
  
        int low=0;
        int len=INT_MAX;
        int n=s.size();
        int ones=0;
        int st,end;
        for(int i=0;i<n;i++){
            if(s[i]=='1') ones++;
            while(ones>k){
                if(s[low]=='1') ones--;
                low++;
            }
            if(ones==k){
               

               while(s[low]=='0') low++;
               int currLen = i-low+1;

                if(currLen < len ||
                   (currLen == len && s.substr(low,currLen) < s.substr(st,len))){
                    len=i-low+1;
                    st=low;
                    end=i;
                }

            }

        }
        


        return (len==INT_MAX?"":s.substr(st,len));
    }
};
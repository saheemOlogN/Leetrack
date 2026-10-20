class Solution {
public:
      void computeLPS(vector<int>& pattern, vector<int>& lps) {
        int M = pattern.size();
        int len = 0;
        lps[0] = 0;

        int i = 1;
        while (i < M) {
            if (pattern[i] == pattern[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }

    bool search(vector<int>& pat, vector<int>& txt) {
        int N = txt.size();
        int M = pat.size();

        vector<int> lps(M, 0);
        computeLPS(pat, lps);

        int i = 0; 
        int j = 0; 

        while (i < N) {
            if (pat[j] == txt[i]) {
                i++;
                j++;
            }

            if (j == M) {
                return true; 
            } else if (i < N && pat[j] != txt[i]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        return false;
    }
   
    bool isRotation(vector<int>& vec1, vector<int>& vec2) {
        vector<int> txt = vec2;
        txt.insert(end(txt), begin(vec2), end(vec2)); 
        return search(vec1, txt);
    }
    int sortableIntegers(vector<int>& nums) {
        int res=0;
        vector<int> temp=nums;
        sort(begin(temp),end(temp));
        int n=nums.size();
        for(int i=1;i<=nums.size();i++){
            if(n%i!=0) continue;
            bool valid=true;
            for(int start=0;start<n;start+=i){
                   vector<int> vec1(begin(nums) + start, begin(nums) + start + i);
                vector<int> vec2(begin(temp) + start, begin(temp) + start + i);

                if (!isRotation(vec1, vec2)) {
                    valid = false;
                    break;
                }
            }
            if(valid) res+=i;
        }
        return res;
    }
};
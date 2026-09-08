class Solution {
public:
int count(int n){
    if(n<3) return 0;
    return (n-1)/3;
}
    int countCommas(int n) {
        int res=0;
        
        for(int i=1000;i<=n;i++){
            string temp=to_string(i);
            res+=count(temp.size());
        }


        return res;
    }
};
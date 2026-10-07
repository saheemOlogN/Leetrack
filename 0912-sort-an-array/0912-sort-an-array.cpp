class Solution {
public:
    
    void mergeSort(vector<int>& nums,int l,int r){
        if(l>=r) return;
        int mid=l+(r-l)/2;
        mergeSort(nums,l,mid);
        mergeSort(nums,mid+1,r);
        return merge(nums,l,r,mid);
    }
    void merge(vector<int>& nums,int l,int r,int mid){
        int n1=mid-l+1;
        int n2=r-mid;

        vector<int> left(n1);
        vector<int> right(n2);
        int k=l;
        for(int i=0;i<n1;i++){
            left[i]=nums[k];
            k++;
        }

         for(int i=0;i<n2;i++){
            right[i]=nums[k];
            k++;
        }
        int i=0,j=0;
        k=l;
        while(i<n1 && j<n2){
            if(left[i]<right[j]){
                nums[k]=left[i];
                k++;
                i++;
            } else{
                nums[k]=right[j];
                k++;
                j++;
            }
        }
        while(i<n1){
             nums[k]=left[i];
                k++;
                i++;
        }

         while(j<n2){
             nums[k]=right[j];
                k++;
                j++;
        }


       
        
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        mergeSort(nums,0,n-1);
        return nums;

    }
};
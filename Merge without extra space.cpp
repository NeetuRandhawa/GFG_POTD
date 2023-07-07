class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int gap=ceil((n+m)/(double)2);
            while(gap>0){
                int i=0,j=gap;
                while(j<(n+m)){
                    if(i<n && j<n && arr1[i]>arr1[j]){
                        swap(arr1[i], arr1[j]);
                    }
                    else if(i<n && j>=n && arr1[i]> arr2[j-n]){
                        swap(arr1[i], arr2[j-n]);
                    }
                    else if(i>=n && j>=n && arr2[i-n]> arr2[j-n]){
                        swap(arr2[i-n], arr2[j-n]);
                    }
                    ++i;
                    ++j;
                }
                if(gap==1) gap=0;
                else gap=ceil(gap/(double)2);
            }
            
        } 
};

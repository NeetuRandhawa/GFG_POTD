class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        if(n<3) return 0;
        
        sort(arr,arr+n);
        
        for(int i=0;i<n;i++){
            int a= arr[i];
            int l=i+1, r=n-1;
            while(r>l){
                if( a+ arr[l]+arr[r] ==0) return 1;
                else if(a+ arr[l]+arr[r] >0){
                    r--;
                }else{
                    l++;
                }
            }
        }
        return 0;
        
    }
};

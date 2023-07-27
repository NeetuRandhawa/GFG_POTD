class Solution{

 //Heapify function to maintain heap property.
 public:
    void heapify(int arr[], int n, int i){
        // Your Code Here
        
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        if(left<n && arr[left]>arr[largest]){
          largest=left;
        }
        if(right<n && arr[right]>arr[largest]){
          largest=right;
        }
        if(largest!=i){
            swap(arr[i],arr[largest]);
            heapify(arr,n,largest);
        }
    }

//Function to build a Heap from array.
    public:
    void buildHeap(int arr[], int n){
        // Your Code Here
        for(int i=n/2-1;i>=0;i--){
            heapify(arr,n,i);
        }
    }

//Function to sort an array using Heap Sort.
    public:
    void heapSort(int arr[], int n){
        //code here
        buildHeap(arr,n);
        while(n--){
            swap(arr[0],arr[n]);
            heapify(arr,n,0);
        }
    }

};

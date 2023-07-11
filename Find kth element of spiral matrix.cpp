class Solution
{
    public:
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
         int order=0;
         int row, col;
         int top=0, bottom=n-1, left=0, right=m-1;
         while(true) {
             row=top;
             col=left;
             while(order<k && col<=right) {
                 order++;
                 col++;
             }
             if(order==k) {
                 return a[row][col-1];
             }
             row=top+1;
             col=right;
             while(order<k && row<=bottom) {
                 order++;
                 row++;
             }
             if(order==k) {
                 return a[row-1][col];
             }
             row=bottom;
             col=right-1;
             while(order<k && col>=left) {
                 order++;
                 col--;
             }
             if(order==k) {
                 return a[row][col+1];
             }
             row=bottom-1;
             col=left;
             while(order<k && row>top) {
                 order++;
                 row--;
             }
             if(order==k) {
                 return a[row+1][col];
             }
             top++;
             bottom--;
             left++;
             right--;
         }
         return 0;
    }
};

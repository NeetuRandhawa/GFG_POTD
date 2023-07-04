class Solution{
  public:
int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        int ans = 0;
        int start = 0, end = 0;
        long long product = 1;
        while(start < n && end < n) {
            product *= a[end];
            
            while(product >= k && start < end) {
                product /= (long long)a[start];
                start++;
            }
            if(product < k)
                ans += end-start+1;
            end++;
        }
        return ans;
    }
};

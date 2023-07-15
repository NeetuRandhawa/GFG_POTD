class Solution
{
    public:
    //Function to delete middle element of a stack.
void deleteMid(stack<int>&s, int n)
    {
        vector<int>v;
        int k=n/2;
        while(k--){
            v.push_back(s.top());
            s.pop();
        }
        s.pop();
        for(int i=v.size()-1;i>=0;i--){
            s.push(v[i]);
        }
    }
};

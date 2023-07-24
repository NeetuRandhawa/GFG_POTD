class Solution
{
    public:
    vector<int> rightView(Node *root)
    {
       vector<int> ans;
       
       queue<Node*> q;
       q.push(root);
       while(!q.empty()){
           int sz = q.size();
           
           for(int i=0; i<sz; i++){
               Node *temp = q.front();
               q.pop();
               if(i==0){
                   ans.push_back(temp->data);
               }
               if(temp->right){
                   q.push(temp->right);
               }
               if(temp->left){
                   q.push(temp->left);
               }
           }
       }
       return ans;
       
    }
};

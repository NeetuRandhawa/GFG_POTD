void help(Node *root,int k, int node, vector<int> &v,int &ans){
    if(!root) return;
    if(root->data == node){
        int s = v.size();
        if(s>=k){
            ans = v[s-k];
            return;
        }
    }
    v.push_back(root->data);
    help(root->left,k,node,v,ans);
    help(root->right,k,node,v,ans);
    v.pop_back();
}
int kthAncestor(Node *root, int k, int node)
{
    // Code here
    int ans = -1;
    vector<int>v;
    help(root,k,node,v,ans);
    return ans;
}

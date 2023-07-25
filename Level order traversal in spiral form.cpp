vector<int> findSpiral(Node *root)
{
    //Your code here
    int l=0;
    queue<Node*>q;
    vector<int>ans;
    Node* temp=root;
    q.push(temp);
    
    while(!q.empty()){
       
        vector<int> let;
        int nn=q.size();
        for(int i=0;i<nn;i++){
            Node* front= q.front();
            q.pop();
            if(l%2==0){
                let.push_back(front->data);
            }
            else{
                ans.push_back(front->data);
            }
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
            
        }
        reverse(let.begin(),let.end());
        for(auto it: let)
        {
            ans.push_back(it);
        }
        l++;
    }
    return ans;
    
}

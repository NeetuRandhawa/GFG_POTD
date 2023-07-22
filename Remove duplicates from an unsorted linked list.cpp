class Solution
{
    public:
    

Node * removeDuplicates( Node *head) 
    {
        unordered_map<int,int> m;
        
        Node *temp = head,*nn=NULL,*prev=NULL;
        
        while(temp!=NULL){
            m[temp->data]++;
            temp=temp->next;
        }
        temp = head;
        
        while(temp!=NULL){
            nn = temp->next;
            if(m[temp->data]==0){
                prev->next = nn;
                temp = nn;
            }
            else{
                m[temp->data] = 0;
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};

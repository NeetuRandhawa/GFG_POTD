class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        
        if (head->next == NULL)
        {
            return head;
        }
        
        struct node *Nest_Cur = head;
        int s = 0;
        
        while (Nest_Cur != NULL)
        {
            ++s;
            Nest_Cur = Nest_Cur->next;
        }

        struct node *NNOde = new struct node(0);
        NNOde->next = head;
        struct node *nxt = NULL, *pre = NNOde;
        
        while(s)
        {
            Nest_Cur = pre->next;
            nxt = Nest_Cur->next;
            int l = min(k, s);
            
            for (int i = 0; i < (l - 1); ++i)
            {
                Nest_Cur->next = nxt->next;
                nxt->next = pre->next;
                pre->next = nxt;
                nxt = Nest_Cur->next;
            }
            
            pre = Nest_Cur;
            s -= l;
        }
        
        
        return NNOde->next;
    }
};

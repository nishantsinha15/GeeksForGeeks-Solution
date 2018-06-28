void rotate(struct node **head_ref, int k)
{
    int k1 = k;
    struct node *head = *head_ref;
    struct node *prev = NULL;
    while(k1--)
    {
        cout<<head->data<<" ";
        prev = head;
        head = head->next;
    }
    struct node *endP = head;
    while( endP->next != NULL )
    {
        endP = endP->next;
    }
    prev->next = NULL;
    endP->next = *head_ref;
    head_ref = &head;
}

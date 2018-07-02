void pairWiseSwap(struct node *head)
{
    if( head == NULL || head->next == NULL )
        return;
    int c = 0;
    struct node * prev, *nextNode;
    while( head != NULL && head->next != NULL )
    {
        int temp = head->data;
        head->data = head->next->data;
        head->next->data = temp;
        head = head->next->next;
    }
}

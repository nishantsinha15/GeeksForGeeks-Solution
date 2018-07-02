Node* SortedMerge(Node* head1,   Node* head2)
{
    Node *p1 = head1;
    Node *p2 = head2;
    Node *newHead;
    Node *iter;
    if( p1 -> data <= p2->data )
    {
        newHead = p1;
        iter = p1;
        p1 = p1->next;
    }
    else
    {
        newHead = p2;
        iter = p2;
        p2 = p2->next;
    }
    while( p1 != NULL && p2 != NULL )
    {
        if( p1->data <= p2->data )
        {
            iter->next = p1;
            p1 = p1->next;
        }
        else
        {
            iter->next = p2;
            p2 = p2->next;
        }
        iter = iter->next;
    }
    while( p1 != NULL )
    {
        iter->next = p1;
        p1 = p1->next;
        iter = iter->next;
    }
    while( p2 != NULL )
    {
        iter->next = p2;
        p2 = p2->next;
        iter = iter->next;
    }
    iter->next = NULL;
    return newHead;
}

int intersectPoint(Node* head1, Node* head2)
{
    Node *iter = head1;
    int c = 0;
    while( iter->next!= NULL )
    {
        iter = iter->next;
        c++;
    }
    iter->next = head1;
    Node *slow = head2;
    Node *fast = head2;
    Node *meet = NULL;
    while( fast!= NULL && fast->next != NULL )
    {
        slow = slow->next;
        fast = fast->next->next;
        if( slow == fast )
        {
            meet = slow;
            break;
        }
    }
    if( meet == NULL )
        return -1;
    iter = head2;
    while( iter != meet )
    {
        iter = iter->next;
        meet = meet->next;
    }
    return iter->data;
}

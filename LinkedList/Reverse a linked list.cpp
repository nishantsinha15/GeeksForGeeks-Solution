Node* reverse( Node *head )
{
    if( head == NULL || head->next == NULL )
        return head;
    if( head->next->next == NULL )
    {
        Node *nextNode = head->next;
        nextNode->next = head;
        head->next = NULL;
        return nextNode;
    }

    Node *prev, *nextNode, *curr;
    prev = NULL;
    nextNode = head->next;
    curr = head;
    while( nextNode != NULL )
    {
        curr->next = prev;
        prev = curr;
        curr = nextNode;
        nextNode = nextNode->next;
    }
    curr->next = prev;
    return curr;
}

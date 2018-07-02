Node* getMiddle( Node *head )
{
    if( head == NULL )
        return NULL;
    Node *slow = head;
    Node *fast = head;
    while( fast != NULL && fast->next != NULL )
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

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


bool isPalindrome(Node *head)
{
    Node *middle = getMiddle(head);
    Node *secondHalf = reverse(middle);
    Node *iter = secondHalf;
    // cout<<middle->data<<" "<<secondHalf->data<<endl;
    while( head != secondHalf && iter != NULL)
    {
        if( head->data != iter ->data )
            return false;
        head = head->next;
        iter = iter->next;
    }
    return true;
}


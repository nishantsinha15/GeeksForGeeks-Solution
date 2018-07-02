Node* addNode( Node *head, int data, Node** tail)
{
  //  cout<<"Hello "<<*tail<<endl;
    Node *head1 = head;
    Node *newNode = ( Node *)malloc(sizeof(Node));
    newNode -> data = data;
    newNode ->next = NULL;
    if( head == NULL )
    {
        *tail = newNode;
//cout<<"Hello1 "<<*tail<<endl;
        return newNode;
    }
    Node *myTail = *tail;
    myTail->next = newNode;
    *tail = newNode;
    //cout<<"Hello1 "<<*tail<<endl;
    return head;
}

Node*  addTwoLists(Node* first, Node* second)
{
    Node *head;
    Node *tail;
    int carry = 0;
    while( first != NULL && second != NULL )
    {
        int add = first->data + second->data + carry ;
        carry = 0;
        if( add > 9 )
        {
            carry = add/10;
            add = add%10;
        }
        cout<<tail->data<<" ";
        addNode(head, add, &tail );
        cout<<tail->data<<"\n";
        //cout<<head<<" "<<tail<<endl;
        first = first->next;
        second = second->next;
    }
    while( first!= NULL )
    {
        int add = first->data + carry ;
        carry = 0;
        if( add > 9 )
        {
            carry = add/10;
            add = add%10;
        }
        addNode(head, add, &tail );
        first = first->next;
    }
    while( second!= NULL )
    {
        int add = second->data + carry ;
        carry = 0;
        if( add > 9 )
        {
            carry = add/10;
            add = add%10;
        }
        addNode(head, add, &tail );
        second = second->next;
    }
    if( carry > 0 )
        addNode(head, carry, &tail);
    return head;
}


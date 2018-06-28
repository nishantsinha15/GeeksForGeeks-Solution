int getNthFromLast(Node *head, int n)
{
	if( head == NULL )
	    return -1;
	
	Node *front = head;
	Node *back = head;
    
	for( int i = 1; i < n; i++ )
	{
		if( front->next == NULL )
			return -1;
		front = front->next;
	}

	while( front->next != NULL )
	{
		front = front->next;
		back = back->next;
	}
	return back->data;
}
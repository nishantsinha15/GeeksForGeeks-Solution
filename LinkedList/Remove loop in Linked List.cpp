Node* detectloop( struct node *list )
{
	struct node *slow = list;
	struct node *fast = list;
	while( slow != NULL && fast != NULL )
	{
		slow = slow->next;
		if(fast->next!=NULL)
		{
			fast = fast->next->next;
			if( fast == slow )
				return fast;
		}
		else
			break;
	}
	return NULL;
}

void removeTheLoop( Node *node )
{
	Node *meet = detectloop( node );
	if( meet != NULL )
	{
		Node *prev = meet;
		while( node != meet )
		{
			prev = meet;
			node = node->next;
			meet = meet->next;
		}
		prev->next = NULL;
	}
}
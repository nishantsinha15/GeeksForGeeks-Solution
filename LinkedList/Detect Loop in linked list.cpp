int detectloop( struct node *list )
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
				return 1;
		}
		else
			break;
	}
	return 0;
}
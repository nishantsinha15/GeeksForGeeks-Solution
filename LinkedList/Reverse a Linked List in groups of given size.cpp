struct node* reverseUnit( struct node *head, int k, struct node **begin, struct node **end, struct node **nextBegin )
{
	*end = head;
    if( head == NULL || head->next == NULL )
    {
    	*begin = head;
    	*nextBegin = NULL;
        return head;
    }
    if( head->next->next == NULL )
    {
        struct node *nextNode = head->next;
        nextNode->next = head;
        head->next = NULL;
        *begin = nextNode;
        *nextBegin = NULL;
        return nextNode;
    }

    struct node *prev, *nextNode, *curr;
    prev = NULL;
    nextNode = head->next;
    curr = head;
    int c = 0;
    while( nextNode != NULL && c < k-1 )
    {
        curr->next = prev;
        prev = curr;
        curr = nextNode;
        nextNode = nextNode->next;
        c++;
    }
	curr->next = prev;
	*begin = curr;
	*nextBegin = nextNode;
    return curr;
}

struct node *reverse( struct node *head, int k )
{
	if( k == 1 )
		return head;
	int c = 0;
	struct node *newHead = NULL;
	struct node *prevGroup = NULL;
	while( head != NULL )
	{
		struct node *begin = NULL, *end = NULL, *nextBegin = NULL;
		head = reverseUnit( head, k, &begin, &end, &nextBegin);
		if( newHead == NULL )
			newHead = begin;
		else
		{
			prevGroup->next = begin;
		}

		prevGroup = end;
		head = nextBegin;
	}
	return newHead;
}
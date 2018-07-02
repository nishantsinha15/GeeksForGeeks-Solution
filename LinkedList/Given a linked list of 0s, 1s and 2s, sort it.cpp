void sortList(Node *head)
{
    int c1 = 0, c2 = 0, c3 = 0;
    Node *iter = head;
    while( iter!= NULL )
    {
        switch( iter->data )
        {
            case 0: c1++;
            break;

            case 1: c2++;
            break;

            case 2: c3++;
            break;
        }
        iter = iter->next;
    }
    while( head != NULL )
    {
        if( c1 > 0 )
        {
            head->data = 0;
            c1--;
        }
        else if( c2 > 0 )
        {
            head->data = 1;
            c2--;
        }
        else if( c3 > 0 )
        {
            head->data = 2;
            c3--;
        }
        head = head->next;
    }
}

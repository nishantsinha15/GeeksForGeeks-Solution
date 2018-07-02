/*
The structure of the node of the queue is
struct QueueNode
{
    int data;
    QueueNode *next;
};
and the structure of the class is
class Queue {
private:
    QueueNode *front;
    QueueNode *rear;
public :
    void push(int);
    int pop();
};
 */
/* The method push to push element into the queue*/

void Queue:: push(int x)
{
    QueueNode *newNode = (QueueNode *)malloc( sizeof(QueueNode) );
    newNode ->data = x;
    newNode->next = NULL;
    if( front == NULL )
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}
/*The method pop which return the element poped out of the queue*/
int Queue :: pop()
{
    if( front == NULL )
        return -1;
    else if( front == rear )
    {
        int data = front->data;
        front = NULL;
        rear = NULL;
        return data;
    }
    else
    {
        int data = front->data;
        front = front->next;
        return data;
    }
}

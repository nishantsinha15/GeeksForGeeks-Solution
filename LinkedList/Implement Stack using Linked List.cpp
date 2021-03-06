/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of the node of the stack is
struct StackNode
{
    int data;
    StackNode *next;
};
and the structure of the class is
class Stack {
private:
  StackNode *top;
public :
    void push(int);
    int pop();
};
 */
/* The method push to push element into the stack */
void Stack :: push(int x)
{
    // Your Code
    StackNode *newNode = (StackNode *)malloc( sizeof(StackNode) );
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}
/*The method pop which return the element poped out of the stack*/
int Stack :: pop()
{
    // Your Code
    if( top == NULL )
        return -1;
    int ret = top->data;
    top = top->next;
    return ret;
}

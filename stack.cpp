
#include <iostream>
using namespace std;

// Node class representing a single node in the linked list
class Node
{
    public:
        int data;
        Node *next;

        Node(
            next = NULL;
        )
};

//stuck class
class Stack
{
    private:
        Node *top; // Pointer the top node of the stack
    
    public:
    Stack(){
        top = NULL; // Initalize the stack with a null top pointer
    }


    // Push operation: Insert an element onto the top of the stuck
    int push(int value)
    {
        Node *newNode = new Node(); // 1. Allocate memory for the new node
        newNode->data = value; // 2. assign value
        newNode->next = top; // 3. set the next pointer of the new node to the current top
        top = newNode; // 4. Update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }

   
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *top;

void push(int num)
{
    Node *newNode = new Node();
    newNode->data = num;
    newNode->next = top;
    top = newNode;
}

void peek(){
     if (top == NULL)
    {
        cout << "underflow" << endl;
    }
    else{
        cout<<"Top Element is : "<<top->data<<endl;
    }
}
void pop()
{
    if (top == NULL)
    {
        cout << "underflow" << endl;
    }
    else{
        cout<<"Pop element is: "<<top->data<<endl;
        top=top->next;
    }
}

void display()
{
    Node *temp = top;
    if (top == NULL)
    {
        cout << "underflow" << endl;
    }

    else
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main()
{

    push(10); //10
    push(20); //20  10
    push(30); // 30 20 10
    peek();// 30
    pop(); //30
    display(); //20 10
}
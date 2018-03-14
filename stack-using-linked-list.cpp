#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int n =0){
        data = n;
        next = NULL;
    }
};
class Nodetype {
    Node *head;
    public:
    Nodetype(){
        head = NULL;
    }
    void push(int val){ //insert front operation of linked list
        Node *ptr = new Node(val);
        if(head == NULL){
            head = ptr;
            return;
        }
        ptr->next = head;
        head = ptr;
    }
    void pop(){  //delete front operation of linked list
        if(head == NULL){
            cout<<"No more deletions possible!\n";
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    void print(){  //printing the list
        Node *temp = head;
        if(temp == NULL) return;
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"\n";
    }
    int top(){  //returning the top value of stack
        if(head == NULL) return -1;
        return head->data;
    }
};
int main(){
    Nodetype t;
    t.push(1);
    t.push(2);
    t.push(3);
    t.push(4);
    t.pop();
    t.pop();
    
    cout<<"The stack is: "; t.print();
    cout<<"The value at top of the stack is "<<t.top();
    return 0;
}

#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int n = 0){
        data = n;
        next = NULL;
    }
};
Node *head=NULL, *head1=NULL, *head2=NULL, *head3=NULL;
void insertfront(int val, Node **head){
    Node *ptr = new Node(val);
    if(head == NULL){
        *head = ptr;
        return;
    }
    ptr->next = *head;
    *head = ptr;
}
void print(Node *head){
    if(head == NULL) return;
    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}
void printcircular(Node *head){
    if(head == NULL) return;
    Node *temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head);
    cout<<"\n";
}
void makelistcircular(Node *head){
    Node *temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = head;
}
void splitCircularToTwo(Node *head, Node **head2, Node **head3){
    Node *slow = head, *fast = head;
    while(fast->next!=head && fast->next->next!=head){
        slow= slow->next;
        fast = fast->next->next;
    }
    if(fast->next->next == head){
        fast = fast->next;
    }
    *head2 = head;
    *head3 = slow->next;
    slow->next = *head2;
    fast->next = *head3;
}
int main()
{
    insertfront(6,&head1);
    insertfront(5,&head1);
    insertfront(4,&head1);
    insertfront(3,&head1);
    insertfront(2,&head1);
    insertfront(1,&head1);
    makelistcircular(head1);
    printcircular(head1);
    splitCircularToTwo(head1, &head2, &head3);
    printcircular(head2);
    printcircular(head3);
    return 0;
}

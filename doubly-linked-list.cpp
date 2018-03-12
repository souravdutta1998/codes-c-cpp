#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int n = 0){
        data = n;
        prev = NULL;
        next = NULL;
    }
};

class Nodetype{
    Node *head;
    int size;
    
    public:
    Nodetype(){
        head = NULL;
        size = 0;
    }
    void insert(int item, int i){
        Node *ptr = new Node(item);
        if(i<0 && i>size) return;
        else if(i==0){
            if(head!=NULL)
            {   
                ptr->next = head;
                head->prev = ptr;
            }
            head = ptr;
            size++;
        }
        else{
            int idx = 1;
            Node *temp = head;
            while(temp!=NULL && idx<i){
                temp = temp->next;
            }
            if(i!=size){
                Node *temp2 = temp->next;
                ptr->next = temp2;
                temp2->prev = ptr;
            }
            ptr->prev = temp;
            temp ->next = ptr;
            size++;
        }
    }
    void print(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"\n";
    }
    int getsize(){
        return size;
    }
};

int main(){
    Nodetype t;
    t.insert(3, 0);
    t.insert(2, 1);
    t.insert(1, 1);
    t.print();
    cout<<t.getsize();
    return 0;
}

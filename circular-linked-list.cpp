#include<iostream>
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
class Nodetype{
    Node *head;
    int size;
    public:
    Nodetype(){
        head = NULL;
        size = 0;
    }
    void insert(int val, int i){
        Node *ptr = new Node(val);
        ptr->next = ptr;
        if(i<0 || i>size) return;
        if(i==0){
            if(head == NULL){
                head = ptr;
                ptr->next = head;
            }
            else{
                ptr->next = head;
                Node *temp = head;
                while(temp->next!=head)
                    temp = temp->next;
                head = ptr;
                temp->next = head;
            }
        }
        else if(i==size){
            Node *temp = head;
            while(temp->next!=head)
                temp = temp->next;
            ptr->next = head;
            temp->next = ptr;
        }
        else {
            Node *temp = head;
            int idx = 1;
            while(temp->next!=head && idx<i){
                temp = temp->next;
            }
            ptr->next = temp->next;
            temp->next = ptr;
        }
        size++;
    }
    void deletenode(int i){
        if(i<0 || i>size || head==NULL) return;
        if(i==0){
            Node *temp = head;
            if(head->next == head){
                head = NULL;
                delete temp;
                size--;
                return;
            }
            while(temp->next!=head) {
                temp = temp->next;    
            }
            temp->next = head->next;
            temp = head;
            head = head->next;
            delete temp;
        }
        else if(i==size-1){
            Node *prev, *temp = head;
            while(temp->next!=head){
                prev = temp;
                temp = temp->next;
            }
            prev->next = head;
            delete temp;
        }
        else {
            int idx = 1;
            Node *temp = head;
            while(temp->next!=head && idx<i){
                temp = temp->next;
                idx++;
            }
            Node *temp2 = temp->next;
            temp->next = temp->next->next;
            delete temp2;
            
        }
        size--;
    }
    void print(){
        Node *temp = head;
        if(temp==NULL) return;
        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }while(temp!=head);
        cout<<"\n";
    }
    int count(){
        int c = 0;
        Node *temp = head;
        if(temp==NULL) return 0;
        do{
            c++;
            temp = temp->next;
        }while(temp!=head);
        return c;
    }
    int getsize(){
        return size;
    }
};
int main(){
    Nodetype t;
    t.insert(2, 0);
    t.insert(1, 0);
    t.insert(3, 2);
    t.insert(4, 1);
    t.deletenode(1);
    t.print();
    
    cout<<"size of list : "<<t.getsize();
    return 0;
}

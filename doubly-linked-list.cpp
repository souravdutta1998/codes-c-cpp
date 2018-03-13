#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
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
        if(i<0 || i>size) return;
        else if(i==0){
            if(head!=NULL){
                head->prev = ptr;
                ptr->next = head;
            }
            head = ptr;
            size++;
        }
        else{
            int idx = 1;
            Node *temp = head;
            while(temp!=NULL && idx<i){
                temp = temp->next;
                idx++;
            }
            if(temp->next!=NULL){
                Node *temp2 = temp->next;
                ptr->next = temp2;
                temp2->prev = ptr;
            }
            ptr->prev = temp;
            temp->next = ptr;
            size++;
        }
    }
    void deletenode(int i){
        if(i<0 || i>size) return;
        else if(head == NULL) cout<<"No more deletions are possible\n";
        else if(i ==0 ){
            Node *temp = head;
            head = head->next;
            delete temp;
            size--;
        }
        else {
            Node *temp = head;
            int idx =0;
            while(temp!=NULL && idx<i){
                temp = temp->next;
                idx++;
            }
            Node *left = temp->prev;
            
            if(temp->next!=NULL){
                left->next = temp->next;
                (temp->next)->prev = left;
            }
            else{ left->next = NULL; }
            delete temp;
            size--;
        }
    }
    void print(){
        Node *temp = head;
        while(temp){
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
    t.insert(1, 0);
    t.insert(3, 1);
    t.insert(2, 1);
    t.insert(4, 3);
    t.deletenode(0);
    t.deletenode(2);
    t.print();
    cout<<t.getsize();
    return 0;
}

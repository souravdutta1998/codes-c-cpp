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

class Nodetype{
    Node *head;
    int size;
    public:
    Nodetype(){
        head = NULL;
        size = 0;
    }
    void insert(int item, int i){
        Node *ptr;
        ptr = new Node(item);
        
        if(i==0){
            if(head!=NULL) ptr->next = head;
            head = ptr;
            size++;
        }
        else if(i<0 || i>size) return;
        else {
            Node *temp = head;
            int n = i;
            n--;
            while(n--){
                temp=temp->next;
            }
            if(i!=size) ptr->next = temp->next;
            temp->next = ptr;
            size++;
        }
        
    }

    void deletenode(int i){
        if(head==NULL) cout<<"No more deletions is possible";
        else if(i==0) {
            Node *temp = head;
            head = head->next;
            delete temp;
            size--;
        }
        else if(i<0 || i>size) return;
        else{
            int idx = 1;
            Node *prev = head;
            Node *cur = prev->next;
            while(prev!=NULL && idx<i){
                prev=prev->next;
                cur = cur->next;
                idx++;
            }
            if(cur->next==NULL) prev->next = NULL;
            else prev->next = cur->next; 
            delete cur;
            size--;
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
    void deletelist(){
        Node *temp, *cur;
        temp = head;
        while(temp!=NULL){
            cur = temp;
            temp = temp->next;
            delete cur;
            size--;
        }
        head = NULL;
    }
    int getsize(){
        return size;
    }
};
int main(){
    Nodetype t;
    t.insert(1, 0);
    t.insert(2, 0);
    t.insert(3, 1);
    t.deletenode(2);
    t.deletelist();
    t.print();
    cout<<t.getsize();
}

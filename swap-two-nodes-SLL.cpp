#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int n =0){
        data = n;
        next = NULL;
    }
};
class nodetype {
    node *head;
    public:
    nodetype(){
        head = NULL;
    }
    void insert(int val){
        node *ptr = new node(val);
        if(head == NULL){
            head = ptr;
        }
        else {
            ptr->next = head;
            head = ptr;
        }
    }
    void print(){
        node *temp = head;
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"\n";
    }
    void swap(int x, int y){
        node *temp1, *temp2, *befx, *afx, *befy, *afy;
        
        // here temp1 points to the node which has the value x, befx is its previous node , afx is its next node
        //same for temp2
        temp1 = head;
        befx = befy = NULL;
        while(temp1->next){
            if(temp1->data == x) break;
            befx = temp1;
            temp1 = temp1->next;
        }
        afx = temp1->next;
        temp2 = head;
        while(temp2->next){
            if(temp2 ->data == y) break;
            befy = temp2;
            temp2 = temp2->next;
        }
        afy = temp2->next;
       // cout<<temp1->data<<" "<<temp2->data;
       if(temp1->data!=x || temp2->data!=y){
           cout<<"Either of the values not found in the list. Hence cannot be swapped!\n";
           return;
       }
       if(afx == temp2){
           if(befx==NULL) head = temp2;
           else befx->next = temp2;
           temp2->next = temp1;
           temp1->next = afy;
           return;
       }
       if(afy == temp1){
           if(befy==NULL) head = temp1;
           else befy->next = temp1;
           temp1->next = temp2;
           temp2->next = afx;
           return;
       }
        if(befx==NULL) head = temp2;
        else befx->next = temp2;
        temp2->next = afx;
        
        if(befy == NULL) head = temp1;
        else befy->next = temp1;
        temp1->next = afy;
    }
};
int main() {
	//code
	nodetype t;
	t.insert(5);
	t.insert(4);
	t.insert(3);
	t.insert(2);
	t.insert(1);
	t.print();
	int x = 4, y =5;
	t.swap( x, y);
	t.print();
	return 0;
}

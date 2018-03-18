#include <iostream>
using namespace std;
class Node{
    int data;
    Node *next;
    Node(int n = 0){
        data = n;
        next = NULL;
    }
    friend class Nodetype;
};
class Nodetype{
    Node *head;
    int size;
    public:
    Nodetype(){
        head = NULL;
    }
    void insertb(int data){
        Node *ptr = new Node(data);
        if(head == NULL){
            head = ptr;
            return;
        }
        ptr->next = head;
        head = ptr;
    }
    void print(){
        if(head == NULL) return;
        Node *temp = head;
        int i=0;
        while(temp &&i<20){
            cout<<temp->data<<" ";
            temp = temp->next;
            i++;
        }
        cout<<"\n";
    }
    int detectloop(){
        Node *slow = head;
        Node *fast = head;
        while(slow && fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return 1;
        }
        return 0;
    }
    void detectStartOfLoop(){
        Node *slow = head; Node *fast = head;
        int found =0;
        while(slow && fast && fast->next){
            slow = slow->next ;
            fast = fast->next->next;
            if(slow == fast) {
                found =1;
                break;
            }
        }
        if(found == 1){
            slow = head;
            while(slow && fast){
                if(slow == fast) { 
                    cout<<"start node of loop has address "<<slow<<" and value "<<slow->data<<endl;
                    return;
                }
                slow=slow->next;
                fast = fast->next;
            }
        }
        else cout<<"no loop \n";
    }
    void createloop(int start){
        Node *temp =head;
        int i=1;
        Node *temp2 = head;
        while(temp2->next){
            temp2 =temp2->next;
        }
        while(temp){
            if(i == start) break;
            i++;
            temp = temp->next;
        }
        temp2->next = temp;
    }
    void reverse(){
        Node *cur, *prev, *nex;
        cur = head;
        prev = NULL;
        while(cur){
            nex = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nex;
        }
        head = prev;
    }
    void getnthfromend(int n){
        Node *temp = head;
        Node *nth = NULL;
        int i =1;
        while(temp){
            if(i==n) nth = head;
            else if(i>n) nth = nth->next;
            temp = temp->next;
            i++;
        }
        if(i<=n) cout<<"the list contains less than n elements";
        else cout<<"the value is "<<nth->data;
    }
};
int main()
{
    Nodetype t;
    t.insertb(1);
    t.insertb(2);
    t.insertb(3);
    t.insertb(4);
    t.insertb(5);
    t.insertb(6);
    t.insertb(7);
    t.insertb(8);
    t.insertb(9);
    t.insertb(0);
    t.print();
    
    t.createloop(3);
    t.print();
  //  t.getnthfromend(3);
    cout<<(t.detectloop() ? "yes" : "no")<<endl;
    t.detectStartOfLoop();
    return 0;
}

#include<iostream>
using namespace std;

int NthNodefromend(Node *head,int n){
  Node *temp = head;
  Node *ntemp = head;
  int i=0;
  while(temp!=NULL){
    i++;
    temp = temp->next;
    if(i > n) ntemp= ntemp->next;
  }
  if(i<n) return -1;
  
  return ntemp->data;
}

#include<bits/stdc++.h>
using namespace std ;

struct node {
	node* next ;
	int data ;
};

void insertstart(node **head,int x){

	node *temp = new node ;
	temp->next= *head ;
	temp->data= x;
	*head= temp ;
}
void traverse(node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next ;
		
	}
	cout<<"\n" ;
}
void reverse(node **head) {
	node *first = *head ;
	if((*head)->next==NULL || *head==NULL)
		return;
	node *temp = (*head)->next ;
	reverse(&temp) ;
	(*head)->next->next = *head; 
	(*head)->next = NULL ;
	(*head)= temp ;

}
void reverse_iterative(node **head){
	node *start = *head ;
	node *next=NULL ;
	node *prev = NULL ;

	while(start!=NULL){
		next = start->next ;
		start->next=prev ;
		prev=start ;
		start = next ;
	}
	*head=prev ;
}
int main(){
	node *head= NULL ;
	insertstart(&head, 1) ;
	traverse(head) ;
	insertstart(&head, 2) ;
	traverse(head) ;
	insertstart(&head, 3) ;
	insertstart(&head, 4) ;
	insertstart(&head, 5) ;
	traverse(head) ;
	reverse(&head) ;
	traverse(head) ;
	reverse_iterative(&head) ;
	traverse(head) ;
	

	return 0 ;
}
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
void swapp(node **head, int x,int y){
	node *cx = *head;
	node *px=NULL ; 
	while(cx!=NULL&&cx->data!=x){
		px=cx ;
		cx=cx->next ;
	}
	node *cy = *head, *py=NULL ; 
	while(cy!=NULL&&cy->data!=y){
		py=cy ;
		cy=cy->next ;
	}
	if(cx==NULL || cy==NULL){
		cout<<"error" ;
		return ;
	}
	if(py!=NULL){
		py->next=cx;
	}else{
		*head=cx ;
	}
	if(px!=NULL){
		px->next=cy ;
	}else{
		*head=cy ;
	}
	node *temp = cx->next ;
	cx->next = cy->next;
	cy->next = temp ;
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
	int x=4,y=1; 
	swapp(&head,x,y);
	traverse(head) ;
	

	return 0 ;
}
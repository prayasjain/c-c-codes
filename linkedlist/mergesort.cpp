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
node *merge(node *f, node *s){

	node *m ;
	node *mt ;
	if(f->data<s->data)
	{	
		m=f;
		mt=f;
		f=f->next ;
		mt->next=NULL ;
		
	}
	else{
		m= s ;
		mt=s ;
		s=s->next ;
		mt->next=NULL ;
	}
	while(f!=NULL && s!=NULL){
		if(f->data<s->data){
			mt->next=f;
			mt=mt->next ;
			f=f->next;
			mt->next=NULL ;
		}else{
			mt->next=s;
			mt=mt->next ;
			s=s->next;
			mt->next=NULL ;
		}
	}
	if(f==NULL){
		mt->next=s ;
	}else {
		mt->next=f ;
	}
	return m ;

}

node *RecursiveMerge(struct node* a, struct node* b)
{
  struct node* result = NULL;
 
  /* Base cases */
  if (a == NULL)
     return(b);
  else if (b==NULL)
     return(a);
 
  /* Pick either a or b, and recur */
  if (a->data <= b->data)
  {
     result = a;
     result->next = RecursiveMerge(a->next, b);
  }
  else
  {
     result = b;
     result->next = RecursiveMerge(a, b->next);
  }
  return(result);
}
void FrontBackSplit(node *head, node **first, node **second){
	if(head==NULL || head->next==NULL){
		*first = head;
		*second=NULL ;
		return ;
	}
	node *slow = head ;
	node *fast = head->next ;
	while(fast!=NULL){
		fast=fast->next ;
		if(fast!=NULL){
			fast = fast->next ;
			slow=slow->next ;
		}
	}
	*first=head ;
	*second= slow->next ;
	slow->next=NULL ;

}
void MergeSort(node **head_ref){

	node *head = *head_ref ;
	if(head==NULL || head->next==NULL)
		return ;
	node *a, *b ;
	FrontBackSplit(head, &a,&b) ;
	MergeSort(&a) ;
	MergeSort(&b) ;
	*head_ref=RecursiveMerge(a,b) ;

}


int main(){
	node *head= NULL ;
	
	

	insertstart(&head,9) ;
	insertstart(&head,7) ;
	insertstart(&head,5) ;
	insertstart(&head,3) ;
	insertstart(&head,1) ;

	insertstart(&head,40) ;
	insertstart(&head,6) ;
	insertstart(&head,4) ;
	insertstart(&head,2) ;

	traverse(head) ;
	
	MergeSort(&head) ;
	traverse(head) ;	
	
	
	//traverse(RecursiveMerge(head,head2)) ;

	return 0 ;
}
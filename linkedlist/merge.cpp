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

int main(){
	node *head= NULL ;
	node *head2 = NULL ;
	

	insertstart(&head,9) ;
	insertstart(&head,7) ;
	insertstart(&head,5) ;
	insertstart(&head,3) ;
	insertstart(&head,1) ;

	insertstart(&head2,40) ;
	insertstart(&head2,6) ;
	insertstart(&head2,4) ;
	insertstart(&head2,2) ;

	traverse(head) ;
	traverse(head2) ;
	traverse(merge(head,head2)) ;
	
	
	//traverse(RecursiveMerge(head,head2)) ;

	return 0 ;
}
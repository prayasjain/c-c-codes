#include<bits/stdc++.h>
using namespace std ;
struct node{
	int data ;
	node* link ;

} ;
node *head = NULL , *tail = NULL ;

void traverse(){
	node* x ;
	x=head ;
	cout<<"\n" ;
	while(x!=NULL){
		cout<<x->data<<"->" ;
		x=x->link ;
	}
	cout<<"NULL\n" ;
} 


void insert(int x,int y){
	node *temp,*temp2 ;
	temp=head;
	temp2=NULL ;
	while(y>0){
		if(temp==NULL){
			cout<<"\nNot Possible\n" ;
			return ;
		}
		temp2=temp;
		temp=temp->link ;
		y-- ;
	}

	if(temp == NULL && head==NULL){
		head = new node  ;
		tail = head ;
		head-> link = NULL ;
		head ->data = x ;

	}else if(temp==NULL) {
		node* temp = new node  ;
		temp->data = x ;
		temp->link = NULL ;
		tail->link=temp ;
		tail = temp ;	
	}else if(temp2==NULL){
		temp2 = new node ;
		temp2->data = x ;
		temp2->link=head ;
		head = temp2 ;
	}else{
		node *temp3 = new node ;
		temp3->data= x;
		temp3->link=temp ;
		temp2->link = temp3 ;	
	}
	traverse() ;

}

void del_val(int x){
	node *temp= head,*temp2=NULL ;
	while(temp!=NULL){
		if(temp->data==x){
			if(temp2==NULL){
				head=head->link ;
				cout<<"\nDeleted "<<temp->data<<"\n" ;
				delete temp ;
			}else if(temp->link==NULL){
				tail=temp2 ;
				tail->link=NULL ;
				cout<<"\nDeleted "<<temp->data<<"\n" ;
				delete temp ;
			}else{
				temp2->link=temp->link;
				cout<<"\nDeleted "<<temp->data<<"\n" ;
				delete temp ;
			}
			return ;
		}else{
			temp2=temp ;
			temp=temp->link; 
		}
	}
	cout<<"\nNot Found\n" ;
	traverse();
}

void del_val_all(int x){
	node *temp= head,*temp2=NULL ;
	while(temp!=NULL){
		if(temp->data==x){
			if(temp2==NULL){
				head=head->link ;
				cout<<"\nDeleted "<<temp->data<<"\n" ;
				delete temp ;
				temp=head;
			}else if(temp->link==NULL){
				tail=temp2 ;
				tail->link=NULL;
				cout<<"\nDeleted "<<temp->data<<"\n" ;
				delete temp ;
				temp=NULL ;
			}else{
				temp2->link=temp->link;
				cout<<"\nDeleted "<<temp->data<<"\n" ;
				delete temp ;
				temp=temp2->link;
			}
		}else{
			temp2=temp ;
			temp=temp->link; 
		}
	}
	traverse() ;
}

void del_comp(){
	node *temp = head,*temp2;
	head=NULL ;
	tail=NULL ;
	cout<<"\n" ;
	while(temp!=NULL){
		cout<<temp->data<<"->" ;
		temp2=temp ;
		temp=temp->link;
		delete temp2 ;
	}
	cout<<"NULL\n";
}


void del_pos(int x){
	node *temp, *temp2 ;
	temp = head ;
	while(x>0){
		if(temp==NULL){
			cout<<"\nNot Possible\n" ;
			return ;
		}
		temp2= temp ;
		temp=temp->link ;
		x-- ;
	}
	if(temp==head){
		head = head->link ;
		cout<<"\nDeleted "<<temp->data<<"\n" ;
		delete temp ;
	}else if(temp==tail){
		tail=temp2 ;
		tail->link=NULL; 
		cout<<"\nDeleted "<<temp->data<<"\n" ;
		delete temp ;
	}else {
		temp2->link=temp->link ;
		cout<<"\nDeleted "<<temp->data<<"\n" ;
		delete temp ;
	}
	traverse(); 


}
void print_len(){
	int x=0;
	node *temp=head;
	while(temp!=NULL){
		temp=temp->link;
		x++ ;
	}
	cout<<"\n"<<x<<"\n" ;
}
int main(){	
	while(1){
		cout<<"\n1. Insert at position(index 0)\n" ;
		cout<<"\n2.Traverse/Display\n" ;
		cout<<"\n3.Delete by position (index 0)\n" ;
		cout<<"\n4. Delete by value (first to occur)\n" ;
		cout<<"\n5. Delete by value (all to occur)\n" ;
		cout<<"\n6. Delete complete\n" ;	
		cout<<"\n7. Print Length\n" ;
		int option,x,y ;
		cin>>option ;
		switch(option){
			case 1:
				cin>>x>>y ;
				insert(x,y) ;				
				break ;
			case 2:
				traverse() ;
				break ;	
			case 3:
				cin>>x ;
				del_pos(x) ;	
				break ;
			case 4:
				cin>>x ;
				del_val(x) ;
				break ;
			case 5:
				cin>>x ;
				del_val_all(x) ;
				break;
			case 6:
				del_comp() ;
				break;		
			case 7:
				print_len() ;	
				break;
			default:
				cout<<"\n WTF\n" ;	
		}

			
	}
	return 0 ;
}
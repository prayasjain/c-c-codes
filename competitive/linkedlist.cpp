#include<iostream>
#include<stdlib.h>
using namespace std ;
struct node {

    int info ;
    node *link ;

};

node *head=NULL ;


void insertl(int item){


    if(head==NULL){
        //head = (node*)malloc( sizeof(node)) ;
        head=new node ;
        head->info=item ;
        head->link=NULL ;
        //cout<<1;
        //cout<<head->info ;
    }

    else{
        node *temp =new node ;

        temp->info =item ;

        temp->link=head->link ;
        head->link=temp ;

    }
}
void traverse() {
    node *temp=head ;

    while(temp!=NULL){
        cout<<temp->info ;
        temp=temp->link ;
    }

}
void deleten(){
    node *temp = head ;
    if(temp==NULL)
    {
        cout<<"under" ;
    }
    else {
        head=temp->link ;
        cout<<temp->info ;
        delete(temp ) ;
    }
}
int main(){

    //root=(node*) malloc(sizeof(node)) ;
    //root->info=4 ;
    //root->link=NULL ;
    insertl(3) ;
    //cout<<root->info ;
    insertl(4) ;
    //cout<<root->info ;
    traverse() ;
    deleten() ;
    deleten() ;
    deleten() ;
    deleten() ;
    //traverse() ;
return 0 ;
}

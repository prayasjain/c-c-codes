
#define sd(x) scanf("%d",&x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  100001
#define FOR(i,n) for(i=0;i<n;i++)
#define mod 1000000007

int a[maxn] ,b[maxn],c[maxn] ;
int al ,bl ,cl ;

void display(){
int i ;
cout<<"\n-------------------------------" ;
cout<<"\nSource Stack\n" ;
FOR(i,al)
    cout<<a[i]<<" " ;
cout<<"\n" ;
cout<<"Intermediate Stack\n" ;
FOR(i,bl)
    cout<<b[i]<<" " ;
cout<<"\n" ;
cout<<"Destination Stack\n" ;
FOR(i,cl)
    cout<<c[i]<<" " ;
}
void help(int s , int d){
int x ;
if(s==1){
        x=a[al-1] ;

        al-- ;


    }else if(s==2){
        x=b[bl-1] ;
        bl-- ;

    }else {
        x=c[cl-1] ;
        cl-- ;
    }
    if(d==1)
        a[al++]=x ;
    else if (d==2)
        b[bl++]=x ;
    else
        c[cl++]=x ;

}
void move(int s , int d ,int n,int m){
int x ;
if(n==0){
    return ;
}
if(n==1){
    help(s,d) ;
    display() ;
    return ;
}
else{
    move(s,m,n-1,d) ;
    help(s,d) ;
    display() ;
    move(m,d,n-1,s) ;
}
}
int main(){
int n,x,i;
sd(n);
al=n ;
bl=0 ;
cl=0 ;
FOR(i,n)
    sd(a[i]) ;
move(1,3,n,2) ;
return 0 ;
}


#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  100001
#define FOR(i,n) for(i=0;i<n;i++)
#define plld(x) printf("%lld",x)
#define pd(x) printf("%d",x)
#define pld(x) printf("%ld",x)
#define ps(x)  printf("%s",x)
#define plldn(x) printf("%lld\n",x)
#define pdn(x) printf("%d\n",x)
#define pldn(x) printf("%ld\n",x)
#define psn(x)  printf("%s\n",x)

#define mod 1000000007

stack <int> a ,b ,c ;

void help(int s , int d){
int x ;
if(s==1){
        x=a.top() ;
        a.pop() ;


    }else if(s==2){
        x=b.top() ;
        b.pop() ;

    }else {
        x=c.top() ;
        c.pop() ;
    }
    if(d==1)
        a.push(x) ;
    else if (d==2)
        b.push(x) ;
    else
        c.push(x) ;

}
void move(int s , int d ,int n,int m){
int x ;
if(n==0){
    return ;
}
if(n==1){
    help(s,d) ;
    return ;
}
else{
    move(s,m,n-1,d) ;
    help(s,d) ;
    move(m,d,n-1,s) ;
}
}


int main(){
std::ios_base::sync_with_stdio (false);
int n,x,i;
sd(n);
FOR(i,n){
    sd(x) ;
    a.push(x) ;
}
move(1,3,n,2) ;
while(!c.empty()){
    x=c.top() ;
    c.pop() ;
    cout<<x<<"\n" ;

}
return 0 ;
}


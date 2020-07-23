
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>

using namespace std;

long long a[100001] ;
void swapt(long long i,long long j){

}
int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p ;
slld(t) ;
while(t--){


    slld(n) ;
    for(i=0;i<n;i++){
        slld(a[i]) ;
    }
    for(i=0;i<(n-1);i++){
        if((i+1)%2==0){
            if(a[i]<a[i+1]){
                long long t ;
                t=a[i] ;
                a[i]=a[i+1] ;
                a[i+1]=t ;

            }

        }
        else if(a[i]>a[i+1]){
            long long t ;
                t=a[i] ;
                a[i]=a[i+1] ;
                a[i+1]=t ;

        }


    }
    for(i=0;i<n;i++)
        cout<<a[i]<<' '  ;
        cout<<'\n' ;
}
return 0 ;
}

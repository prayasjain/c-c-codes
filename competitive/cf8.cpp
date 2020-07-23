#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)


int main(){
long long t ,n,y,z,i,j,k ,l,m,p ;
char a[101],x ;
m=0 ;
slld(y);
ss(a) ;
x=a[0] ;
for(i=1;a[i]!='\0';i++){
    if(a[i]==x){
        m++;
    }
    else{
        x=a[i] ;
    }
}
printf("%lld",m);
return 0 ;
}

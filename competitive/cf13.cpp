
#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)


int main(){
long long k=0 ,i ;
char a[101],x='h' ;
ss(a) ;
for(i=0;a[i]!='\0';i++){
    if(k==0)
        x='h' ;
    else if(k==1)
        x='e' ;
     else if(k==2||k==3)
        x='l' ;
    else if(k==4)
        x='o' ;
    else{
       printf("YES") ;
       return 0 ;
    }
    if(x==a[i])
        k++ ;

}
if(k==5)
    printf("YES") ;
else
printf("NO");
return 0 ;
}

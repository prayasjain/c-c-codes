#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<string.h>
using namespace std ;
int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p ;
char s[101] ;

slld(n);
while(n--){
    ss(s) ;
    l=strlen(s) ;

    if(l<=10)
        printf("%s\n",s) ;
    else{
        printf("%c%d",s[0],l-2) ;
        printf("%c\n",s[l-1]);
    }
}
return 0 ;
}

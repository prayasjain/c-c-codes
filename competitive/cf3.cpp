#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<string.h>
#include<ctype.h>
using namespace std ;
int main(){
long long t ,n,z,i,j,k ,l,m,p ;
char s[10001] ;
ss(s);
for(i=0;s[i]!='\0';i++){
     s[i]=tolower(s[i]);
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
       continue ;
    else{
        printf(".%c",s[i]);
    }
}
return 0 ;
}

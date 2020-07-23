
#include<stdio.h>
#include<math.h>

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
int main(){
    long long t,p,i,q,c ;
    int n ;
    char s[101] ;
    slld(t);
    while(t--){
        ss(s) ;
        sd(n) ;
        p=0;
        c=0;
        for(i=0;s[i]!='\0';i++){
            if(s[i]=='T')
                p=p+2 ;
            else
                    p++ ;
        }
        q=12*n ;
        for(i=0;i<(q/p);i++)
            c=c+(q-p*(i+1));

        printf("%lld\n",c) ;
    }
return 0 ;}

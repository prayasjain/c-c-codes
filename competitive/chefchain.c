#include<stdio.h>
#include<string.h>
#define slld(x) scanf("%lld",&x)
#define plld(x) printf("%lld\n",x)
int main(){
    long long t,i,c ;
    char a[100001] ;
    slld(t) ;
    while(t--){
            c=0 ;
            scanf("%s",a) ;
            for(i=1;i<strlen(a);i++){
                    if(a[i]==a[i-1]){
                        c++ ;
                            if(i+1<strlen(a)&&a[i]==a[i+1]){
                        if(a[i]=='+')



                            a[i]='-' ;
                        else
                            a[i]='+' ;
                            }
                            else{
                                  if(a[i-1]=='+')
                            a[i-1]='-' ;
                        else
                            a[i-1]='+' ;
                            }
                    }

            }
            printf("%lld\n",c);
    }
return 0 ;}

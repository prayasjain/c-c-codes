#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<ctype.h>
#include<string.h>
int main(){
long long t ,n,y,z,i,j,k ,l,m,p,c ;
char x[101] ;
ss(x) ;
t=0 ;
if(strlen(x)==1)
    {
        if(islower(x[0]))
        x[0]=toupper(x[0]);
        else
            x[0]=tolower(x[0]);
        printf("%s",x);
    }
else{
    if(islower(x[0])){
        t=1 ;
       for(i=1;x[i]!='\0';i++){
            if(islower(x[i])){
                 printf("%s",x);
                 t=0 ;
                 break ;
            }
       }
       if(t==1)
       {
           x[0]=toupper(x[0]);
           for(i=1;x[i]!='\0';i++){
                x[i]=tolower(x[i]);
           }
           printf("%s",x);
       }

    }
    else{
        t=1 ;
        for(i=1;x[i]!='\0';i++){
            if(islower(x[i])){
                 printf("%s",x);
                 t=0 ;
                 break ;
            }
       }
        if(t==1)
       {
           x[0]=tolower(x[0]);
           for(i=1;x[i]!='\0';i++){
                x[i]=tolower(x[i]);
           }
           printf("%s",x);
       }
    }
}




return 0 ;
}

#include<stdio.h>
#define ss(x) scanf("%s",x)
int main(){
    char a[128] ;
    int t,c,i ;
    scanf("%d",&t);
    while(t--){
        ss(a) ;
        c=0 ;
        for(i=0;a[i]!='\0';i++){
            if(a[i]=='A'||a[i]=='D'||a[i]=='O'||a[i]=='P'||a[i]=='R'||a[i]=='Q')
                c++ ;
            else if(a[i]=='B')
                c=c+2 ;
        }
        printf("%d\n",c);
    }
return 0 ;}

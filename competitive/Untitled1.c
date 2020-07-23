#include<stdio.h>
int main(){
long long l,r ,c,i,j,k;
char y,d,s[10001] ;
scanf("%[^\n]",s) ;
scanf("%c %c %lld %lld",&y,&d,&l,&r) ;
printf("%c %c %lld %lld",y,d,l,r) ;
/* c=0 ;
        for(i=1;i<=(r-l);i++){
          //      printf("%lld\n",i) ;
            for(j=l-1,k=j+i;k<r;j++,k++){
                if(s[j]==y&&s[k]==d){
                    c++ ;
                }
            }
        } */
    //    printf("%lld\n",c) ;
    return 0 ;
}

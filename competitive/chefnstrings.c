#include<stdio.h>
int main(){
    char s[1000001],a,b ;

    scanf("%s",s) ;
    long long  i,j,k,c ;
    int l ,r,q ;
    scanf("%d",&q) ;
    while(q--){
        scanf("%c",&a) ;
        scanf("%c",&b) ;
        scanf("%d",&l) ;
        scanf("%d",&r) ;

        printf("%c %c %d %d",a,b,l,r) ;
        c=0 ;
        for(i=1;i<=(r-l);i++){
          //      printf("%lld\n",i) ;
            for(j=l-1,k=j+i;k<r;j++,k++){
                if(s[j]==s[k]){
                    c++ ;
                }
            }
        }
    //    printf("%lld\n",c) ;
    }


    return 0 ;
}

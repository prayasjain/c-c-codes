#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<string.h>

int main(){
long long t ,n=0,x,y,z,i,j,k ,l,m,p ;
char a[101] ;

ss(a) ;


x=1 ;
l = (int)a[0]  ;

for(i=0;a[i]!='\0';i++){
    m=(int)a[i];
    if(x>=7){

        n++ ;
        break ;
    }
    if(l==m)
        x++ ;
    else{
        l=m;
        x=1;
    }
}

if(x<7)
    printf("NO");
else
        printf("YES");
return 0 ;
}

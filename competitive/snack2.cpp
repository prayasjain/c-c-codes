#include<algorithm>
#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)

using namespace std ;
int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p ,a[1000001];
slld(t) ;
while(t--){


    slld(n);
    for(i=0;i<n;i++){
        slld(a[i]);
    }
    //sort(a,a+n);
    m=0 ;
  /*  for(i=0;i<n;){
       if(i==n-1)
       {

           m++ ;
           break ;
       }
       if(a[i]==a[i+1]-1){
            m++;
            i+=2;
       }
       else{
        i++;
        m++;
       }

    } */
    printf("%lld",m);

}
return 0 ;
}


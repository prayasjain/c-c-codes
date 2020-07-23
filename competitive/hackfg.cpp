
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>



using namespace std;

long long maxSubArraySum(long long a[], long long size)
{
  long long max_so_far = a[0], i;
   long long curr_max = a[0];
   long long le=1,lm=1 ;

   for (i = 1; i < size; i++)
   {

        if(a[i]>(curr_max+a[i])){
           curr_max=a[i] ;
           le=1 ;

           }
           else{
            curr_max=curr_max+a[i] ;
            le++ ;
           }

        if(max_so_far<curr_max){
            lm=le ;
        }
        else if(max_so_far==curr_max){
                lm=max(lm,le) ;

        }

   }
   return lm;
}
long long max(long long x, long long y)
{ return (y > x)? y : x; }

int main(){
long long t ,n,x,y,z,i,j,k ,l,p,a[100001],b[100001],c[100001] ;
slld(n) ;
for(i=0;i<n;i++){
    slld(a[i]) ;

}
for(i=0;i<n;i++){
    slld(b[i]) ;
    c[i]=a[i]-b[i];

}
p = maxSubArraySum(c,n);
printf("%lld",p) ;
return 0 ;
}






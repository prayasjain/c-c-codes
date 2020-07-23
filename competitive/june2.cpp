#include<stdio.h>
#include<algorithm>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
using namespace std ;
void quicksort(long long x[][2],long long first,long long last){
    long long pivot,j,temp,i,temp2;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i][0]<=x[pivot][0]&&i<last)
                 i++;
             while(x[j][0]>x[pivot][0])
                 j--;
             if(i<j){
                 temp=x[i][0];
                  x[i][0]=x[j][0];
                  x[j][0]=temp;
                  temp2=x[i][1];
                  x[i][1]=x[j][1];
                  x[j][1]=temp2;
             }
         }

         temp=x[pivot][0];
         x[pivot][0]=x[j][0];
         x[j][0]=temp;
         temp2=x[pivot][1];
         x[pivot][1]=x[j][1];
         x[j][1]=temp2;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}
int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p,xm[100001][2],fin[100001],tmp,tmp2 ;
long long size ;
    int keys[100001];
slld(t) ;
while(t--){
    slld(n);
    size = n ;
    for(i=0;i<n;i++){
        slld(m);
        xm[i][0]=0;
        xm[i][1]=i ;
        for(j=0;j<m;j++){
            slld(x);
            slld(y);
            if(j==0)
                xm[i][0]=x ;
            else if (xm[i][0]<x)
                xm[i][0]=x ;

        }
    }


quicksort(xm,0,n-1);


   for(i=0;i<size;i++)
    fin[xm[i][1]] =i ;

    for(i=0;i<size;i++){
          printf("%lld ",fin[i]);
    }

    if(t!=0)
        printf("\n");


}

return 0 ;
}

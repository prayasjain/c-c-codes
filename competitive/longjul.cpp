

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>
#include<algorithm>


using namespace std;

int rating[100001],l[100001],r[100001] ,c[100001],sum,n,k,m,s[100001] ,ans[100001][501] , negr[100001] ;

int main(){
int t ,x,y,z,i,j ,p,curr_sum,i2,tmp;
slld(t) ;
while(t--)
{
    sum=0 ;
    sd(n) ;
    sd(k);
    sd(m) ;
    p= 0 ;
    for(i=0;i<n;i++){
        sd(rating[i]) ;
        if(rating[i]<0)
           {
             negr[p]=i ;
             p++ ;
           }

        sum+=rating[i] ;
    }
    for(i=0;i<n;i++){

    sd(l[i]) ;
    sd(r[i]) ;

    sd(c[i]) ;


    }
    curr_sum=sum ;
    for(i=0;i<=m;i++){
        for(j=0;j<=k;j++){
            if(i==0||j==0)
                ans[i][j] = sum ;
            if(c[i-1]<=j){
                    tmp= 0 ;
                    for(i2=0;i2<p;i2++){
                        if(negr[i2]>=(l[i-1]-1)){
                            if(negr[i2]<(r[i-1]))
                            tmp = tmp + rating[i2] ;
                            else
                                break ;

                        }
                    }
                ans[i][j] = max(ans[i-1][j-c[i-1]]-tmp , ans[i-1][j]) ;

            }else
                ans[i][j] = ans[i-1][j] ;
        }
    }
for(i=0;i<=m;i++){
    for(j=0;j<=k;j++){
        cout<<ans[i][j]<<' ' ;
    }
}
}
return 0 ;
}

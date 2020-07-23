#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<math.h>

int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p,a[100001],c1=0,c2=0,c3=0,c4=0 ;
slld(n) ;
for(i=0;i<n;i++)
{
    slld(a[i]) ;

}
for(i=0;i<n;i++){
    if(a[i]==1)
        c1++ ;
        if(a[i]==2)
        c2++;
        if(a[i]==3)
        c3++ ;
        if(a[i]==4)
        c4++ ;
}


//printf("%d %d %d %d\n",c1,c2,c3,c4);
long long ans =0 ;
ans=ans+c4 ;
c4=0 ;
if(c3<c1)
{
    ans+=c3 ;

    c1=c1-c3 ;
c3=0 ;

}
else if(c3>c1){
    ans+=c1 ;

    c3=c3-c1 ;
    ans+=c3 ;
    c1=0 ;
    c3=0 ;

}
else if(c3==c1){
    ans+=c1 ;
    c1=0 ;
    c3=0 ;

}


    ans+=(c2/2);
    c2=c2%2 ;
    if(c2!=0&&c1==0)
        ans++ ;
    else if (c2==0&&c1!=0){
            x=ceil((double)c1/4) ;
        ans=ans +x;


    }
    else if (c2!=0&&c1!=0)
    {
        if(c1==1||c1==2)
            ans=ans+1 ;
        else{
            ans++ ;
            c1=c1-2 ;
            x=ceil((double)c1/4) ;
            ans=ans +x ;
        }
    }


printf("%lld",ans);

return 0 ;
}

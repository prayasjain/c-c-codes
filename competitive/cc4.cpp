#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  100001
#define FOR(i,n) for(i=0;i<n;i++)
#define plld(x) printf("%lld",x)
#define pd(x) printf("%d",x)
#define pld(x) printf("%ld",x)
#define ps(x)  printf("%s",x)
#define plldn(x) printf("%lld\n",x)
#define pdn(x) printf("%d\n",x)
#define pldn(x) printf("%ld\n",x)
#define psn(x)  printf("%s\n",x)

#define mod 1000000007
long a[maxn],b[maxn] ;
int main(){
std::ios_base::sync_with_stdio (false);
long t=0 ,n,x,y,z,i,j,k ,l,m,p,f=0,n2,fel,fel2,lel,lel2 ;
sld(n) ;
n2=n ;
j=1 ;
if(n==1){
    pld(t);
    return 0 ;
}
fel=-1;
if(n>10000){
    for(i=0;i<n;i++){

    slld(a[i]) ;
    if(i==0)
        b[0]=a[0] ;
    if(i>0){
        if(a[i]>a[i-1]){
            n2-- ;
            f=1;
            if(fel==-1)
                fel=j;
                lel=j+1 ;
        }
        else{
            b[j++]=a[i] ;
        }

    }
}
if(f==0){
    pld(t);
    return 0 ;
}

else {
t++ ;
while(1){
        if(n2==1){
            pld(t);
    return 0 ;
        }
        f=0 ;

        n=n2 ;
        j=fel;
        lel2=n;
        fel2=-1 ;
        lel=min(n2,lel) ;
    for(i=fel;i<lel;i++){
        if(b[i]>b[i-1]){
            f=1 ;
            n-- ;
            if(fel2==-1)
            fel2=j ;
            lel2=j+1 ;
        }
        else{
            a[j++]=b[i] ;
        }
    }
    if(f==0){
        pld(t) ;
        return 0 ;
    }
    f=0;
    n2=n ;
    j=fel2;
    t++;
    fel=-1;
    lel=n ;
    if(n==1){
        pld(t) ;
        return 0 ;
    }
    lel2=min(lel2,n) ;
    for(i=fel2;i<lel2;i++){
        if(a[i]>a[i-1]){
            f=1;
            n2-- ;
            if(fel==-1)
                fel=j ;
                lel=j+1 ;
        }
        else{
                b[j++]=a[i];
        }
    }
    if(f==0){
        pld(t) ;
        return 0 ;
    }
    t++;
}

}

}
else {


n2=n ;
j=1 ;
if(n==1){
    pld(t);
    return 0 ;
}
fel=-1;
for(i=0;i<n;i++){

    slld(a[i]) ;
    if(i==0)
        b[0]=a[0] ;
    if(i>0){
        if(a[i]>a[i-1]){
            n2-- ;
            f=1;
            if(fel==-1)
                fel=j;
        }
        else{
            b[j++]=a[i] ;
        }

    }
}
if(f==0){
    pld(t);
    return 0 ;
}

else {
t++ ;
while(1){
        if(n2==1){
            pld(t);
    return 0 ;
        }
        f=0 ;

        n=n2 ;
        j=fel;
        fel2=-1 ;
    for(i=fel;i<n2;i++){
        if(b[i]>b[i-1]){
            f=1 ;
            n-- ;
            if(fel2==-1)
            fel2=j ;
        }
        else{
            a[j++]=b[i] ;
        }
    }
    if(f==0){
        pld(t) ;
        return 0 ;
    }
    f=0;
    n2=n ;
    j=fel2;
    t++;
    fel=-1;
    if(n==1){
        pld(t) ;
        return 0 ;
    }
    for(i=fel2;i<n;i++){
        if(a[i]>a[i-1]){
            f=1;
            n2-- ;
            if(fel==-1)
                fel=j ;
        }
        else{
                b[j++]=a[i];
        }
    }
    if(f==0){
        pld(t) ;
        return 0 ;
    }
    t++;
}

}

}

return 0 ;
}

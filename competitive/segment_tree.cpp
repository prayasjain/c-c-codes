

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>
using namespace std;

int tree [10001] ;
void buildtree(int tree[] ,int stIndex ,int lo , int hi){
if(lo==hi)
    {
        int x ;
        cin>>x ;
        tree[stIndex] = x;
        return ;
    }
else {
        int left = 2*stIndex , right = left +1 ,mid = (lo+hi)/2 ;
    buildtree(tree ,left ,lo,mid) ;
    buildtree(tree,right,mid+1,hi) ;

    tree[stIndex] = tree[left]+tree[right] ;

}

}

int getvalue (int stIndex , int left ,int right , int lo ,int hi){

if(left==lo && right==hi)
    return tree[stIndex] ;
int mid =(left+ right)/2 ;
if(lo>mid)
{
    return getvalue(2*stIndex+1 ,mid+1,right,lo,hi) ;
}
else if (hi<=mid) {
    return getvalue(2*stIndex ,left,mid,lo,hi) ;
}
else{
    return (getvalue(2*stIndex,left,mid,lo,mid) + getvalue(2*stIndex+1,mid+1,right,mid+1,hi) );
}

}
void pointupdate(int stIndex , int lo , int hi , int index , int value){
if(lo==hi){
    tree[stIndex] = value ;
    return ;
}
int left = stIndex*2 ,right = left+ 1 , mid = (lo+hi)/2 ;
if(index<=mid)
    pointupdate(left,lo,mid,index,value) ;
else
    pointupdate(right ,mid+1,hi,index,value) ;

tree[stIndex] = tree[left]+ tree[right] ;



}


void rangeupdate(int stIndex , int lo ,int hi, int lf , int rg ,int val ){
    if(lo==hi )
        {
            tree[stIndex]= val ;
            return ;
        }
    int mid = (hi+lo)/2 ;
    if(lf> mid)
    {
        rangeupdate(2*stIndex+ 1,mid+1,hi,lf,rg,val) ;
    }
    else if (rg<=mid){
          rangeupdate(2*stIndex,lo,mid,lf,rg,val) ;

    }
    else {
        rangeupdate(2*stIndex,lo, mid,lf,mid,val) ;
        rangeupdate(2*stIndex+1,mid+1, hi,mid+1,rg,val) ;

    }
    tree[stIndex] = tree[2*stIndex] + tree[2*stIndex+1] ;




}
int main(){

int t ,n,x,y,z,i,j,k ,l,m,p[]={1,2,3,4,5,6} ;

buildtree(tree , 1,0,5) ;

for(i=0;i<11;i++)
        cout<<tree[i]<<' ' ;
    cout<<'\n' ;
for(i=0;i<16;i++)
    cout<<tree[i]<<' ' ;
    cout<<'\n' ;
    for(i=0;i<100;i++)
    {
         cin>>x>>y >>z;
         rangeupdate(1,0,7,x,y,1) ;
    for(i=0;i<16;i++)
        cout<<tree[i]<<' ' ;
    cout<<'\n' ;

    }
return 0 ;
}

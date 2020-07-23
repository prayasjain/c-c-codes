

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>
using namespace std;

long long tree [10000001]  ;
void buildtree(long long tree[] ,long long stIndex ,long long lo , long long hi){
if(lo==hi)
    {
        long long x ;
        cin>>x ;
        tree[stIndex] = x;
        return ;
    }
else {
        long long left = 2*stIndex , right = left +1 ,mid = (lo+hi)/2 ;
    buildtree(tree ,left ,lo,mid) ;
    buildtree(tree,right,mid+1,hi) ;

    tree[stIndex] = tree[left]+tree[right] ;

}

}

long long getvalue (long long stIndex , long long left ,long long right , long long lo ,long long hi){

if(left==lo && right==hi)
    return tree[stIndex] ;
long long mid =(left+ right)/2 ;
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
void pointupdate(long long stIndex , long long lo , long long hi , long long index , long long value){
if(lo==hi){
    tree[stIndex] = value ;
    return ;
}
long long left = stIndex*2 ,right = left+ 1 , mid = (lo+hi)/2 ;
if(index<=mid)
    pointupdate(left,lo,mid,index,value) ;
else
    pointupdate(right ,mid+1,hi,index,value) ;

tree[stIndex] = tree[left]+ tree[right] ;



}


void rangeupdate(long long stIndex , long long lo ,long long hi, long long lf , long long rg ,long long val ){
    if(lo==hi )
        {
            tree[stIndex]= val ;
            return ;
        }
    long long mid = (hi+lo)/2 ;
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

void rangeupdate2(int stIndex , int lo ,int hi, int lf , int rg ,int val ){
    if(lo==hi )
        {
            tree[stIndex]*= val ;
            return ;
        }
    int mid = (hi+lo)/2 ;
    if(lf> mid)
    {
        rangeupdate2(2*stIndex+ 1,mid+1,hi,lf,rg,val) ;
    }
    else if (rg<=mid){
          rangeupdate2(2*stIndex,lo,mid,lf,rg,val) ;

    }
    else {
        rangeupdate2(2*stIndex,lo, mid,lf,mid,val) ;
        rangeupdate2(2*stIndex+1,mid+1, hi,mid+1,rg,val) ;

    }
    tree[stIndex] = tree[2*stIndex] + tree[2*stIndex+1] ;




}
void rangeupdate3(long long stIndex , long long lo ,long long hi, long long lf , long long rg ,long long val ){
    if(lo==hi )
        {
            tree[stIndex]+= val ;
            return ;
        }
    long long mid = (hi+lo)/2 ;
    if(lf> mid)
    {
        rangeupdate3(2*stIndex+ 1,mid+1,hi,lf,rg,val) ;
    }
    else if (rg<=mid){
          rangeupdate3(2*stIndex,lo,mid,lf,rg,val) ;

    }
    else {
        rangeupdate3(2*stIndex,lo, mid,lf,mid,val) ;
        rangeupdate3(2*stIndex+1,mid+1, hi,mid+1,rg,val) ;

    }
    tree[stIndex] = tree[2*stIndex] + tree[2*stIndex+1] ;




}


long long getSegmentTreeSize(long long N) {
  long long size = 1;
  for (; size < N; size <<= 1);
  return size << 1;
}

int main(){
long long t,q ,n,x,y,z,i,j,k ,l,m,p[]={1,2,3,4,5} ,f,tot,v ;


slld(n) ;
slld(q) ;


buildtree(tree , 1,0,n-1) ;
tot = getSegmentTreeSize(n) ;
//for(i=0;i<tot  ;i++)
  //          cout<<tree[i]<<' ' ;
    //    cout<<'\n' ;
//cout<<tot<<',' ;

while(q--)
{


    slld(f) ;
    if(f==4)
    {
        slld(x) ;
        slld(y) ;
        cout<<getvalue(1,0,n-1,x-1,y-1)<<'\n' ;
    }
    else {
        slld(x) ;
        slld(y) ;
        slld(v) ;
        if(f==3)
        {
            rangeupdate(1,0,n-1,x-1,y-1,v) ;
        }
        else if(f==2){

            rangeupdate2(1,0,n-1,x-1,y-1,v) ;
        }
        else if(f==1){
                rangeupdate3(1,0,n-1,x-1,y-1,v) ;

        }
       // for(i=0;i<tot  ;i++)
         //   cout<<tree[i]<<' ' ;
        //cout<<'\n' ;
    }
}


/*for(i=0;i<16;i++)
    cout<<tree[i]<<' ' ;
    cout<<'\n' ;
    for(i=0;i<100;i++)
    {
         cin>>x>>y >>z;
         rangeupdate(1,0,7,x,y,z) ;
    for(i=0;i<16;i++)
        cout<<tree[i]<<' ' ;
    cout<<'\n' ;

    } */
return 0 ;
}

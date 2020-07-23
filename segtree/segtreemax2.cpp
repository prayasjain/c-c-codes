

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  1000001
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

long tree[maxn],arr[maxn],tree2[maxn] ;
pair<long,long> ans ;
void build_tree(long node,long a,long b){ //node is the index
                                            //a and b are the bound of the interval at this  node

    if(a>b){ //error handling
        return ;
    }
    if(a==b){ //updating leaf nodes
        tree[node]=arr[a] ;
        tree2[node]=1 ; //leaf nodes hold array value
        return ;
    }
    //updating childs and then updating node
    //child always at 2*node , 2*node +1
        build_tree(2*node,a,(a+b)/2) ;
        build_tree(2*node+1,(a+b)/2+1,b) ;
    tree[node]=max(tree[2*node],tree[2*node+1]) ;
    if(tree[2*node]==tree[2*node+1]){
        tree2[node]=tree2[2*node]+tree2[2*node+1] ;

    }
    else if(tree[2*node]>tree[2*node+1])
            tree2[node]=tree2[2*node] ;
    else
        tree2[node]=tree2[2*node+1] ;

}

//update interval [i j] with value val
//so we basically incriment all the leaf nodes
//and update the corresponding parents

//node - index
//a,b bounds of the interval at index
//i,j is the bound to be queried
pair<long,long>  query_tree(long node , long a , long b , long i , long j  ){

//again error handling

    if(i>j)
        return make_pair((long)-1,(long)-1);
    if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return make_pair((long)-1,(long)-1);

    if(a>=i&&b<=j){ //if the current segment is inside the segment to be searched we wont search further down
                    //to the childs


        return make_pair(tree[node],tree2[node]) ;
    }
    //we go further down to the child in search of our range
    pair <long,long> q_left = query_tree(2*node,a,(a+b)/2,i,j) ;
    pair <long,long> q_right = query_tree(2*node+1,(a+b)/2+1,b,i,j) ;
    if(q_left.first>q_right.first)
        return q_left ;
    else if(q_left.first<q_right.first)
        return q_right ;
     else
        return make_pair(q_left.first,q_left.second+q_right.second) ;
}

int main(){
std::ios_base::sync_with_stdio (false);
long t,r ,n,x,y,z,i,j,k ,l,m,p,f,a[maxn] ;
pair<long,long> rec ;
sld(n) ;
sld(m) ;
FOR(i,n)
sld(a[i]) ;
build_tree(1,0,n-1);
while(m-- ){
    sld(l) ;
    sld(r) ;
    rec=query_tree(1,0,n-1,l-1,r-1) ;
    cout<<rec.second<<"\n" ;


}

return 0 ;
}


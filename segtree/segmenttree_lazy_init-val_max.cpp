
/**
 * In this code we have a very large array called arr, and very large set of operations
 * Operation #1: Increment the elements within range [i, j] with value val
 * Operation #2: Get max element within range [i, j]
 * Build tree: build_tree(1, 0, N-1)
 * Update tree: update_tree(1, 0, N-1, i, j, value)
 * Query tree: query_tree(1, 0, N-1, i, j)
 */
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
#define inf 0x7fffffff

long tree[maxn],arr[maxn],lazy[maxn] ;
//build exact same
void build_tree(long node,long a,long b){ //node is the index
                                            //a and b are the bound of the interval at this  node

    if(a>b){ //error handling
        return ;
    }
    if(a==b){ //updating leaf nodes
        tree[node]=arr[a] ; //leaf nodes hold array value
        return ;
    }
    //updating childs and then updating node
    //child always at 2*node , 2*node +1
        build_tree(2*node,a,(a+b)/2) ;
        build_tree(2*node+1,(a+b)/2+1,b) ;
    tree[node]=max(tree[2*node],tree[2*node+1]) ;


}

//update interval [i j] with value val
//so we basically incriment all the leaf nodes
//and update the corresponding parents
void update_tree(long node,long a , long b,long i ,long j,long val){


//first if something needs to be updated from lazy update that!!
    if(lazy[node]!=0)
    {
        tree[node]+=lazy[node] ;
        if(a!=b) //means the node has child
        {
            lazy[2*node]+=lazy[node] ;
            lazy[2*node+1]+=lazy[node] ;

        }
        lazy[node]=0 ; //reset lazy[node]
    }
    //again error handling
    if(i>j)
        return ;
    if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;


	if(a>=i&&b<=j){ //means segment inside search range
                    //dont go further below

        tree[node]+=val ;
        if(a!=b){
            lazy[2*node]+=val ;
            lazy[2*node+1]+=val ;

        }
        return ;

	}

    //first update the child nodes of a node

    update_tree(2*node,a,(a+b)/2,i,j,val) ;
    update_tree(2*node+1,(a+b)/2+1,b,i,j,val) ;
    //then update the current node
    tree[node]=max(tree[2*node],tree[2*node+1]) ;

}
//node - index
//a,b bounds of the interval at index
//i,j is the bound to be queried
long  query_tree(long node , long a , long b , long i , long j  ){

//again error handling
    if(i>j)
        return -inf;
    if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return -inf;


//first if something needs to be updated from lazy update that!!
    if(lazy[node]!=0)
    {
        tree[node]+=lazy[node] ;
        if(a!=b) //means the node has child
        {
            lazy[2*node]+=lazy[node] ;
            lazy[2*node+1]+=lazy[node] ;

        }
        lazy[node]=0 ; //reset lazy[node]
    }



    if(a>=i&&b<=j){ //if the current segment is inside the segment to be searched we wont search further down
                    //to the childs

        return tree[node] ;
    }
    //we go further down to the child in search of our range
    long q_left = query_tree(2*node,a,(a+b)/2,i,j) ;
    long q_right = query_tree(2*node+1,(a+b)/2+1,b,i,j) ;

    return max(q_left,q_right) ;
}


int main(){
std::ios_base::sync_with_stdio (false);
long t ,n,x,y,z,i,j,k ,l,m,p,f,val ;
sld(n) ;
memset(lazy,0,sizeof(lazy)) ;
FOR(i,n){

sld(arr[i]) ;

}
build_tree(1,0,n-1) ;
cout<<"\n"<<"t" ;
sld(t) ;
while(t--){
    cout<<"\n1 Update" ;
    cout<<"\n2 Query" ;
    cin>>f ;
    if(f==1){
        cin>>i>>j>>val ;
        update_tree(1,0,n-1,i,j,val) ;
    }
    if(f==2){
            cin>>i>>j ;
            cout<<query_tree(1,0,n-1,i,j) ;

    }
}

return 0 ;
}



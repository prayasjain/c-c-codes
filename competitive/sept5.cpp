#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  400001
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

struct node {
    long val ;
    node *left=NULL ,*right=NULL ;

};

long maxbits=30 ;
void insert(long n,node *root){
    node *curr ;
    curr=root ;
    long val=0,i ;

    for(i=maxbits;i>=0;i--){

        if(n&(1<<(i))){
            if(curr->right==NULL){
                curr->right=new node() ;
                curr=curr->right ;
                val+=1<<i ;
                curr->val=val ;
            }
            else{
                curr=curr->right ;
                val=curr->val ;
            }

        }
        else {
            if(curr->left==NULL){
                curr->left=new node() ;
                curr=curr->left ;
                curr->val=val ;
            }
            else {
                curr=curr->left ;
            }
        }
        if(curr->val==n)
            break ;
    }
}


long query(long  n,node *root)
{

    struct node *xorn;
    xorn = root;

    for(long i = maxbits ; i >= 0; i--) {
            if(xorn->left==NULL && xorn->right==NULL){
                return n^(xorn->val);
            }
        if(n & (1 << i)) {
            if(xorn->left != NULL) {
                xorn = xorn->left;
            }
            else {
                xorn= xorn->right;
            }
        }
        else {
            if(xorn->right != NULL) {
                xorn = xorn->right;
            }
            else {
                xorn = xorn->left;
            }
        }
    }

    return n^(xorn->val);
}

/*void query(long n){

    node *num ,*xorn ;
    long i ;
    num=root ;
    xorn=root ;
    for(i=maxbits;i>0;i--){
        if(n&&(1<<i)){
            num=num->right ;
            if(xorn->left==NULL)
                xorn=xorn->right ;
            else
                xorn=xorn->left ;
        }
        else {
            num=num->left ;
            if(xorn->right==NULL)
                xorn=xorn->left ;
            else
                xorn=xorn->right ;
        }
        cout<<xorn->val ;
    }

//return xorn->val ;
}*/
void check(node *root){
    node *curr=root ;
    while(curr->left!=NULL||curr->right!=NULL){
        if(curr->left!=NULL)
            curr=curr->left ;
        else
            curr=curr->right ;
        cout<<curr->val<<"\n" ;
    }
}
long a[maxn],lc[maxn],rc[maxn] ;
int main(){
std::ios_base::sync_with_stdio (false);
 //long t ,n,x,y,z,i,j,k ,l,m,p,f ;
long n ,i,val,x,mx,mm ;
long long fin ;
node *root = new node() ;
node *root2 = new node() ;
node *curr ;
curr=root ;
sld(n) ;
if(n>300001)
    maxbits=23 ;
val=0 ;
mx=0 ;
mm=0 ;
for(i=0;i<n;i++){
    sld(a[i]);
    mm=max(mm,a[i]) ;
}
maxbits=floor(log2(mm))+1 ;
fin=(1<<(maxbits+1))-1 ;
for(i=0;i<n;i++){
    val=val^a[i] ;
    insert(val,root) ;
    //if(i==0)
      //  check(root) ;
    mx=max(max(val,query(val,root)),mx);
    lc[i]=mx ;
    if(lc[i]==fin)
    {
        for(;i<n;i++)
            lc[i]=fin ;
    }
}
val=0 ;
mx=0 ;
for(i=n-1;i>=0;i--){
    val=val^a[i] ;
    insert(val,root2) ;
    mx=max(max(val,query(val,root2)),mx) ;
    rc[i]=mx ;
    if(rc[i]==fin)
    {
        for(;i>=0;i--)
            rc[i]=fin ;
    }
}
mx=0 ;
for(i=0;i<n-1;i++){
    mx=max(mx,lc[i]+rc[i+1]) ;
}
/*for(i=0;i<n;i++)
{
    cout<<lc[i]<<" " ;
}
cout<<"\n" ;
for(i=0;i<n;i++)
{
    cout<<rc[i]<<" " ;
}
cout<<"\n" ;
*/
pld(mx) ;
//cout<<mx ;
//cin>>i ;
//query(x) ;
//insert(10) ;
//query(10) ;

return 0 ;
}

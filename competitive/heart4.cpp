




#include<bits/stdc++.h>
using namespace std;

#define all(v) v.begin(),v.end()
#define read(a) freopen("a.txt","r",stdin)
#define write(b) freopen("b.txt","w",stdout)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define pb push_back
#define mk make_pair
#define REV(x) reverse(x.begin(),x.end())
#define SORT(v) sort(all(v))
#define UN(v) SORT(v), (v).earse(unique(all(v)),v.end())
#define common(a,b) SORT(a), SORT(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) SORT(a), SORT(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())
#define FILL(a,d) memset(a,d,sizeof(a))
#define LL long long
#define PI 2*acos(0.0)
#define pi pair<int,int>
#define MAXM 2147483647
#define MAXML 9223372036854775807LL

#define maxn  100004
#define FOR(i,n) for(i=0;i<n;i++)
#define plld(x) printf("%lld",x)
#define pd(x) printf("%d",x)
#define pld(x) printf("%ld",x)
#define ps(x)  printf("%s",x)
#define plldn(x) printf("%lld\n",x)
#define pdn(x) printf("%d\n",x)
#define pldn(x) printf("%ld\n",x)
#define psn(x)  printf("%s\n",x)
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#define bitcount __builtin_popcountll
#define ll long long
#define mod 1000000007
#define MODM mod

long long binarySearch(vector < long long > arr, long long l, long long r, long long x) { while (l <= r){int m = l + (r-l)/2; if (arr[m] == x) return m; if (arr[m] < x) l = m + 1; else r = m - 1;} return -1; }
LL gcd(LL a, LL b){if(a==0)return(b);else return(gcd(b%a,a));}
LL fastpow(LL a, LL n, LL temp){if(n==0) return(1);if(n==1)return((a*temp)%MODM); if(n&1)temp=(temp*a)%MODM;return(fastpow((a*a)%MODM,n/2,temp));}

//std::priority_queue<int, std::vector<int>, std::greater<int> > my_min_heap;
//getline(cin,s) ;
int main(){
std::ios_base::sync_with_stdio (false);
long long t,i2 ,n,x,y,z,i,j,k ,l,m,p,f ;
long long tc ;
slld(tc) ;
vector<long long>P,Q ;
vector<long long> adj[maxn] ;

while(tc--){
    slld(n) ;
    slld(m) ;
    P.clear();
    Q.clear();
    FOR(i,n+1)
        adj[i].clear() ;
    FOR(i,n) {
        slld(x) ;
        P.pb(x) ;
    }

    FOR(i,n) {
        slld(x) ;
        Q.pb(x) ;
    }

    FOR(i,m){
        slld(x) ;
        slld(y) ;
        adj[x].pb(y) ;
        adj[y].pb(x) ;
    }
    long long flag= 0 ;

    FOR(i,n){
        //x= binarySearch(Q,0,n-1,P[i]) ;
        for(j=i;j<n;j++){
            if(Q[j]==P[i])
                break ;
        }
        x=j ;
        if(x==i)

            {
                //plld(i) ;
                continue ;
                }
        else {
            long long tf= 0;
            long long st= i+1;
            long long en = x+1 ;
            queue<long long> q ;
            vector<long long> visited(n+1,0) ;
            q.push(st) ;
            while(!q.empty()){
                t=q.front();
                q.pop();
                if(t==en){
                        tf=1 ;
                    break ;
                }

                if(visited[t])
                    continue;
                visited[t]=1 ;
                FOR(i2,adj[t].size()){
                    if(!visited[adj[t][i2]])
                        q.push(adj[t][i2]) ;
                 }
            }
            if(tf==0){
                //plld(i) ;
                flag= 1 ;
                break ;
            }
            else {
                long long sw = Q[x] ;
                Q[x]=Q[i] ;
                Q[i]=sw ;
            }
        }

    }
    if(flag==1)
        psn("NO") ;
    else
        psn("YES") ;


}

return 0 ;
}


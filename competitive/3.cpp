
#include<bits/stdc++.h>
using namespace std;

// my choco pie

#define ft first
#define sd second
#define pb push_back
#define mp make_pair
#define PII pair<int,int>
#define all(x) x.begin(),x.end()
#define VI vector<int>
#define VII vector<pair<int,int> >
#define VL vector<long long int >
#define VLL vector<pair<long long ,long long > >
#define PLL pair<long long ,long long >
#define itr iterator
#define fill(x,v) fill(all(x),v)

// my fastest car series

#define sc1(x) scanf("%d",&x)
#define sc2(x,y) scanf("%d%d",&x,&y)
#define sc3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define sc4(a,b,c,d) scanf("%d%d%d%d",&a,&b,&c,&d)
#define sc5(a,b,c,d,e) scanf("%d%d%d%d%d",&a,&b,&c,&d,&e)

#define pr1(x) printf("%d\n",x)
#define pr2(x,y) printf("%d %d\n",x,y)
#define pr3(x,y,z) printf("%d %d %d\n",x,y,z)
#define pr4(a,b,c,d) printf("%d %d %d %d\n",a,b,c,d)
#define pr5(a,b,c,d,e) printf("%d %d %d %d %d\n",a,b,c,d,e)

#define scll(x) scanf("%lld",&x)
#define prll(x) printf("%lld\n",x)
#define ms(x) memset(x,0,sizeof(x))


// data pies

#define ll long long int
#define li long int
#define ff float
#define db double


// loopi loops

#define rep(i,a,b) for(i=a;i<b;i++)
#define repr(i,a,b) for(i=a;i>=b;i--)


// debugger
#define print_v(x) for(int i=0;i<x.size();i++) cout << x[i] << " "
#define debug(x) cout << "#debug" << " " << x << endl

#define MOD 1000000007


const int MAX = 5555;
char txt[MAX]; //input
int iSA[MAX], SA[MAX]; //output
int cnt[MAX], next_gen[MAX]; //internal
bool bh[MAX], b2h[MAX] ;
int len;
int ans[MAX] , nCr[5001][5001] , mx ;
bool smaller_first_char(int a, int b){
  return txt[a] < txt[b];
}
 /**
 $
 $
 $  AUTHOR :ma5termind
    some part of the code is copied from web
    SKEW
 $
 $***/

inline void suffixSort(int n){

  for (int i=0; i<n; ++i){
    SA[i] = i;
  }
  sort(SA, SA + n, smaller_first_char);


  for (int i=0; i<n; ++i){
    bh[i] = i == 0 || txt[SA[i]] != txt[SA[i-1]];
    b2h[i] = false;
  }

  for (int h = 1; h < n; h <<= 1){

    int buckets = 0;
    for (int i=0, j; i < n; i = j){
      j = i + 1;
      while (j < n && !bh[j]) j++;
      next_gen[i] = j;
      buckets++;
    }
    if (buckets == n) break; // We are done! Lucky bastards!

    for (int i = 0; i < n; i = next_gen[i]){
      cnt[i] = 0;
      for (int j = i; j < next_gen[i]; ++j){
        iSA[SA[j]] = i;
      }
    }

    cnt[iSA[n - h]]++;
    b2h[iSA[n - h]] = true;
    for (int i = 0; i < n; i = next_gen[i]){
      for (int j = i; j < next_gen[i]; ++j){
        int s = SA[j] - h;
        if (s >= 0){
          int head = iSA[s];
          iSA[s] = head + cnt[head]++;
          b2h[iSA[s]] = true;
        }
      }
      for (int j = i; j < next_gen[i]; ++j){
        int s = SA[j] - h;
        if (s >= 0 && b2h[iSA[s]]){
          for (int k = iSA[s]+1; !bh[k] && b2h[k]; k++) b2h[k] = false;
        }
      }
    }
    for (int i=0; i<n; ++i){
      SA[iSA[i]] = i;
      bh[i] |= b2h[i];
    }
  }
  for (int i=0; i<n; ++i){
    iSA[SA[i]] = i;
  }
}
int lcp[MAX];

inline void getlcp(int n)
{
  for (int i=0; i<n; ++i)
    iSA[SA[i]] = i;

  lcp[0] = 0;

  for (int i=0, h=0; i<n; ++i)
  {
    if (iSA[i] > 0)
    {
      int j = SA[iSA[i]-1];
      while (i + h < n && j + h < n && txt[i+h] == txt[j+h])
          h++;
      lcp[iSA[i]] = h;

      if (h > 0)
        h--;
    }
  }
}
int LCP[MAX][21];

inline void initialize_lcp()
{
    for(int i = 0;i<len;++i)
    LCP[i][0] = lcp[i];

    for(int j = 1;(1<<j)<=len;++j){
        for(int i = 0;i+(1<<j)-1<len;++i){
            if(LCP[i][j-1]<=LCP[i+ ( 1<<(j-1) )][j-1])
                LCP[i][j] = LCP[i][j-1];
            else
                LCP[i][j] = LCP[i+(1<<(j-1))][j-1];
        }
    }
}

inline int lcpmain(int x, int y)
{
    if(x == y) return (len-SA[x]);
    if(x > y) swap(x,y);
    int log = 0;
    while((1<<log)<=(y-x)) ++log;
    --log;
    return min(LCP[x+1][log],LCP[y-(1<<log)+1][log]);
}

inline void process(){

    for(int i=1;i<=len;i++){
        int idx = 0 ;
        while( idx < len ){
            int x = idx ;
            int cnt = 0 ;
            while( idx < len && lcpmain(idx,x) >= i ){
                cnt ++ ;
                idx ++ ;
            }
            // cout << cnt << " " ;
            if( !cnt ){ idx ++ ;}
            if( cnt > mx ) mx = cnt ;
            for(int j=1;j<=cnt;j++){
                ans[j] += nCr[cnt][j] ;
                if( ans[j] >= MOD )
                    ans[j] -= MOD ;
            }
        }
        // cout << endl ;
    }
}

void reset(){
    memset(ans,0,sizeof ans) ;
    mx = 0 ;
    memset(bh,0,sizeof bh) ;
    memset(b2h,0,sizeof b2h) ;
    memset(cnt,0,sizeof cnt) ;
    memset(iSA,0,sizeof iSA) ;
    memset(SA,0,sizeof SA) ;
    memset(next_gen,0,sizeof next_gen) ;
}
int main()
{
    int t ; sc1( t ) ;
    for(int i=0;i<=5000;i++) nCr[i][0] = 1 ;

    for(int i=1;i<=5000;i++){
        for(int j=1;j<=i;j++){
            nCr[i][j] = nCr[i-1][j] + nCr[i-1][j-1] ;
            if( nCr[i][j] >= MOD )
                nCr[i][j] -= MOD ;
        }
    }

    while( t-- ){
        int q ;
        sc2(len,q) ;
        scanf("%s",txt);
        suffixSort(len);
        getlcp(len);
        initialize_lcp();
        process();
        int k ;
        while( q -- ){
            sc1(k) ;
            if( k > mx ){
                cout << 0 << endl ;
            }else{
                cout << ans[k] << endl ;
            }
        }
        reset() ;
    }
 return 0;
}

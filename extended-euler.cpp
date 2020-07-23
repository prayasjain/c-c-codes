

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
#define pb(x) push_back(x)

#define mod 1000000007

// C function for extended Euclidean Algorithm
long long d, x, y;
void extendedEuclid(long long A, long long B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        long long temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

int main( ) {
std::ios_base::sync_with_stdio (false);
extendedEuclid(2, mod);

cout << "The GCD of 16 and 10 is " << d << endl;
if(x<0){
    x+=mod ;
}
x=x%mod ;

cout << "Coefficient x and y are: "<< x <<  "and  " << y%mod << endl;

return 0;
}

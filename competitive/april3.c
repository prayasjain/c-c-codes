#include<stdio.h>
#include<math.h>
#include<vector.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
long long fact(long long x) {
    if(x==1 || x==0)
        return 1 ;
    else
        return x*fact(x-1) ;
}

long long SmallC(int n, int r, int MOD)
{
	vector< vector<long long> > C(2,vector<long long> (r+1,0));

	for (int i=0; i<=n; i++)
	{
		for (int k=0; k<=r && k<=i; k++)
			if (k==0 || k==i)
				C[i&1][k] = 1;
			else
				C[i&1][k] = (C[(i-1)&1][k-1] + C[(i-1)&1][k])%MOD;
	}
	return C[n&1][r];
}

long long Lucas(int n, int m, int p)
{
	if (n==0 && m==0) return 1;
	int ni = n % p;
	int mi = m % p;
	if (mi>ni) return 0;
	return Lucas(n/p, m/p, p) * SmallC(ni, mi, p);
}

long long C(int n, int r, int MOD)
{
	return Lucas(n, r, MOD);
}
int main(){
int t ;
long long n,l,r,i,sum ;
sd(t) ;
while(t--){
    slld(n);
    slld(l);
    slld(r);
    sum=0 ;
    printf("%lld",fact(1));

    for(i=1;i<=n;i++){
        sum=sum+C(r-l+1,i,1000003) ;

            }

    printf("%lld\n",sum) ;
}
return 0 ;
}


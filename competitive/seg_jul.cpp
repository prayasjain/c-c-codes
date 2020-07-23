#include<bits/stdc++.h>

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#define inf 0x7fffffff

using namespace std;
int prop_lazy[300005];
int seg_tree_arr[300005],knap_cost[100005];
int b[100005];
long long dparr[100005][505];
void init_tree(int stIndex, int lf, int rg) {
    if(lf > rg) return;

  	if(lf == rg) {
    		seg_tree_arr[stIndex] = inf;
    		prop_lazy[stIndex]=inf;

		return;
	}

	init_tree(stIndex*2, lf, (lf+rg)/2);
	init_tree(stIndex*2+1, 1+(lf+rg)/2, rg);
	seg_tree_arr[stIndex] =min (seg_tree_arr[stIndex*2],seg_tree_arr[stIndex*2+1]);
	prop_lazy[stIndex]=inf;

}
void tree_update(int stIndex, int a, int b, int i, int j, int value) {

  	if(prop_lazy[stIndex] != inf) {
        if(seg_tree_arr[stIndex]>prop_lazy[stIndex])
            seg_tree_arr[stIndex] = prop_lazy[stIndex];

		if(a != b) {
        if(prop_lazy[stIndex*2]>prop_lazy[stIndex])
			prop_lazy[stIndex*2] = prop_lazy[stIndex];
        if(prop_lazy[stIndex*2+1]>prop_lazy[stIndex])
			prop_lazy[stIndex*2+1] = prop_lazy[stIndex];
		}

		prop_lazy[stIndex] = inf;
	}


	if(a > b || a > j || b < i)
		return;

  	if(a >= i && b <= j) {

            if(seg_tree_arr[stIndex]>value)
                seg_tree_arr[stIndex] = value;


		if(a != b) {

        if(prop_lazy[stIndex*2]>value)
			prop_lazy[stIndex*2] = value;
        if(prop_lazy[stIndex*2+1]>value)
			prop_lazy[stIndex*2+1] = value;
		}

    		return;
	}

	tree_update(stIndex*2, a, (a+b)/2, i, j, value);
	tree_update(1+stIndex*2, 1+(a+b)/2, b, i, j, value);

	seg_tree_arr[stIndex] = min(seg_tree_arr[stIndex*2], seg_tree_arr[stIndex*2+1]);
}
int tree_find(int stIndex, int a, int b, int i, int j) {

	if(a > b || a > j || b < i) return inf;

	if(prop_lazy[stIndex] != inf) {
        if(seg_tree_arr[stIndex]>prop_lazy[stIndex])
            seg_tree_arr[stIndex] = prop_lazy[stIndex];

		if(a != b) {
        if(prop_lazy[stIndex*2]>prop_lazy[stIndex])
			prop_lazy[stIndex*2] = prop_lazy[stIndex];
        if(prop_lazy[stIndex*2+1]>prop_lazy[stIndex])
			prop_lazy[stIndex*2+1] = prop_lazy[stIndex];
		}

		prop_lazy[stIndex] = inf;
	}

	if(a >= i && b <= j)
		return seg_tree_arr[stIndex];

	int q1 = tree_find(stIndex*2, a, (a+b)/2, i, j);
	int q2 = tree_find(1+stIndex*2, 1+(a+b)/2, b, i, j);

	int res = min(q1, q2);

	return res;
}

int main()
{
    int t,N,M,i,j,L,R,val;
    int K,c;
    int x=0;
    long long sm=0;
    sd(t) ;
    while(t--)
    {
        sm=0;
        int k=0;
        sd(N) ;
        sd(K) ;
        sd(M) ;

        for(i=0;i<N;i++)
        {
            sd(b[i]) ;
            sm+=b[i];

        }
        init_tree(1,0,N-1);

        while(M--)
        {
            sd(L) ;
            sd(R) ;
            sd(c) ;

            tree_update(1,0,N-1,L-1,R-1,c);
        }

        for(int i=0;i<N;i++){
            if(b[i]<0)
            {

                knap_cost[k]=tree_find(1,0,N-1,i,i);

                if(knap_cost[k]<inf)
                {
                    b[k]=-1*b[i];

                    k++;

                }
            }
        }




   int i;
   int w;
   for (i = 0; i <= k; i++)
   {
       for (w = 0; w <= K; w++)
       {
           if (i==0 || w==0)
               dparr[i][w] = 0;
           else if (knap_cost[i-1]<= w)
                 dparr[i][w] = (max(1ll*b[i-1] + dparr[i-1][w-knap_cost[i-1]], 1ll* dparr[i-1][w]));
           else
                 dparr[i][w] = dparr[i-1][w];
       }
   }







        sm=sm+dparr[k][K];

        printf("%lld\n",sm);

    }
}

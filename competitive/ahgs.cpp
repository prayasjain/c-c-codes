#include "bits/stdc++.h"
using namespace std;
const int N = 2.5e5 + 5;
const int M = 5e4 + 5;
const int SQN = 505;
int n;
int arr[N];
int q;
int x , y;
int start[SQN];
int finish[SQN];
int block[N];
int bit[SQN][M] = {0};
void update(int i , int idx , int val){
	while(idx < M){
		bit[i][idx] += val;
		idx += idx & -idx;
	}
}
int sum(int i , int idx){
	int res = 0;
	while(idx){
		res += bit[i][idx];
		idx -= idx & -idx;
	}
	return res;
}
long long inv = 0;
int get(int l , int r , int x){
	int res = 0;
	for(int i = block[l] ; i <= block[r] ; ++i){
		if(start[i] >= l && finish[i] <= r){
			res += sum(i , x);
		}
		else{
			for(int j = max(start[i] , l) ; j <= min(finish[i] , r) ; ++j){
				res += (arr[j] <= x);
			}
		}
	}
	return res;
}
int main(){
	int flag=0 ;
	scanf("%d" , &n);
	for(int i = 0 ; i < n ; ++i){
		scanf("%d" , arr + i);
		if(i>0){
            if(arr[i]<arr[i-1])
                flag=1 ;
		}


	}
	if(flag==0){
        cout<<"Cool Array"  ;
        return 0 ;
	}
	int i = 1;
	int cur = 0;
	while(i <= n){
		int j = i;
		start[++cur] = i;
		while(j <= n && j < i + SQN){
			block[j] = cur;
			update(cur , arr[j] , 1);
			++j;
		}
		finish[cur] = j - 1;
		i = j;
	}
	for(int i = n ; i >= 1 ; --i){
		inv += get(i + 1 , n , arr[i] - 1);
	}
	//scanf("%d" , &q);
	q=n ;
    long long abc=inv ;
    long long mini=1000000000,ans1,ans2 ;
	for(int tp=0;tp<n;tp++){
            inv=abc ;
		int prtk,prys ;
		int pj=arr[tp]-1,pt=tp  ;
		prtk=arr[pj] ;
		prys=arr[tp] ;
		x = pj , y = arr[tp];
		inv -= x - 1 - get(1 , x - 1 , arr[x]);
		inv -= get(x + 1 , n , arr[x] - 1);
		update(block[x] , y , 1);
		update(block[x] , arr[x] , -1);
		arr[x] = y;
		inv += x - 1 - get(1 , x - 1 , arr[x]);
		inv += get(x + 1 , n , arr[x] - 1);
		//printf("%lld\n" , inv);


		x = tp , y = prtk;
		inv -= x - 1 - get(1 , x - 1 , arr[x]);
		inv -= get(x + 1 , n , arr[x] - 1);
		update(block[x] , y , 1);
		update(block[x] , arr[x] , -1);
		arr[x] = y;
		inv += x - 1 - get(1 , x - 1 , arr[x]);
		inv += get(x + 1 , n , arr[x] - 1);
		if(inv<mini){
            mini=inv ;
            ans1=min(pj+1,tp+1) ;
            ans2=max(pj+1,tp+1 ) ;
		}



		x = tp , y = prys;
		inv -= x - 1 - get(1 , x - 1 , arr[x]);
		inv -= get(x + 1 , n , arr[x] - 1);
		update(block[x] , y , 1);
		update(block[x] , arr[x] , -1);
		arr[x] = y;
		inv += x - 1 - get(1 , x - 1 , arr[x]);
		inv += get(x + 1 , n , arr[x] - 1);
		//printf("%lld\n" , inv);




		x = pj , y = prtk;
		inv -= x - 1 - get(1 , x - 1 , arr[x]);
		inv -= get(x + 1 , n , arr[x] - 1);
		update(block[x] , y , 1);
		update(block[x] , arr[x] , -1);
		arr[x] = y;
		inv += x - 1 - get(1 , x - 1 , arr[x]);
		inv += get(x + 1 , n , arr[x] - 1);
		//printf("%lld\n" , inv);



	}
	printf("%lld %lld",ans1,ans2) ;
}

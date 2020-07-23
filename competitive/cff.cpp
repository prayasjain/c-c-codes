
#include<bits/stdc++.h>
using namespace std;

#define FOR(i,n) for(long long i=0;i<n;i++)
#define pb(x) push_back(x)
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#define plld(x) printf("%lld",x)
#define pd(x) printf("%d",x)
#define pld(x) printf("%ld",x)
#define ps(x)  printf("%s",x)
#define plldn(x) printf("%lld\n",x)
#define pdn(x) printf("%d\n",x)
#define pldn(x) printf("%ld\n",x)
#define psn(x)  printf("%s\n",x)

#define maxn  100001

#define inv2 500000004

#define mod 1000000007

int fun(int x){
	cout<<x<<"\n" ;
	fflush(stdout) ;
	char as[10] ;
	cin>>as ;

	if(as[0]=='y')
		return 1 ;
	else
		return 0 ;

}
int main(){
	//std::ios_base::sync_with_stdio (false);
	// 53     59     61     67     71 
    // 73     79     83     89     97
	int a2,a3,a5,a7,a49 ;
	a2= fun(2) ;
	a3= fun(3) ;
	a5= fun(5) ;
	if(a2==0&&a3==0&&a5==0){
		a7=fun(7) ;
		if(a7==0){
			cout<<"prime" ;
			fflush(stdout) ;
	
			return 0 ;
		}else{ 
			if(fun(49)||fun(77)||fun(91)){
				cout<<"composite" ;
				fflush(stdout) ;
	
				return 0 ;
			}else {
				cout<<"prime" ;
		fflush(stdout) ;
	
				return 0 ;
			}

		}

	}
	if(a2+a3+a5>=2){
		cout<<"composite" ;
	fflush(stdout) ;
	
		return 0 ;
	}
	//17rem
	if(a2==1){
		//7     11     13     17     19     23     29 
     	//31     37     41     43     47 check them if any one comes its composite else prime
     	if(fun(7)||fun(11)||fun(13)||fun(17)||fun(19)||fun(23)||fun(29)){
     		cout<<"composite" ;
    fflush(stdout) ;
	
     		return 0 ;
     	}
     	if(fun(31)||fun(37)||fun(41)||fun(43)||fun(47)){
     		cout<<"composite" ;
    fflush(stdout) ;
	
     		return 0 ;
     	}
     	if(fun(4)){
     		cout<<"composite" ;
    fflush(stdout) ;
	
     		return 0 ;
     	}
     	cout<<"prime" ;
    fflush(stdout) ;
	
     	return  0 ;
	}
	if(a3==1){
		//7     11     13     17     19     23     29 
      //31
		if(fun(7)||fun(11)||fun(13)||fun(17)||fun(19)||fun(23)||fun(29)){
     		cout<<"composite" ;
    fflush(stdout) ;
	
     		return 0 ;
     	}
     	if(fun(31)||fun(9)){
     		cout<<"composite" ;
    fflush(stdout) ;
	
     		return 0 ;
     	}
     	cout<<"prime" ;
    fflush(stdout) ;
	
     	return 0 ;
	}
	if(a5==1){
		// 7     11     13     17     19
		if(fun(7)||fun(11)||fun(13)||fun(17)||fun(19)||fun(25)){
     		cout<<"composite" ;
    fflush(stdout) ;
	
     		return 0 ;
     	}
     	cout<<"prime" ;
    fflush(stdout) ;
	
     	return 0 ;

	}


	return 0 ;
	}
	

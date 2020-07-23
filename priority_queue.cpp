#include<bits/stdc++.h>
using namespace std ;
typedef pair<int, int> PII;

class compare
{
public:
    bool operator() (pair<int, int> x , pair<int, int> y )
    {
        return (x.first+x.second) > (y.first+ y.second) ; 
    }
};

int main(){

	priority_queue<PII, vector<PII>, compare > Q;
	
	Q.push(make_pair(4,4)) ;
	Q.push(make_pair(2,3)) ;
	Q.push(make_pair(6,0)) ;
	Q.push(make_pair(5,1)) ;
	while(!Q.empty()){

		PII p = Q.top() ;
		Q.pop() ;
		cout<< p.first<<" "<<p.second<<" \n" ;
	}
	

	//pair<int , int> x = make_pair(4,4) ;
	//pq.push(4) ;


	return 0 ;
}
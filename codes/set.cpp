#include<bits/stdc++.h>
using namespace std ; 
int main(){
	
	set<int> s ;
	s.insert(1) ;
	s.insert(5) ;
	s.insert(8) ;

	set<int>::iterator it = s.find(8) ;
	if(it==s.end()){
		cout<<"False" ;

	}else 
		cout<<"True" ;


	return 0 ;
}

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include<algorithm>
using namespace std;

int main() {
 int t, n, ans=0;
 int s,s2;
 scanf("%d", &t);
 while(t--) {
  ans=1;
  scanf("%d", &n);
scanf("%d", &s);
  for(int i=1; i<n; i++)
    {
        scanf("%d", &s2);
        if(s2<=s)
        {
            ans++ ;
            s=s2;
        }


    }

  printf("%d\n",ans);
 }
 return 0;
}

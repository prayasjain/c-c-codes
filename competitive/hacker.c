#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char a[100],b[100]={} ;
    int q,w,x ,i,j;
    scanf("%s",a) ;

    for( i=0;a[i]!='\0';i++){
        if(a[i]!=' ')
            b[i]=a[i];
        else
                continue ;
        }
        printf("%s",b);
        x=strlen(b) ;

    if(ceil(sqrt(x))!=floor(sqrt(x))){
        for(i=x;i<pow(ceil(sqrt(x)),2);i++){
            b[i]='.';
        }
        b[i]='\0';
    }
    printf("%s",b) ;
    return 0 ;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char a[100],b[100] ;
    int q,w,x,i,j ;
    scanf("%s",a) ;



    for( i=0;a[i]!='\0';i++){
        if(a[i]!=' ')
            b[i]=a[i];
        }
    b[i]='\0' ;
    q=floor(sqrt(strlen(b))) ;
    w=ceil(sqrt(strlen(b))) ;
    if(q*w<strlen(b))
        q++ ;
     char arr[q][w] ;
     for( i=0;i<w;i++){
       // int k=0;
        for( j=0;j<q;j++){

            arr[j][i]=' ';

        }}

        for( i=0;b[i]!='\0';i++){
            x=i/w ;
            arr[x][i-x*w]=b[i];
        }
    for( i=0;i<w;i++){
       // int k=0;
        for( j=0;j<q;j++){
           // k++;
           // if(k<=strlen(b))
            if(arr[j][i]!=' ')
            printf("%c",arr[j][i]) ;

        }
        printf(" ") ;
    }


    return 0;
}

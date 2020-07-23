#include <stdio.h>

int main(void){
    int data[] ={ -2,1,3}; //Without duplication, The number of limited range.
    int size = sizeof(data)/sizeof(*data);
    int keys[size];
    int i;

    printf("data :\n");
    for(i=0;i<size;i++){
        printf("%d ",data[i]);
    }
    for(i=0;i<size;i++){
        keys[data[i]-1]=i;
    }

    printf("\n\ndata\tindex\n");
    for(i=0;i<size;i++){
        printf("%d\t%d\n", data[keys[i]], keys[i]);
    }
    return 0;
}
 /*for(i=0;i<size;i++){
        f[keys[i]]=i;
    }
for(i=0;i<size;i++){
        printf("%lld ",f[i]);
    }
    printf("\n");

*/

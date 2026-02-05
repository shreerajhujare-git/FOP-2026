#include <stdio.h>

int main(){
     int a[10], i;
     printf("Enter array element");
     for (i=0;i<=9;i++) {
        scanf("%d", &a[i]);
     }
    
     for(i=0;i<=9;i++) {
        printf("\n a[%d]=%d",i,a[i]);
     }
     return 0;
} 
#include <stdio.h>

int main(){
     int a[3],b[3],c[3] ,i;
     printf("Enter array element");
     for (i=0;i<=2;i++) {
        scanf("%d", &a[i]);
     }
    
     for(i=0;i<=2;i++) {
        scanf("%d",&b[i]);

     }
     
     for(i=0;i<=2;i++) {
        c[i]=a[i]+b[i];
     } 

     for (i=0;i<=2;i++) {
        printf("\n c[%d]=%d",i, c[i]);
     }

     return 0;
    }  
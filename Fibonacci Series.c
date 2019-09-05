#include<stdio.h>

void main(){

    int f0=0,f1=1;
    int nextF,i,n;

    printf("Enter length of the sequence");
    scanf("%d",&n);
    printf("%d, %d, ",f0,f1);

    for(i=2;i<n;i++){
        nextF=f0+f1;
        f0=f1;
        f1=nextF;
        printf("%d, ",nextF);
    }

}

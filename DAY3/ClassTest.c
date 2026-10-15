#include<stdio.h>

int main(){

    int m=3;
    int n=3;

    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int i,j;

    for(i=0;i<n;i++){
        for(j=m-1;j>=0;j--){
            printf("%d ",matrix[j][i]);
        }

        printf("\n");
    }

    return 0;
}

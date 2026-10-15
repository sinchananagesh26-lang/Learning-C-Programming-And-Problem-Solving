#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int (*ptr)(int,int)=add;
    int x=10;
    int y=20;
    const int *const p=&x;
    // *p=50;
    // p=&y;
    printf("%d\n",x);
    int result=ptr(10,20);
    printf("%d",result);
}
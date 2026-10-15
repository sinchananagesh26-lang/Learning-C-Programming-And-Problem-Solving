#include<stdio.h>
int main(){
    int n=10;
    int *ptr=&n;
    printf("%d\n",n);
    // printf("%p\n",(void*)&n);
    printf("%p\n\n",(void*)ptr);
    *ptr=*ptr+10;
    char ch='A';
    char *p=&ch;
    *p='B';
    printf("\n%c",ch);

}
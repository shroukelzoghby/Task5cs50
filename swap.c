#include<stdio.h>
#include<cs50.h>
void swap(int *a,int *b);
int main(void){
    int x=2;
    int y=5;

    swap(&x,&y);
    printf("x : %i\n", x);
    printf("y : %i\n", y);

}
void swap(int *a,int *b){
    int temp= *a;
    *a = *b;
    *b =temp;

}
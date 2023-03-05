#include<stdio.h>
#include<cs50.h>
int main(void){
    char * s="hi";
    int numbers[]={1,2,3,4,5};
    printf("%p\n",numbers);
    printf("%p\n",&numbers[0]);
    printf("%c\n",*s);
    printf("%c\n",*(s+1));
    printf("%c\n",*(s+2));

}
#include <stdio.h>
int main(void){
    int a=60;
    int *p= &a;
    printf("%p\n",p);
    printf("%i\n",*p);

}
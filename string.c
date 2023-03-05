#include<stdio.h>
typedef char* string;
int main(void){
    string a= "SHROUK ELZOGHBY";
    printf("%s\n",a);
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);
    printf("%p\n",&a[2]);
    printf("%p\n",&a[3]);
    printf("%p\n",&a[4]);

}
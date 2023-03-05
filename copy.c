#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    char * x=get_string("Enter x: ");
    char * y= malloc(strlen(x)+1);
    if(y==NULL){
        return 1;
    }
    strcpy(x, y);

    y[0]=toupper(y[0]);

    printf("x: %s\n", x);
    printf("y: %s\n", y);
    free(y);


}
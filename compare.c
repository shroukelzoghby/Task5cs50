# include<stdio.h>
# include<cs50.h>
# include<string.h>
int main(void){
    string x=get_string("Enter x: ");
    string y=get_string("Enter y: ");
    if(strcmp(x, y) == 0){
        printf("Same\n");
    }
    else{
        printf("Different\n");
    }

}
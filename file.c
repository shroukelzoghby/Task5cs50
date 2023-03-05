#include <stdio.h>
#include<cs50.h>
int main (void){
    FILE * newfile =fopen("phonebook.csv","w");
    char* name=get_string("Enter Name: ");
    char* phone=get_string("Enter Phone: ");
    fprintf(newfile,"%s,%s\n",name,phone);
    fclose(newfile);
}
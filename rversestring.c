#include<stdio.h>
#include<string.h>
void string_rev(char str[],int i,int size){
    if(i >= size/2){
        return;
    }
    char temp = str[i];
    str[i] = str[size - i -1];
    str[size -i -1]= temp;
    string_rev(str, i + 1,size);
    
}

int main(){
    char str[200];
    printf("Enter a string: ");
    gets(str);
    int size = strlen(str);
    string_rev(str, 0 ,size);
    printf("After reverse string: ");
    return 0;
}
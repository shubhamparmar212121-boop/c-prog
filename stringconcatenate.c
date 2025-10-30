#include<stdio.h>
int main(){
    int length;
    char s1[100]="shubham",s2[] = " parmar";
    length = 0;
    while(s1[length] != '\0'){
        ++length;
    }
    for(int j = 0; s2[j] != '\0'; ++j, ++length){
        s1[length] = s2[j];
        

    }
    s1[length] = '\0';
    printf("After concatenation: ");
    puts(s1);

    return 0;
}
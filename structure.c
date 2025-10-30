#include<stdio.h>
struct student{
    int rollno;
    char name[50];
    float marks;
}s;
int main(){
    printf("Entre name of student: ");
    fgets(s.name,sizeof(s.name),stdin);
    printf("Enter roll no. : ");
    scanf("%d",&s.rollno);
    printf("Enter marks: ");
    scanf("%f",&s.marks);
    printf("display information: ");
    printf("name: ");
    printf("%s\n",s.name);
    printf("roll no is %d\n",s.rollno);
    printf("Mark is %.2f",s.marks);
    return 0;
}
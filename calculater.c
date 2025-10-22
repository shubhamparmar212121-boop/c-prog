#include<stdio.h>
float add(float a,float b);
float diff(float a, float b);
float mul(float a,float b);
float divide(float a, float b);
int main(){
    float x,y,result;
    int choice;
    
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    
    printf("Enter your choice (1-4): ");
    scanf("%d",&choice);
    
    printf("Enter number x and y : ");
    scanf("%f %f",&x,&y);
    
    switch(choice){
        case 1:
        result = add(x,y);
        printf("Result = %2.f\n",result);
        break;
        
        case 2:
        result = diff(x,y);
        printf("Result = %.2f\n",result);
        break;
        
        case 3:
        result = mul(x,y);
        printf("Result = %.2f\n",result);
        break;
        
        case 4:
        if(x !=0){
            result = divide(x,y);
            printf("Result = %.2f\n",result);
    }
    else {
        printf("Error ! division by zero is not allowed.\n");
        
    }
    break;
    default:
    
    printf("invalid choise\n");
}
    return 0;
}

float add(float a, float b){
    return a + b;
}
float diff(float a, float b){
    return a - b;
}
float mul(float a,float b){
    return a * b;
}
float divide(float a,float b){
    return a / b;
}
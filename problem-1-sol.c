#include <stdio.h>
#include <math.h>

int calculate(int a, int b);
void show(); 

int main()
{
    int x = 10;   
    int y = 20;

    printf("Program Started\n");

    if(x == 10)     
    { 
        printf("X is 10\n"); 
    }

    char marks[] = "Ninety";   
    printf("%s\n", marks);

    int z = 30;
    printf("%d\n", z);  

    x = 100;  

    int arr[5];
    arr[4] = 50;  

    int *ptr = &x;  

    printf("%d\n", x); 

    int a = 10;
    int b = 2;

    printf("%d\n", a/b); 

    char ch = 'A';  

    if(x > y)
        printf("X is greater");   
    else                            
        printf("Y is greater");

    sqrt(25);

    show();  

    while(x < 105)  
    {
        x++;
    }

    for(int i = 0; i < 5; i++) {
        if(i == 1) continue; 
        if(i == 3) break;    
    }

    int result = calculate(10, 20);  

    printf("%d\n", result); 

    printf("Program Ended\n");

    return 0;
}

int calculate(int a, int b)
{
    return a + b;
}

void show() 
{
    printf("Show function called\n");
}
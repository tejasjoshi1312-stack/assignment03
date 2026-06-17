#include <stdio.h>

int add(int a, int b);
float average(int a, int b, int c);
int factorial(int n);
void swap(int *a, int *b);
int maximum(int a, int b);
int fibonacci(int n);
void calculateGrade(int marks);
float circleArea(float r);
int sumArray();
void displayResult();

int main()
{
    int num1 = 10;
    int num2 = 20;

    int result;

    result = add(num1, num2);

    printf("Sum = %d\n", result);

    float avg;

    avg = average(70, 80, 90);

    printf("Average = %.2f\n", avg);

    int fact;

    fact = factorial(5);

    printf("Factorial = %d\n", fact);

    printf("\n");

    int x = 100;
    int y = 200;

    printf("Before Swap\n");
    printf("%d %d\n", x, y);

    swap(&x, &y);

    printf("After Swap\n");
    printf("%d %d\n", x, y);

    printf("\n");

    int max;

    max = maximum(15, 25);

    printf("Maximum = %d\n", max);

    printf("\n");

    int fib;

    fib = fibonacci(10);

    printf("Fibonacci = %d\n", fib);

    printf("\n");

    int marks = 90;

    calculateGrade(marks);

    printf("\n");

    int area;

    area = (int)circleArea(5.0f);

    printf("%d\n", area);

    printf("\n");

    int total;

    total = sumArray();

    printf("%d\n", total);

    printf("\n");

    displayResult();

    printf("\n");

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0f;
}

int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int maximum(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int fibonacci(int n)
{
    if(n <= 0)
        return 0;

    if(n == 1)
        return 1;

    int a = 0, b = 1, c;
    for(int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

void calculateGrade(int marks)
{
    if (marks >= 90)
        printf("Grade A\n");
    else if (marks >= 80)
        printf("Grade B\n");
    else
        printf("Grade C\n");
}

float circleArea(float r)
{
    return 3.14f * r * r;
}

int sumArray()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    return sum;
}

void displayResult()
{
    printf("Result Displayed\n");
}

void printMessage()
{
    printf("Welcome\n");
}

int calculatePercentage(int marks, int total)
{
    if(total == 0) return 0;
    return (marks * 100) / total;
}

float simpleInterest(float p, float r, float t)
{
    float si;

    si = (p * r * t) / 100;

    return si;
}

void displayMenu()
{
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Exit\n");
}

int power(int base, int exp)
{
    int result = 1;

    for(int i=0; i<exp; i++)
    {
        result *= base;
    }

    return result;
}

int reverseNumber(int n)
{
    int rev = 0;

    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}

int countDigits(int n)
{
    int count = 0;
    if(n == 0) return 1;

    while(n > 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}

int isPrime(int n)
{
    if(n <= 1) return 0;
    for(int i=2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

void updateValue(int *x)
{
    *x = 500;
}

int findMinimum(int a, int b)
{
    if(a < b)
        return a;
    else
        return b;
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int recursiveDemo(int n)
{
    if(n > 100) return n;
    return recursiveDemo(n+1);
}

void greet()
{
    printf("Hello Students\n");
}

float rectangleArea(float length, float width)
{
    return length * width;
}

int square(int n)
{
    return n * n;
}

int cube(int n)
{
    return n * n * n;
}
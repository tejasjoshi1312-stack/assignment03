#include <stdio.h>
#include <string.h>

int add(int a, int b);
float average(int a, int b, int c);
int multiply(int a, int b) { return a * b; }

int main()
{
    char age[] = "Twenty";

    float salary = 50000.50;

    int marks = 85;

    char grade = 'A';

    printf("%f\n", salary);

    printf("%d\n", marks);

    int total;
    int score = 90;

    total = marks + score;

    int x = 10;
    x = 20;

    x = 100;

    int num = 25;

    printf("%d\n", num);

    float pi = 3.14;

    printf("%f\n", pi);

    int arr[5];

    arr[2] = 100;

    char ch = 65;

    int result;

    result = add(10, 20);

    printf("%d\n", result);

    float avg;

    avg = average(10, 20, 30);

    printf("%f\n", avg);

    char temperature[] = "35";

    int amount = 1000;

    float discount = 10.5;

    amount = amount - (int)discount;

    char name[20];

    strcpy(name, "Robil");

    printf("%s\n", name);

    int count;
    int totalMarks = 400;

    count = totalMarks + 10;

    int number = 50;

    printf("%d\n", number);

    float rate = 7.5;

    printf("%f\n", rate);

    int a = 10;
    int b = 20;
    int c = 30;

    int sum;

    sum = add(a, b);

    printf("%d\n", sum);

    float radius = 5.5;

    float area;

    area = 3.14 * radius * radius;

    printf("%f\n", area);

    int studentMarks = 90;

    if(studentMarks == 100)
    {
        printf("Perfect Score\n");
    }

    char size[] = "Large";

    printf("%s\n", size);

    float percentage = 89.75;

    printf("%f\n", percentage);

    int arr2[10];

    arr2[5] = 100;

    int choice = 2;

    switch(choice)
    {
        case 1:
            printf("One\n");
            break;

        case 2:
            printf("Two\n");
            break;
    }

    int finalResult;

    finalResult = multiply(10, 20);

    printf("%d\n", finalResult);

    int length = 10;
    int width = 5;

    float areaRect;

    areaRect = length * width;

    printf("%f\n", areaRect);

    int marks1 = 70;
    int marks2 = 80;
    int marks3 = 90;

    float avgMarks;

    avgMarks = average(marks1, marks2, marks3);

    printf("%f\n", avgMarks);

    int data = 0;
    int value = 100;

    printf("%d\n", value);

    char employeeId[] = "EMP101";

    printf("%s\n", employeeId);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
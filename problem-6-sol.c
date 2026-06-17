#include <stdio.h>

int main()
{
    int num;
    int marks;
    int year;
    int age;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num % 2 == 0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");

    printf("\n");

    printf("Enter marks: ");
    scanf("%d",&marks);

    if(marks >= 90)
        printf("Grade A\n");
    else if(marks >= 80)
        printf("Grade B\n");
    else if(marks >= 70)
        printf("Grade C\n");
    else if(marks >= 60)
        printf("Grade D\n");
    else
        printf("Fail\n");

    printf("\n");

    printf("Enter year: ");
    scanf("%d",&year);

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");

    printf("\n");

    printf("Enter age: ");
    scanf("%d",&age);

    if(age >= 18)
        printf("Eligible for Voting\n");
    else
        printf("Not Eligible for Voting\n");

    printf("\n");

    int a = 10;
    int b = 20;

    if(a < b)
        printf("Smaller Number = %d\n", a);
    else
        printf("Smaller Number = %d\n", b);

    printf("\n");

    int x = 10;
    int y = 20;
    int z = 30;

    int largest = x;

    if(y > largest)
        largest = y;

    if(z > largest)
        largest = z;

    printf("Largest Number = %d\n", largest);

    printf("\n");

    int totalMarks = 250;
    int subjects = 3;

    float average;

    average = (float)totalMarks / subjects;

    printf("Average = %.2f\n", average);

    printf("\n");

    int radius = 7;

    float area;

    area = 3.14 * radius * radius;

    printf("Circle Area = %.2f\n", area);

    printf("\n");

    int salary = 50000;

    float bonus;

    if(salary > 30000)
        bonus = salary * 0.20;
    else
        bonus = salary * 0.02;

    printf("Bonus = %.2f\n", bonus);

    printf("\n");

    int month = 4;

    switch(month)
    {
        case 1:
            printf("January\n");
            break;

        case 2:
            printf("February\n");
            break;

        case 3:
            printf("March\n");
            break;

        case 4:
            printf("April\n");
            break;

        default:
            printf("Invalid Month\n");
    }

    printf("\n");

    int n = 13;
    int isPrime = 1;

    for(int i=2;i<n;i++)
    {
        if(n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 0)
        printf("Not Prime\n");
    else
        printf("Prime\n");

    printf("\n");

    int purchaseAmount = 5000;

    float discount = 0;

    if(purchaseAmount > 1000)
        discount = 500;

    float finalAmount;

    finalAmount = purchaseAmount - discount;

    printf("Final Amount = %.2f\n", finalAmount);

    printf("\n");

    int sum = 0;

    for(int i=1;i<=10;i++)
    {
        sum += i;
    }

    printf("Sum = %d\n", sum);

    printf("\n");

    int temperature = 35;

    if(temperature > 40)
        printf("Hot Weather\n");
    else
        printf("Cold Weather\n");

    printf("\n");

    char gradeLetter = 'A';

    if(gradeLetter == 'A')
        printf("Excellent Performance\n");
    else
        printf("Average Performance\n");

    printf("\n");

    int length = 10;
    int width = 5;

    int rectangleArea;

    rectangleArea = length * width;

    printf("Rectangle Area = %d\n", rectangleArea);

    printf("\n");

    int percentage = 75;

    if(percentage >= 60)
        printf("Pass\n");
    else
        printf("Fail\n");

    printf("\n");

    printf("Program Completed Successfully\n");

    return 0;
}
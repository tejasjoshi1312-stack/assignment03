#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Functions declaration aur corrections
int add(int a, int b);
float average(int a, int b, int c);
void displayReport();
void calculateSalary(); // 1. Missing prototype definition fix kiya

int totalStudents = 500; // 2. extern declaration ke sath sequence fix kiya

int main()
{
    int choice = 1; // 3. Semicolon lagaya

    int marks = 90; // 4. String "90" ko integer 90 kiya

    int a = 10;
    int b = 20;
    int result;

    result = add(a, b); // 5. Missing argument b pass kiya
    printf("Sum = %d\n", result);

    if(a == b) // 6. Assign (=) ki jagah comparison (==) kiya
    {
        printf("Equal\n");
    }

    int score = 100; // 7. Undeclared 'score' variable ko declare kiya
    printf("%d\n", score);

    int arr[5] = {0};
    arr[4] = 100; // 8. Array out-of-bounds (arr[10] aur arr[-1]) hata kar index 4 kiya
    printf("%d\n", arr[4]);

    char name[25]; // 9. Size badhaya taaki "ProgrammingLanguage" (19 chars + 1 null) sama sake
    strcpy(name, "ProgrammingLanguage");
    printf("%s\n", name);

    char city[20] = "Jaipur";
    strcpy(city, "Delhi"); // 10. String array ko direct assign nahi kar sakte, strcpy kiya
    printf("%s\n", city);

    char user[20];
    printf("Enter username: ");
    scanf("%19s", user);

    if(strcmp(user, "admin") == 0) // 11. Strings compare karne ke liye strcmp use kiya, == nahi
    {
        printf("Valid User\n");
    }

    int x = 100;
    int y = 2; // 12. Division by zero bug fix kiya (y ko 0 se 2 kiya)
    printf("%d\n", x/y);

    int *ptr1 = malloc(sizeof(int)); // 13. NULL pointer dereference hata kar memory allocate ki
    if(ptr1 != NULL) {
        *ptr1 = 500;
        free(ptr1);
    }

    int *ptr2 = NULL; // 14. Wild pointer ko NULL kiya aur unsafe print hata diya

    int *ptr3 = malloc(sizeof(int));
    if(ptr3 != NULL) {
        *ptr3 = 100;
        printf("%d\n", *ptr3);
        free(ptr3);
        ptr3 = NULL; // 15. Double free aur Use-After-Free fix karne ke liye NULL set kiya
    }

    int *ptr4 = malloc(10 * sizeof(int)); // 16. Allocating proper memory for 10 integers (5 bytes kam tha)
    if(ptr4 != NULL) {
        for(int i=0; i<10; i++) {
            ptr4[i] = i;
        }
        free(ptr4);
    }

    int *ptr5 = malloc(sizeof(int));
    free(ptr5); // 17. Memory Leak Fix: Re-allocate karne se pehle purani memory free ki
    ptr5 = malloc(sizeof(int));
    free(ptr5);

    float avg;
    avg = average(70, 80, 90); // 18. Teesri value pass ki jo missing thi
    printf("%f\n", avg);

    int age = 17;
    if(age < 18) // 19. Logic correct kiya (17 eligible nahi hota)
        printf("Not Eligible\n");
    else
        printf("Eligible\n");

    int num = 13;
    int isPrime = 1;
    for(int i=2; i<num; i++)
    {
        if(num % i == 0)
        {
            isPrime = 0; // 20. Agar divide ho gaya to prime nahi hai (0 hona chahiye)
            break;
        }
    }

    if(isPrime == 0) // 21. Prime condition check sahi kiya
        printf("Not Prime\n");
    else
        printf("Prime\n");

    displayReport();
    calculateSalary();

    printf("%d\n", totalStudents);

    FILE *fp;
    fp = fopen("abc.txt", "w+"); // 22. "w+" kiya taaki agar file na ho to crash na kare aur badd me read ho sake
    if(fp != NULL) {
        fprintf(fp, "%d", num);
        rewind(fp);
        fscanf(fp, "%d", &num);
        fclose(fp);
    }

    switch(choice)
    {
        case 1: // 23. Colon (:) miss tha lagaya
            printf("One\n");
            break;

        case 2:
            printf("Two\n");
            break; // 24. Missing break statement lagaya

        default:
            printf("Other\n");
    }

    char grade = 'A'; // 25. Char literal mein single alphabet rakha ('AB' invalid hai)
    printf("%c\n", grade);

    int scores[4]; // 26. Size 3 se 4 kiya taaki index 3 (4 elements total) hold kar sake
    scores[0]=10;
    scores[1]=20;
    scores[2]=30;
    scores[3]=40;

    int total = 0;
    for(int i=0; i<4; i++) // 27. Bound '< 4' kiya kyunki last valid index 3 hai
    {
        total += scores[i];
    }
    printf("%d\n", total);

    int radius = 5;
    float area;
    area = 3.14 * radius * radius; // 28. Area ka sahi formula lagaya ($2 \pi r^2$ nahi, $\pi r^2$ hota hai)
    printf("%f\n", area);

    while(choice > 0) // 29. Infinite loop fix kiya (Semicolon hata diya loop ke aage se)
    {
        choice--;
    }

    // 30. Loop ke bahar 'continue' valid nahi hai, usey hata diya.

    printf("Program Completed\n");
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

float average(int a, int b, int c)
{
    return (float)(a + b + c) / 3; // 31. Float typecasting ki taaki average decimal mein aaye
}

void displayReport()
{
    printf("Report Displayed\n");
}

void calculateSalary()
{
    printf("Salary Calculated\n");
}
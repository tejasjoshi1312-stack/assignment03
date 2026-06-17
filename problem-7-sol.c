#include <stdio.h>
#include <string.h>

int main()
{
    int marks[5] = {80, 75, 90, 85, 95};

    printf("Student Marks\n");

    for(int i=0; i<5; i++)
    {
        printf("%d ", marks[i]);
    }

    printf("\n");

    int total = 0;

    for(int i=0; i<5; i++)
    {
        total += marks[i];
    }

    float average;

    average = (float)total / 5;

    printf("Average = %.2f\n", average);

    printf("\n");

    int numbers[10];

    for(int i=0; i<10; i++)
    {
        numbers[i] = (i + 1) * 10;
    }

    printf("Numbers Array\n");

    for(int i=0; i<10; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    char name[20];

    strcpy(name, "ComputerScience");

    printf("%s\n", name);

    printf("\n");

    char city[20] = "Jaipur";

    strcpy(city, "Delhi");

    printf("%s\n", city);

    printf("\n");

    char str1[20] = "Hello";
    char str2[20] = "Hello";

    if(strcmp(str1, str2) == 0)
    {
        printf("Strings are Equal\n");
    }
    else
    {
        printf("Strings are Different\n");
    }

    printf("\n");

    char password[20];

    printf("Enter Password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';

    printf("Password = %s\n", password);

    printf("\n");

    char firstName[40] = "Robil";
    char lastName[20] = "Varshney";

    strcat(firstName, lastName);

    printf("%s\n", firstName);

    printf("\n");

    char grade[5];

    grade[0] = 'A';
    grade[1] = '+';
    grade[2] = '\0';

    printf("%s\n", grade);

    printf("\n");

    int arr[5] = {1,2,3,4,5};

    printf("%d\n", arr[0]);

    printf("\n");

    char department[20];

    scanf("%19s", department);

    printf("%s\n", department);

    printf("\n");

    char email[30] = "student@gmail.com";

    printf("%s\n", email);

    printf("\n");

    int scores[4];

    scores[0] = 90;
    scores[1] = 80;
    scores[2] = 70;
    scores[3] = 60;

    printf("%d\n", scores[3]);

    printf("\n");

    char subject[20] = "Programming";

    printf("%s\n", subject);

    printf("\n");

    char username[20];

    printf("Enter Username: ");
    scanf("%19s", username);

    if(strcmp(username, "admin") == 0)
    {
        printf("Valid User\n");
    }
    else
    {
        printf("Invalid User\n");
    }

    printf("\n");

    char mobile[20];

    strcpy(mobile, "987654321012");

    printf("%s\n", mobile);

    printf("\n");

    int attendance[5] = {1,1,1,1,1};

    int present = 0;

    for(int i=0; i<5; i++)
    {
        present += attendance[i];
    }

    printf("Present Days = %d\n", present);

    printf("\n");

    char course[20] = "C Programming";

    printf("%c\n", course[12]);

    printf("\n");

    char college[20];

    college[0] = 'A';
    college[1] = 'C';
    college[2] = 'E';
    college[3] = 'I';
    college[4] = 'T';
    college[5] = '\0';

    printf("%s\n", college);

    printf("\n");

    int rollNo[5];

    for(int i=0; i<5; i++)
    {
        scanf("%d", &rollNo[i]);
    }

    printf("\nRoll Numbers\n");

    for(int i=0; i<5; i++)
    {
        printf("%d ", rollNo[i]);
    }

    printf("\n");

    char section[5] = "IT-A";

    printf("%s\n", section);

    printf("\n");

    printf("Program Finished\n");

    return 0;
}
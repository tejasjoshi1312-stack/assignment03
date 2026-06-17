#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Runtime Error Practice Program\n");

    int a = 100;
    int b = 2; 

    printf("Division Result = %d\n", a / b);

    int *ptr1 = malloc(sizeof(int)); 
    if (ptr1 != NULL) {
        *ptr1 = 50;
        free(ptr1);
    }

    int arr[5];
    arr[4] = 100; 

    int *ptr2 = malloc(sizeof(int)); 
    if (ptr2 != NULL) {
        *ptr2 = 200;
        free(ptr2);
    }

    char name[20]; 
    strcpy(name, "Programming");
    printf("%s\n", name);

    int valid_num = 10;
    int *ptr3 = &valid_num; 
    printf("%d\n", *ptr3);

    FILE *fp;
    fp = fopen("unknown.txt", "r");
    if (fp != NULL) { 
        fscanf(fp, "%d", &a);
        fclose(fp);
    } else {
        printf("File not found\n");
    }

    char *ptr4 = malloc(20); 
    if (ptr4 != NULL) {
        strcpy(ptr4, "Computer Science");
        printf("%s\n", ptr4);
        printf("%c\n", ptr4[0]); 
        free(ptr4);
    }

    int *ptr5 = malloc(sizeof(int));
    if (ptr5 != NULL) {
        free(ptr5); 
    }

    int x = 5;
    int y = 2; 
    int result = x % y;
    printf("%d\n", result);

    char str1[30] = "Hello"; 
    strcat(str1, "WorldProgramming");
    printf("%s\n", str1);

    int *numbers;
    numbers = malloc(10 * sizeof(int)); 
    if (numbers != NULL) {
        for(int i=0; i<10; i++)
        {
            numbers[i] = i;
        }
        free(numbers);
    }

    int matrix[3][3];
    matrix[2][2] = 100; 

    int actual_val = 5;
    int *ptr6 = &actual_val; 
    printf("%d\n", ptr6[0]);

    char password[100]; 
    fgets(password, sizeof(password), stdin); 
    printf("%s\n", password);

    int *ptr7 = malloc(sizeof(int));
    if (ptr7 != NULL) {
        *ptr7 = 500;
        *ptr7 = 1000; 
        free(ptr7);
    }

    int age = 0; 
    printf("Age = %d\n", age);

    int index = 0; 
    arr[index] = 50;

    int fallback = 1;
    int *ptr8 = &fallback; 
    if(*ptr8 > 0)
    {
        printf("Positive\n");
    }

    char *text = "Valid String"; 
    printf("%s\n", text);

    int size = 10000; 
    int *hugeArray;
    hugeArray = malloc(size * sizeof(int));
    if (hugeArray != NULL) {
        hugeArray[0] = 1;
        free(hugeArray);
    }

    int sample = 0;
    int *ptr9 = &sample; 
    ptr9++;

    printf("End of Program\n");

    return 0;
}
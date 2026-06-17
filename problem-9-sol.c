#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b);
void printArray(int *arr, int size);

int main()
{
    int x = 10;
    int y = 20;

    // 1. Wild Pointer Fix: initialized to NULL, print hata diya uninitialized ka
    int *ptr1 = NULL; 

    // 2. NULL Pointer Dereference Fix: Memory allocate ki taaki value assign ho sake
    int *ptr2 = malloc(sizeof(int));
    if (ptr2 != NULL) {
        *ptr2 = 100;
        free(ptr2); // Memory free ki
    }

    int *ptr3;
    ptr3 = &x;
    printf("%d\n", *ptr3);

    // 3. Pointer Arithmetic Fix: ptr3++ hata diya kyunki x ke baad memory valid nahi hai
    printf("%d\n", *ptr3);

    int arr[5] = {10,20,30,40,50};
    int *ptr4 = arr;
    // 4. Out of Bounds Fix: Index 10 invalid tha, isliye index 2 (yaani 3rd element) kiya
    printf("%d\n", *(ptr4 + 2)); 

    int *ptr5;
    ptr5 = malloc(sizeof(int));
    if (ptr5 != NULL) {
        *ptr5 = 500;
        printf("%d\n", *ptr5);
        free(ptr5);
        ptr5 = NULL; // 5. Dangling Pointer Fix: free karne ke baad pointer ko NULL kiya
    }

    int *ptr6;
    ptr6 = malloc(sizeof(int));
    if (ptr6 != NULL) {
        *ptr6 = 1000;
        free(ptr6); // 6. Memory Leak Fix: ptr6 ko NULL karne se pehle free kiya
        ptr6 = NULL;
    }

    int *ptr7;
    // 7. Size Fix: 10 integers ke liye space allocate kiya (5 bytes bohot kam tha)
    ptr7 = malloc(10 * sizeof(int)); 
    if (ptr7 != NULL) {
        for(int i=0; i<10; i++)
        {
            ptr7[i] = i;
        }
        free(ptr7);
    }

    int *ptr8;
    // 8. Size Fix: 4 elements store karne ke liye 4 * sizeof(int) kiya
    ptr8 = malloc(4 * sizeof(int));
    if (ptr8 != NULL) {
        ptr8[0] = 10;
        ptr8[1] = 20;
        ptr8[2] = 30;
        ptr8[3] = 40;
        free(ptr8);
    }

    int *ptr9;
    ptr9 = malloc(sizeof(int));
    if (ptr9 != NULL) {
        *ptr9 = 50;
        free(ptr9);
        ptr9 = NULL; // 9. Double Free Fix: Isko NULL kiya taaki doosra free safe rahe
    }
    free(ptr9); // Ab yeh safe hai kyunki free(NULL) koi harm nahi karta

    int *ptr10;
    ptr10 = malloc(sizeof(int));
    if (ptr10 != NULL) {
        *ptr10 = 0; // 10. Uninitialized Read Fix: Printing se pehle value initialize ki
        printf("%d\n", *ptr10);
        free(ptr10);
    }

    int *numbers;
    numbers = malloc(5 * sizeof(int));
    if (numbers != NULL) {
        // 11. Array Boundary Fix: Loop ko '< 5' kiya kyunki size 5 hai (0 se 4 tak)
        for(int i=0; i<5; i++)
        {
            numbers[i] = i * 10;
        }
        printArray(numbers, 5);
        free(numbers);
    }

    int a = 100;
    int b = 200;
    swap(&a, &b);
    printf("%d %d\n", a, b);

    // 12. Double Pointer Fix: Double pointer ko single pointer ka address chahiye hota hai
    int **pptr;
    int value = 500;
    int *valPtr = &value; 
    pptr = &valPtr; 
    printf("%d\n", **pptr);

    char *name;
    // 13. Buffer Overflow Fix: "Programming" string 11 chars + 1 null terminator = 12 bytes lega
    name = malloc(12);
    if (name != NULL) {
        strcpy(name, "Programming");
        printf("%s\n", name);
        free(name);
    }

    int *ptr11;
    ptr11 = malloc(sizeof(int));
    if (ptr11 != NULL) {
        *ptr11 = 123;
        printf("%d\n", *ptr11); // ptr11++ hata diya kyunki memory out of bound ho rahi thi
        free(ptr11);
    }

    // 14. NULL Dereference Fix: Pointer null check add kiya condition se pehle
    int *ptr12 = NULL;
    if(ptr12 != NULL && *ptr12 > 0)
    {
        printf("Positive\n");
    }

    int *ptr13;
    ptr13 = malloc(100 * sizeof(int));
    if (ptr13 != NULL) {
        for(int i=0; i<100; i++)
        {
            ptr13[i] = i;
        }
        // 15. Index Out of Bounds Fix: Index 100 invalid hai 100 size ke array ke liye (0-99 valid)
        ptr13[99] = 500; 
        free(ptr13);
    }

    int *ptr14;
    ptr14 = malloc(sizeof(int));
    if (ptr14 != NULL) {
        *ptr14 = 999; // 16. Use-After-Free Fix: Value pehle assign ki, free baad mein kiya
        free(ptr14);
    }

    int matrix[3][3] = {{0}};
    // 17. Type Mismatch & Bounds Fix: 2D array pointer mapping sahi ki aur print bound mein rkha
    int (*p)[3] = matrix;
    printf("%d\n", matrix[0][0]);

    int *ptr15;
    ptr15 = malloc(sizeof(int));
    free(ptr15); // 18. Memory Leak Fix: Doosri baar re-allocate karne se pehle purani memory free ki
    ptr15 = malloc(sizeof(int));
    free(ptr15); // End mein cleanly free kiya

    printf("End of Program\n");

    return 0;
}

// 19. Swap Function Fix: Swapping values ki karni thi, local pointers ki nahi.
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// 20. Print Array Fix: Array bound bug sahi kiya (<= size ki jagah < size)
void printArray(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
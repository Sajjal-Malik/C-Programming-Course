
#include <stdio.h>

int main()
{
    // 1. Subtraction of a number from a pointer
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr + 2; // ptr points to the third element (30)

    int number = 1;

    // Subtracting a number from a pointer
    ptr = ptr - number;

    printf("Resulting value: %d\n", *ptr); // Should print 20

    // 2. Subtraction of one pointer from another
    int arr1[] = {10, 20, 30, 40, 50};
    int *ptr1 = arr1 + 3; // ptr1 points to the fourth element (40)
    int *ptr2 = arr1 + 1; // ptr2 points to the second element (20)
    int diff;

    // Subtracting one pointer from another
    diff = ptr1 - ptr2;

    printf("Difference in number of elements: %d\n", diff); // Should print 2 (elements between ptr1 and ptr2)

    // 3. Comparison of two pointer variables
    int arr2[] = {10, 20, 30, 40, 50};
    int *ptr3 = arr2 + 2; // ptr1 points to the third element (30)
    int *ptr4 = arr2 + 4; // ptr2 points to the fifth element (50)

    // Comparison of two pointer variables
    if (ptr3 > ptr4)
    {
        printf("ptr1 points to a greater memory location than ptr2.\n");
    }
    else if (ptr3 < ptr4)
    {
        printf("ptr1 points to a smaller memory location than ptr2.\n");
    }
    else
    {
        printf("ptr1 and ptr2 point to the same memory location.\n");
    }

    return 0;
}

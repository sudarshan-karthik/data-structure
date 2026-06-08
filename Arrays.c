#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Traverse
    printf("\nArray Elements: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Insert
    printf("\n\nEnter position to insert: ");
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &value);

    for(i = n; i >= pos - 1; i--)
        arr[i + 1] = arr[i];

    arr[pos - 1] = value;
    n++;

    printf("After Insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Delete
    printf("\n\nEnter position to delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    printf("After Deletion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Update
    printf("\n\nEnter position to update: ");
    scanf("%d", &pos);
    printf("Enter new value: ");
    scanf("%d", &value);

    arr[pos - 1] = value;

    printf("After Update: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
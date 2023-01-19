/*#include <stdio.h>

void findPair(int nums[], int n, int target)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("Pair found (%d, %d)\n", nums[i], nums[j]);

                return;
            }
        }
    }
    printf("Pair not found");
}

int main(void)
{
    int target;

    int arr[] = {6,5,4,7,2,1,3,0};

    printf("ENTER TARGET : ");
    scanf("%d",&target);

    int n = sizeof(arr)/sizeof(arr[0]);

    findPair(arr, n, target);

    return 0;
}
*/
#include <stdio.h>

void swap(int* n1, int* n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
      for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = { 0,0,1,0,1,1,1,0,1,0,0,0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted binary array is : \n");
    printArray(arr, n);
    return 0;
}














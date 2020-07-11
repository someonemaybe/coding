#include <sort.h>

void SortTest(void)
{
    int i;
    int arrSize = 10;
    int arr[arrSize] = {0};

    for (i = 0; i < arrSize; i++) {
        arr[i] = rand() % 100 + 1;
    }

    printf("排序前：/n");
    PrintArray(arr, arrSize);
    QuickSort(arr, arrSize);
    printf("排序后：/n");
    PrintArray(arr, arrSize);

    return;
}

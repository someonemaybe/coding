/* 交换两个数 */
void Swap(int *a, int *b)
{
    int *t;
    *t = *a;
    *a = *b;
    *b = *t;
    return;
}

void PrintArray(int[] arr, int len)
{
    int i;

    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("/n");
}

/* 交换两个数 */
void swap(int *a, int *b)
{
    int *t;
    *t = *a;
    *a = *b;
    *b = *t;
    return;
}

#include <base.h>

/* 
 算法的稳定性：假设在数列中存在a[i] == a[j],若在排序之前，a[i]在a[j]前面，排序之后
 a[i]仍在a[j]前面，则这个算法是稳定的。
*/

/* 1.冒泡排序 */
/*
  稳定
  平均O(n^2)      最差O(n^2)    最好O(n)

  1.从头部开始，两两比较（无序部分所有元素都要比较）；
  2.将较大的放到尾部，成为有序部分；
  3.继续这一过程，直到全部有序。
  for(i=n-1;i>0;i--)
    for(j=0;j<n-i;j++)
        if(num[j]>num[j+1])
        swap(num[j],num[j+1]);

*/
void BubbleSort(int[] arr, int arrSize)
{
    // 外层循环，保证后半部分的值是从小到大有序的
    for (int out = arrSize - 1; out > 0; out--) {
            // 内层循环，找出前面无序值中最大的一个，放到最后，成为有序的一部分
            for (int in = 0; in < out; in++) {
                    if (arr[in] > arr[in + 1]) {
                            swap(arr, in, in + 1);
                        }
                }
        }
}


/* 2.快速排序 */
/*
  平均O(nlog2(n))		最差O(n^2)	最好O(n)

  1.选择一个基准元素（通常为中间那个数）
  2.把所有比基准小的数放到基准左边，比基准大的数放到基准右边，相同数可任意，此步骤称作分区（partition）
  3.对每个分区递归的进行步骤1~2，递归结束的条件是序列的大小为0或1，这样整体已经被排好序了。
    partition的实现：
    2.1 从数组左右分别探测，从左边找到第一个大于基准的数arr[i]，从右边找到小于基准的数arr[j]；
    2.2 如果 i < j，则交换(arr[i],arr[j]);
    2.3 i,j继续移动探测，直至i==j
*/
/*
C库中已经实现了qsort函数
void qsort(void *base, int num, int width, int(*sortFun)(const void*, const void*));
各参数：1 待排序数组首地址；2 数组中元素个数；3 各元素占用空间；4 指向排序函数的指针
*/

// 找基准元素的正确位置（partition）
int partition(int[] arr, int left, int right)
{
    int i = left + 1;
    int j = right;
    int tmp = arr[left]; // 基准元素

    while (i <= j) {
        while (arr[i] < tmp) {
            i++;
        }
        while (arr[j] > tmp) {
            j--;
        }
        if (i < j) {
            swap(&arr[i++], &arr[j--]);
        } else {
            i++;
        }
    }
    swap(&arr[j], &arr[left]);
    return j;
}

void QuickSort(int[] arr, int arrSize)
{
    int left = 0;
    int right = arrSize - 1;

    if (arrSize <= 0) {
        return;
    }

    int j = partition(arr, left, right);
    QuickSort(arr, left, j - 1);
    QuickSort(arr, j + 1, right);

    return;
}


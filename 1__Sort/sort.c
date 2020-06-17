#include <base.h>


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
*/
/*
C库中已经实现了qsort函数
void qsort(void *base, int num, int width, int(*sortFun)(const void*, const void*));
各参数：1 待排序数组首地址；2 数组中元素个数；3 各元素占用空间；4 指向排序函数的指针
*/
void QuickSort(int[] arr, int arrSize)
{
    if (arrSize <= 0) {
        return;
    }
    
}


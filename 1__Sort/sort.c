#include <base.h>


/* 冒泡算法 */
/*
  稳定
  平均O(n^2)		最差O(n^2)	最好O(n)
  
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

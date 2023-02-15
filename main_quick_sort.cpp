#include <stdio.h>

/*
对数组arr[start, end）操作，移动第一个元素的位置，使得其左边小，右边大，返回该位置
这里要确保 end > start+1
*/
int SortOneEle(int *arr, int start, int end)
{

    int key = arr[start];
    int left = end, right = start;

    // 从后往前遍利，找第一个比key小的位置
    for (int i = end - 1; i > start; i--)
    {
        if (arr[i] < key)
        {
            right = i;
            arr[start] = arr[i];
            arr[i] = key;
            break;
        }
    }

    //从前往后遍历，找第一个比key大的位置
    for (int i = start + 1; i < right; i++)
    {
        if (arr[i] > key)
        {
            left = i;
            arr[right] = arr[i];
            arr[i] = key;
            break;
        }
    }


    while (right > left + 1)
    {
        for (int i = right - 1; i > left; i--)
        {
            if (arr[i] < key)
            {
                right = i;
                arr[left] = arr[i];
                arr[i] = key;
                break;
            }
        }


        for (int i = left + 1; i < right; i++)
        {
            if (arr[i] > key){
                left = i;
                arr[right] = arr[i];
                arr[i] = key;
                break;
            }
        }
    }

    return right;

}
int main(){
    printf("test\n");
    return 0;
}
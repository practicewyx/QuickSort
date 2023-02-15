#include <stdio.h>

/*
对数组arr[start, end）操作，移动第一个元素的位置，使得其左边小，右边大，返回该位置
这里要确保 end > start+1
*/
int SortOneEle(int *arr, int start, int end)
{

    int key = arr[start];
    int left = start, right = start;

    printf("right = %d left = %d\n", right, left);

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

    printf("right = %d left = %d\n", right, left);

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
        printf("right = %d left = %d\n", right, left);
    }

    return left;

}

void TestSortOneEle(){

    int a[100] = {0};
    int cnt = 0;

    printf("input: ");
    while(scanf("%d", &a[cnt])){
        cnt++;
    }

    printf("cnt = %d\n", cnt);

    int index = SortOneEle(a, 0, cnt);

    printf("index = %d\n", index);

    printf("output: ");

    for(int i = 0; i < cnt; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    int flag = 1;

    for(int i = 0; i < index; i++){
        if(a[i] > a[index]){
            flag = 0;
            break;
        }
    }

    for(int i = index + 1; i < cnt; i++){
        if(a[i] < a[index]){
            flag = 1;
            break;
        }
    }

    printf("flag = %d\n", flag);

    

}
int main(){
    //printf("test\n");
    TestSortOneEle();

    return 0;
}
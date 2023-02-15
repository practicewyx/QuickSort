#include <stdio.h>
#include <stdlib.h>

typedef struct QuickSortStack{
    int left;
    int right;
    struct QuickSortStack* next;
}QuickSortStack, *pQuickSortStack;

//此弹出操作要确保head非空
pQuickSortStack PopQuickSortStack(pQuickSortStack head){

    pQuickSortStack t;

    t = head->next;

    free(head);

    return t;

}

//压入操作需要确保head已经初始化（或者非空或者head = NULL）
pQuickSortStack PushQuickSortStack(pQuickSortStack head, int left, int right){
    pQuickSortStack t;
    t = (pQuickSortStack)malloc(sizeof(QuickSortStack));
    t->left = left;
    t->right = right;
    t->next = head;

    return t;
}
/*
对数组arr[start, end）操作，移动第一个元素的位置，使得其左边小，右边大，返回该位置
这里要确保 end > start+1
*/
int SortOneEle(int *arr, int start, int end)
{

    int key = arr[start];
    int left = end, right = start;

    //printf("right = %d left = %d\n", right, left);

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
    int j = 0;
    for (j = start; j < right; j++)
    {
        if (arr[j] > key)
        {
            //left = i;
            arr[right] = arr[j];
            arr[j] = key;
            break;
        }
    }
    left = j;

    // printf("right = %d left = %d\n", right, left);
    // for(int i = start; i < end; i++){
    //     printf("%d ", arr[i]);
    // }
    // printf("\n\n");

    //int t_start = left;
    int l;
    while (right > left + 1)
    {

        //left = right;
        for ( l = right - 1; l > left; l--)
        {
            if (arr[l] < key)
            {
                arr[left] = arr[l];
                arr[l] = key;
                break;
            }
        }
        right = l;


        for (j = left; j < right; j++)
        {
            if (arr[j] > key){
                //left = i;
                arr[right] = arr[j];
                arr[j] = key;
                break;
            }
        }
        left = j;
        // printf("right = %d left = %d\n", right, left);

        // for(int i = start; i < end; i++){
        //      printf("%d ", arr[i]);
        // }
        // printf("\n\n");
    }

    return left;

}

void QuickSort(int *arr, int start, int end){
    //初始化一个栈[start, end)
    //数组至少要有两个元素
    if(start + 1 >= end){
        return;
    }
    pQuickSortStack head;
    head = (pQuickSortStack)malloc(sizeof(QuickSortStack));
    head->left = start;
    head->right = end;
    head->next = NULL;

    int left,right, index;
    int check_cnt = 1;
    do{
        //出栈[a,b)
        left = head->left;
        right = head->right;
        head = PopQuickSortStack(head);
        //寻找index
        index = SortOneEle(arr, left, right);

        printf("no %d inf: index = %d\n", check_cnt, index);
        for(int i = start; i < end; i++){
            printf("%d ", arr[i]);
        }

        printf("\n\n");
        check_cnt++;


        //将[index + 1, b)入栈
        if(right > index + 2){
            head = PushQuickSortStack(head, index + 1, right);
        }

        //将[a,index)入栈
        if(index > left + 1){
            head = PushQuickSortStack(head, left, index);
        }

    }while(head != NULL);
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

void TestQuickSort(){
    int a[100] = {0};
    int cnt = 0;

    printf("input: ");
    while(scanf("%d", &a[cnt])){
        cnt++;
    }

    printf("cnt = %d\n", cnt);

    QuickSort(a, 0, cnt);
    printf("output: ");
    for(int i = 0; i < cnt; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    int flag = 1;
    for(int i = 0; i < cnt - 1; i++){
        if(a[i] > a[i+1]){
            flag = 0;
            break;
        }
    }
    printf("flag = %d\n", flag);
}


int main(){
    //printf("test\n");
    //TestSortOneEle();
    TestQuickSort();

    printf("b branch");

    printf("test merger");
    printf("git push");

    return 0;
}
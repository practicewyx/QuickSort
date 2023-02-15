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

    //int key = arr[start];
    int left = start, right = end;

    //对数组arr[left, right)排序，由于数组元素大于1时才需要排序，故right > left + 1
    int key, i;
    while(right > left + 1){
        key = arr[left];//需要移动key，使得key的左边小，右边大

        // 从后往前遍利，找第一个比key小的位置
        for(i = right - 1; i > left; i--){
            if(arr[i] < key){
                //若key > arr[i]，交换两个元素，break，i为交换的指标
                arr[left] = arr[i];
                arr[i] = key;
                break;
            }
        }
        right = i;//考虑边界条件，right = left,即，arr[j] >= arr[left]，考虑接下来的循环代码，其实是不执行的
        //从而返回指标left

        //从前往后遍历，找第一个比key大的位置，注意，此时经过上个循环后，只需要比较arr[left+1, right-1]与key的值，right为更新后的值
        //考虑边界条件right = left时，即，不需要比较，left值不需要变化，可以从arr[left]比较
        for(i = left; i < right; i++){
            if(arr[i] > key){
                arr[right] = arr[i];
                arr[i] = key;
                break;
            }
        }
        left = i;


    }

    //更新right, left为次完整循环，循环完成后，原来的Key值(即最开始的arr[left])放在了更行后的left处
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
    //int check_cnt = 1;
    do{
        //出栈[a,b)
        left = head->left;
        right = head->right;
        head = PopQuickSortStack(head);
        //寻找index
        index = SortOneEle(arr, left, right);

        // printf("no %d inf: index = %d\n", check_cnt, index);
        // for(int i = start; i < end; i++){
        //     printf("%d ", arr[i]);
        // }

        //printf("\n\n");
        //check_cnt++;


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

    return 0;
}
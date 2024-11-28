#include <stdio.h>

// 打印数组的函数
void printArray(int arr[], int size) {
    printf("数组内容: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 冒泡排序函数
void bubbleSort(int arr[], int size) {
    printf("\n开始冒泡排序...\n");
    
    // 外层循环控制排序轮数
    for (int i = 0; i < size - 1; i++) {
        printf("\n第 %d 轮排序:\n", i + 1);
        int swapped = 0;  // 用于优化：如果这一轮没有交换，说明已经排序完成
        
        // 内层循环进行相邻元素比较和交换
        for (int j = 0; j < size - 1 - i; j++) {
            printf("  比较 %d 和 %d: ", arr[j], arr[j + 1]);    
            
            if (arr[j] > arr[j + 1]) {
                // 交换元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
                printf("需要交换\n");
            } else {
                printf("不需要交换\n");
            }
            
            printf("  当前数组: ");
            printArray(arr, size);
        }
        
        if (swapped == 0) {
            printf("\n数组已经有序，提前结束排序\n");
            break;
        }
    }
}

int main() {
    // 示例数组
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("原始");
    printArray(arr, size);
    
    // 执行冒泡排序
    bubbleSort(arr, size);
    
    printf("\n最终排序结果: ");
    printArray(arr, size);
    
    return 0;
}
int main(){
    int x = 0;
    //读取给定的数组的大小保存在size中
    int sizebackup=size;
    while(sizebackup>0){
        for(int i=0;<size;i++){
            if(numer[x]>number[x+1]){
                int swap = number[x];
                number[x+1]= swap;
                number[x]=number[x+1];
                x++;
                sizebackup--;
                
            }
        }
        
    }
    
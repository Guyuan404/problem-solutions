#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    // 外层循环控制排序轮数
    for (i = 0; i < n - 1; i++) {
        // 内层循环进行相邻元素比较和交换
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换元素
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    int numbers[200];  // 根据题目要求，最大200个整数
    
    // 读取整数个数
    scanf("%d", &n);
    
    // 检查输入范围是否有效
    if (n <= 0 || n > 200) {
        return 1;
    }
    
    // 读取n个整数
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    // 使用冒泡排序
    bubbleSort(numbers, n);
    
    // 输出排序后的结果
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}

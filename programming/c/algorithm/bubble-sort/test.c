#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    // 验证输入范围
    if (size <= 0 || size > 200) {
        return 0;  // 按题目要求，输入不合法时直接返回
    }
    
    int number[size];
    
    // 读取数组元素
    for(int i = 0; i < size; i++) {
        scanf("%d", &number[i]);
    }
    
    // 冒泡排序
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - 1 - i; j++) {
            if(number[j] > number[j+1]) {
                int temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
        }
    }
    
    // 输出结果
    for(int i = 0; i < size; i++) {
        printf("%d ", number[i]);  // 每个数字后输出一个空格
    }
    printf("\n");  // 最后输出换行
    
    return 0;
}
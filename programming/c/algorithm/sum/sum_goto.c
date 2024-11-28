#include <stdio.h>

int main() {
    int sum = 0;    // 保存累加的和
    int i = 1;      // 计数器，从1开始
    
start:              // 定义标签
    if (i <= 100) { // 如果i小于等于100，继续累加
        sum += i;   // 累加当前数
        i++;        // i增加1
        goto start; // 跳转回start标签继续循环
    }
    
    printf("%d\n", sum);  // 输出最终结果
    return 0;
}

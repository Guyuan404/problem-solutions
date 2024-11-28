#include <stdio.h>

int main() {
    int n;
    // 声明一个足够大的数组来存储斐波那契数列
    long long fib[41];  // 使用 long long 类型来处理大数
    
    // 读取输入
    scanf("%d", &n);
    
    // 确保输入在有效范围内
    if (n <= 2 || n > 40) {
        return 1;
    }
    
    // 初始化斐波那契数列的前两个数
    fib[0] = 1;
    fib[1] = 1;
    
    // 计算斐波那契数列
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    // 按格式输出结果
    for (int i = 0; i < n; i++) {
        printf("%12lld", fib[i]);
        // 每5个数换行，或者是最后一个数
        if ((i + 1) % 5 == 0 || i == n - 1) {
            printf("\n");
        }
    }
    
    return 0;
}

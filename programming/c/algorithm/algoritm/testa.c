#include <stdio.h>

int main() {
    int matrix[3][4];
    int i, j;
    int max = 0;
    int row = 0, col = 0;
    
    // 输入矩阵元素
    printf("请输入3*4矩阵的元素：\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
            
            // 更新最大值及其位置
            if(i == 0 && j == 0 || matrix[i][j] > max) {
                max = matrix[i][j];
                row = i;
                col = j;
            }
        }
    }
    
    // 打印矩阵
    printf("\n输入的矩阵是：\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    // 打印结果
    printf("\n最大值是：%d\n", max);
    printf("位置是：第%d行，第%d列\n", row + 1, col + 1);
    
    return 0;
}
#include <stdio.h>

int main() {
    char a[3] = {'A', 'B', 'C'};  // 甲队队员
    char b[3] = {'X', 'Y', 'Z'};  // 乙队队员
    int i, j, k;
    int used1[3] = {0};  // 记录甲队队员是否已配对
    int used2[3] = {0};  // 记录乙队队员是否已配对
    
    // 尝试第一个人的配对
    for(i = 0; i < 3; i++) {
        // 检查第一个人的限制条件
        if(a[i] == 'A' && b[0] == 'X') continue;  // A不能和X配对
        if(a[i] == 'C' && (b[0] == 'X' || b[0] == 'Z')) continue;  // C不能和X、Z配对
        
        // 尝试第二个人的配对
        for(j = 0; j < 3; j++) {
            if(j == i) continue;  // 同一个人不能重复配对
            
            // 检查第二个人的限制条件
            if(a[j] == 'A' && b[1] == 'X') continue;
            if(a[j] == 'C' && (b[1] == 'X' || b[1] == 'Z')) continue;
            
            // 尝试第三个人的配对
            for(k = 0; k < 3; k++) {
                if(k == i || k == j) continue;
                
                // 检查第三个人的限制条件
                if(a[k] == 'A' && b[2] == 'X') continue;
                if(a[k] == 'C' && (b[2] == 'X' || b[2] == 'Z')) continue;
                
                // 找到一组有效的配对
                printf("%c %c\n", a[i], b[0]);
                printf("%c %c\n", a[j], b[1]);
                printf("%c %c\n", a[k], b[2]);
                return 0;
            }
        }
    }
    
    return 0;
}

# 乒乓球比赛配对问题

## 问题描述
两个乒乓球队进行比赛，各出3人。
- 甲队：A、B、C
- 乙队：X、Y、Z

已知条件：
1. A不和X比赛
2. C不和X、Z比赛

要求输出三场比赛的对阵名单。

## 解决思路
1. 这是一个排列组合问题，可以使用穷举法解决
2. 根据限制条件，我们可以：
   - 排除A-X的配对
   - 排除C-X和C-Z的配对
3. 使用三重循环来尝试所有可能的配对
4. 检查每种配对是否满足所有条件

## 解决方案
```c
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
```

### 代码说明
1. 使用两个字符数组分别存储甲队和乙队的队员
2. 使用三重循环尝试所有可能的配对组合
3. 在每一层循环中都检查限制条件：
   - A不能和X配对
   - C不能和X、Z配对
   - 同一个人不能重复配对
4. 找到第一个满足所有条件的配对方案后输出并结束程序

## 测试用例
```
输入：
无

输出：
A Z
B X
C Y
```

## 算法分析
1. 时间复杂度：O(n³)，其中n是每队的人数（这里n=3）
2. 空间复杂度：O(n)，用于存储队员名单

## 注意事项
1. 输出格式要求每行两个字母，中间用空格隔开
2. 每行末尾需要换行
3. 只需要输出一种可行的方案即可
4. 确保考虑到所有的限制条件

## 知识点总结
1. 穷举法（暴力枚举）
2. 多重循环的使用
3. 条件判断与约束处理
4. 字符数组的使用
5. 排列组合基础
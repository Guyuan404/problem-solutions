#include <stdio.h>

struct student {
    int num;
    char name[20];
    char sex;
    int age;
};

int main() {
    struct student stu[20];  // 结构体数组
    struct student *p = stu;  // 指向结构体数组的指针
    int n, i;
    
    // 输入学生数量
    scanf("%d", &n);
    
    // 使用指针输入学生信息
    for(i = 0; i < n; i++) {
        scanf("%d %s %c %d", &(p+i)->num, (p+i)->name, &(p+i)->sex, &(p+i)->age);
    }
    
    // 使用指针输出学生信息
    for(i = 0; i < n; i++) {
        printf("%d %s %c %d\n", (p+i)->num, (p+i)->name, (p+i)->sex, (p+i)->age);
    }
    
    return 0;
}

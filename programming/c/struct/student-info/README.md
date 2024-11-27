# 结构体指针处理学生信息

## 问题描述
定义一个结构体 student，存储学生的学号、名字、性别和年龄。要求使用指向结构体数组的指针来实现数据的输入和输出。

### 结构体定义
```c
struct student {
    int num;
    char name[20];
    char sex;
    int age;
};
```

### 输入格式
- 第一行：整数 n（n ≤ 20），表示学生数量
- 接下来 n 行：每行包含一个学生的信息（学号 名字 性别 年龄），用空格隔开
- 性别用 M（男）和 F（女）表示
- 名字不包含空格且长度不超过15

### 输出格式
- n 行，每行输出一个学生的信息（学号 名字 性别 年龄），用空格隔开
- 每行末尾需要换行

## 解决思路
1. 使用结构体数组存储学生信息
2. 定义指向结构体数组的指针来操作数据
3. 使用指针进行数组遍历，完成输入和输出
4. 注意字符串的输入和输出格式

## 代码实现
代码实现见 [student.c](./student.c)

## 测试用例
```
输入：
3
10101 LiLin M 18
10102 ZhangFun M 19
10104 WangMin F 20

输出：
10101 LiLin M 18
10102 ZhangFun M 19
10104 WangMin F 20
```

## 注意事项
1. 指针访问结构体成员使用 -> 运算符
2. 字符串输入不需要 & 符号
3. 确保输入的学生数量不超过数组大小（20）
4. 输出格式要严格按照要求，包括空格和换行

## 知识点总结
1. 结构体定义和使用
2. 结构体数组
3. 结构体指针
4. 指针的算术运算
5. 结构体成员访问方式（. 和 ->）
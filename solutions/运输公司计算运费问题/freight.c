#include <stdio.h>

/**
 * 根据距离计算折扣率
 * @param s 运输距离
 * @return 折扣率
 */
double calculateDiscount(int s) {
    if (s >= 3000) return 0.15;
    if (s >= 2000) return 0.10;
    if (s >= 1000) return 0.08;
    if (s >= 500) return 0.05;
    if (s >= 250) return 0.02;
    return 0.0;
}

int main() {
    double p, w;  // p: 每吨每千米基本运费, w: 货物重量
    int s;        // s: 运输距离
    
    // 输入基本运费、重量和距离
    scanf("%lf %lf %d", &p, &w, &s);
    
    // 计算折扣率
    double d = calculateDiscount(s);
    
    // 计算总运费: f = p × w × s × (1-d)
    double f = p * w * s * (1 - d);
    
    // 输出结果，保留4位小数
    printf("%.4f\n", f);
    
    return 0;
}

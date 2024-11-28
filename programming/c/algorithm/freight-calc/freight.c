#include <stdio.h>

/**
 * 根据距离计算折扣率
 * @param s 运输距离（千米）
 * @return 折扣率（0.0 ~ 0.15）
 * 
 * 折扣规则：
 * s < 250:         0%
 * 250 ≤ s < 500:   2%
 * 500 ≤ s < 1000:  5%
 * 1000 ≤ s < 2000: 8%
 * 2000 ≤ s < 3000: 10%
 * 3000 ≤ s:        15%
 */
double calculateDiscount(int s) {
    // 从大到小判断，减少判断次数
    if (s >= 3000) return 0.15;      // 3000km及以上
    if (s >= 2000) return 0.10;      // 2000-2999km
    if (s >= 1000) return 0.08;      // 1000-1999km
    if (s >= 500)  return 0.05;      // 500-999km
    if (s >= 250)  return 0.02;      // 250-499km
    return 0.0;                      // 0-249km
}

/**
 * 计算总运费
 * @param p 每吨每千米基本运费
 * @param w 货物重量（吨）
 * @param s 运输距离（千米）
 * @return 总运费
 */
double calculateFreight(double p, double w, int s) {
    double d = calculateDiscount(s);
    return p * w * s * (1.0 - d);
}

int main() {
    double p, w;  // p: 每吨每千米基本运费, w: 货物重量
    int s;        // s: 运输距离
    
    // 输入基本运费、重量和距离
    scanf("%lf %lf %d", &p, &w, &s);
    
    // 计算并输出总运费，保留4位小数
    printf("%.4f\n", calculateFreight(p, w, s));
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main() {
    int total = 1; // 第10天的剩余桃子数量
    int day;
    for (day = 9; day >= 1; day--) {
        total = (total + 1) * 2; // 前一天剩余桃子数量
    }
    printf("%d\n", total);
    return 0;
}


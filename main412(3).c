#include <stdio.h>
#include <stdlib.h>
int main() {
    int total = 1; // ��10���ʣ����������
    int day;
    for (day = 9; day >= 1; day--) {
        total = (total + 1) * 2; // ǰһ��ʣ����������
    }
    printf("%d\n", total);
    return 0;
}


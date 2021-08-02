// Q_13
// 打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字
// 立方和等于该数 本身。例如：153是一个"水仙花数"，因为153=1的三次
// 方＋5的三次方＋3的三次方

#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    int j;
    int sum = 0; // i的个位、十位、百位的立方和
    int temp;

    for (i=100; i<1000; i++) {
        temp = i;
        sum = 0;
        for (j=0; j<3; j++) {
            sum += pow(temp%10, 3);
            temp /= 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}
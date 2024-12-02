
#include <stdio.h>
#include <string.h>

void sub(char s1[], char s2[], char s3[], int len1, int len2) {
    int i;
    int borrow = 0; // 进位标志
    for (i = 0; i < len1; i++) {
        // 从后往前处理字符
        int n1 = s1[len1 - 1 - i] - '0'; // s1的当前数字
        int n2 = (i < len2) ? (s2[len2 - 1 - i] - '0') : 0; // s2的当前数字

        if (borrow) {
            n1--; // 如果上一步有借位，需要减1
            borrow = 0; // 重置借位
        }

        if (n1 < n2) {
            n1 += 10; // 借位处理
            borrow = 1; // 设定借位
        }
        
        s3[len1 - 1 - i] = (n1 - n2) + '0'; // 计算结果并转换回字符
    }
}

int main() {
    char s1[100] = {0};
    char s2[100] = {0};
    char s3[100] = {0};

    // 输入两个数字字符串
    scanf("%s %s", s1, s2);
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // 确保s1大于等于s2以保证合法减法
    if (len1 < len2 || (len1 == len2 && strcmp(s1, s2) < 0)) {
        printf("Error: s1 should be greater than or equal to s2.\n");
        return 1; // 结束程序，返回错误
    }

    sub(s1, s2, s3, len1, len2);

    // 去掉前导零
    int start = 0;
    while (start < len1 && s3[start] == '0') {
        start++;
    }

    // 如果结果为0则输出0
    if (start == len1) {
        printf("0\n");
    } else {
        printf("%s\n", s3 + start); // 输出结果
    }

    return 0;
}

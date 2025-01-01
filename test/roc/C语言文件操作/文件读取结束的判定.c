// 被错误使用的feof
// 牢记：在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束。
// 而是应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束。
// 1. 文本文件读取是否结束，判断返回值是否为
// EOF （fgetc ），或者NULL （fgets ）
// 例如：
// fgetc 判断是否为EOF .
// fgets 判断返回值是否为NULL .
// 2. 二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。
// 例如：
// fread判断返回值是否小于实际要读的个数。


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[101];
    fgets(input, sizeof(input), stdin); // 读取输入字符串

    // 去掉换行符
    input[strcspn(input, "\n")] = '\0';

    // 分割表达式和结果
    char *expression = strtok(input, "=");
    char *resultStr = strtok(NULL, "=");

    if (expression == NULL || resultStr == NULL) {
        printf("Invalid input format\n");
        return 1;
    }

    // 将结果部分转换为整数
    float expectedResult = atoi(resultStr);

    // 计算表达式的值
    float result = 0;
    float num = 0;
    char op = '+';
    for (int i = 0; expression[i] != '\0'; i++) {
        if (isdigit(expression[i])) {
            num = num * 10 + (expression[i] - '0'); // 处理多位数
        } else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            // 根据上一个运算符计算结果
            if (op == '+') result += num;
            else if (op == '-') result -= num;
            else if (op == '*') result *= num;
            else if (op == '/') result /= num;

            // 更新运算符和重置数字
            op = expression[i];
            num = 0;
        }
    }

    // 处理最后一个数字
    if (op == '+') result += num;
    else if (op == '-') result -= num;
    else if (op == '*') result *= num;
    else if (op == '/') result /= num;

    // 验证结果
    if (result == expectedResult) {
        printf("Correct\n");
    } else {
        printf("Wrong\n");
        printf("%.0f\n", result);
    }

    return 0;
}
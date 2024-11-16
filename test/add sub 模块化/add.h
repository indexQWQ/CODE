#ifndef ADD_H// 防止重复包含
#define ADD_H// 防止重复包含

#ifdef __cplusplus// 防止 C++ 编译器报错
extern "C" {
#endif// 防止 C++ 编译器报错


int add(int a, int b) 
{
    return a + b; // 返回 a 和 b 的和
}

#ifdef __cplusplus// 防止 C++ 编译器报错
}
#endif// 防止 C++ 编译器报错

#endif// 防止重复包含




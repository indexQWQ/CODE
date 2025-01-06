#include <stdio.h>

// 3.1 预定义符号
// __FILE__    //进行编译的源文件
// __LINE__    //文件当前的行号
// __DATE__    //文件被编译的日期
// __TIME__    //文件被编译的时间
// __STDC__    //如果编译器遵循ANSI C，其值为1，否则未定义

// #include <stdio.h>
// int main()
// {
//     int i=0;
//     for(i=0;i<10;i++)
//     {
//         printf("file:%s i=%d\n",__FILE__,i);
//     }
//     return 0;
// }


// 3.2 #define 
// 3.2.1 #define 定义标识符
// 语法：
// #define name  stuff
// 举个栗子：
// #define MAX 1000           //为 register这个关键字，创建一个简短的名字
//  #define reg register      //用更形象的符号来替换一种实现    
// #define do_forever for(;;) //在写case语句的时候自动把 break写上。
// #define CASE break;case    // 如果定义的 stuff过长，可以分成几行写，除了最后一行外，每行的后面都加一个反斜杠(续行符)。
// #define DEBUG_PRINT printf("file:%s\tline:%d\t \       //
//  date:%s\ttime:%s\n" ,\      //
//  __FILE__,__LINE__ ,   \    //这里的\是续行符
//  __DATE__,__TIME__ )  


// 3.2.2 #define 定义宏 
// #define 机制包括了一个规定，允许把参数替换到文本中，这种实现通常称为宏（macro）或定义
// 宏（define macro）。
// 下面是宏的申明方式：
// #define name( parament-list ) stuff
// 其中的parament-list 是一个由逗号隔开的符号表，它们可能出现在stuff中。
// #define SQUARE(x) ((x)*(x))

// int main()
// {
//     int r=SQUARE(5+1);
//     printf("%d\n",r);
//     return 0;
// }


// 3.2.3 #define 替换规则 
// 在程序中扩展#define定义符号和宏时，需要涉及几个步骤。
// 1. 在调用宏时，首先对参数进行检查，看看是否包含任何由#define定义的符号。如果是，它们首先被替换。
// 2. 替换文本随后被插入到程序中原来文本的位置。对于宏，参数名被他们的值替换。
// 3. 最后，再次对结果文件进行扫描，看看它是否包含任何由#define定义的符号。如果是，就重复上
// 述处理过程。
// 注意：
// 1. 宏参数和#define 定义中可以出现其他#define定义的变量。但是对于宏，不能出现递归。
// 2. 当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索。


// 3.2.4 #和##
// 如何把参数插入到字符串中？
// 使用#，把一个宏参数变成对应的字符串。
// #define PEINTF(n) printf("the value of "#n" is %d\n",n)
// int main()
// {
//     // printf("hello world\n");
//     // printf("hello ""world\n");
//     int a=0;
//     printf("the value of a is %d\n",a);
//     int b=10;
//     PEINTF(b);
//     return 0;
// }
// #define PEINTF(n,FORMAT) printf("the value of "#n" is "FORMAT"\n",n)
// int main()
// {
//     // printf("hello world\n");
//     // printf("hello ""world\n");
//     int a=0;
//     printf("the value of a is %d\n",a);
//     int b=10;
//     PEINTF(b,"%f");
//     return 0;
// }

//  ## 的作用
// ##可以把位于它两边的符号合成一个符号。
// 它允许宏定义从分离的文本片段创建标识符。
// #define CAT(class,NUM) class##NUM
// int main()
// {
//     int value2222=999;
//     printf("%d\n",CAT(value,2222));
//     return 0;
// }


// 3.2.5 带副作用的宏参数
// 当宏参数在宏的定义中出现超过一次的时候，如果参数带有副作用，那么你在使用这个宏的时候就可能
// 出现危险，导致不可预测的后果。副作用就是表达式求值的时候出现的永久性效果。
// #define MAX(a, b)  ( (a) > (b) ? (a) : (b) )
// int main()
// {
//     int x = 5;
//     int y = 4;
//     int z = MAX(x++, y++);
//     printf("x=%d y=%d z=%d\n", x, y, z);//输出的结果是什么？
//     return 0;
// }


// 3.2.6 宏和函数对比
// 宏通常被应用于执行简单的运算。比如在两个数中找出较大的一个。
// #define MAX(a, b) ((a)>(b)?(a):(b))
// 那为什么不用函数来完成这个任务？
// 原因有二：
// 1. 用于调用函数和从函数返回的代码可能比实际执行这个小型计算工作所需要的时间更多。所以宏比
// 函数在程序的规模和速度方面更胜一筹。
// 2. 更为重要的是函数的参数必须声明为特定的类型。所以函数只能在类型合适的表达式上使用。反之
// 这个宏怎可以适用于整形、长整型、浮点型等可以用于>来比较的类型。宏是类型无关的

// 当然和宏相比函数也有劣势的地方：
// 1. 每次使用宏的时候，一份宏定义的代码将插入到程序中。除非宏比较短，否则可能大幅度增加程序的长度。
// 2. 宏是没法调试的。
// 3. 宏由于类型无关，也就不够严谨。
// 4. 宏可能会带来运算符优先级的问题，导致程容易出现错。

// 宏有时候可以做函数做不到的事情。比如：宏的参数可以出现类型，但是函数做不到。
// #define MALLOC(NUM,TYPE) (TYPE *)malloc((NUM)*sizeof(TYPE))

// 宏和函数的一个对比
// 属性                 #define定义宏函数                               函数
// 代码长度    每次使用时，宏代码都会被插入到程序中。除了非常       函数代码只出现于一个地方；每
//             小的宏之外，程序的长度会大幅度增长                 次使用这个函数时，都调用那个
//                                                             地方的同一份代码

// 执行速度    更快                                             存在函数的调用和返回的额外开
//                                                             销，所以相对慢一些

// 操作符      宏参数的求值是在所有周围表达式的上下文环境里，       函数参数只在函数调用的时候求
// 优先级      除非加上括号，否则邻近操作符的优先级可能会产生       值一次，它的结果值传递给函
//             不可预料的后果，所以建议宏在书写的时候多些括。       数。表达式的求值结果更容易预测。

// 带有副作    参数可能被替换到宏体中的多个位置，所以带有副作        函数参数只在传参的时候求值一
// 用的参数    用的参数求值可能会产生不可预料的结果。               次，结果更容易控制。


// 参数类型    宏的参数与类型无关，只要对参数的操作是合法的，      函数的参数是与类型有关的，如
//             它就可以使用于任何参数类型。                      果参数的类型不同，就需要不同
//                                                            的函数，即使他们执行的任务是
//                                                             不同的。

// 调递       试宏是不方便调试的函数是可以逐语句调试的归              宏是不能递归的函数是可以递归的

// 命名约定 
// 一般来讲函数的宏的使用语法很相似。所以语言本身没法帮我们区分二者。
// 那我们平时的一个习惯是：
// 把宏名全部大写
// 函数名不要全部大写

// 3.3 #undef
// 这条指令用于移除一个宏定义。
// #undef NAME
//  //如果现存的一个名字需要被重新定义，那么它的旧名字首先要被移除。


// 3.4 命令行定义 
// 许多C 的编译器提供了一种能力，允许在命令行中定义符号。用于启动编译过程。
// 例如：当我们根据同一个源文件要编译出不同的一个程序的不同版本的时候，这个特性有点用处。（假
// 定某个程序中声明了一个某个长度的数组，如果机器内存有限，我们需要一个很小的数组，但是另外一
// 个机器内存大写，我们需要一个数组能够大写。）
// #include <stdio.h>
// int main()
// {
//     int array [ARRAY_SIZE];
//     int i = 0;
//     for(i = 0; i< ARRAY_SIZE; i ++)
//     {
//         array[i] = i;
//     }
//     for(i = 0; i< ARRAY_SIZE; i ++)
//     {
//         printf("%d " ,array[i]);
//     }
//     printf("\n" );
//     return 0;
// }
// 编译指令：
// gcc -D ARRAY_SIZE=10 programe.c


//  3.5 条件编译 
// 在编译一个程序的时候我们如果要将一条语句（一组语句）编译或者放弃是很方便的。因为我们有条件
// 编译指令。
// #include <stdio.h>
// //#define __DEBUG__
// int main()
// {
//     int i = 0;
//     int arr[10] = {0};
//     for(i=0; i<10; i++)
//     {
//         arr[i] = i;
//         #ifdef __DEBUG__
//         printf("%d\n", arr[i]);//为了观察数组是否赋值成功。      
//         #endif //__DEBUG__
//     }
//     #if 1
//     printf("hello\n");
//     #endif
//     #if 0
//     printf("hello\n");
//     #endif
//     return 0;
// }

// 1.
//  #if  
// 常量表达式
// //...
//  #endif
//  //常量表达式由预处理器求值。
// 如：
// #define __DEBUG__ 1
//  #if __DEBUG__
//  //..
//  #endif

//  2.多个分支的条件编译
// #if 常量表达式
// //...
//  #elif 常量表达式
// //...
//  #else
//  //...
//  #endif

//  3.判断是否被定义
// #if defined(symbol)
//  #ifdef symbol
//  #if !defined(symbol)
//  #ifndef symbol

//  4.嵌套指令
//  #if defined(OS_UNIX)
//      #ifdef OPTION1
//          unix_version_option1();
//      #endif
//      #ifdef OPTION2
//          unix_version_option2();
//      #endif
//  #elif defined(OS_MSDOS)
//      #ifdef OPTION2
//          msdos_version_option2();
//      #endif
//  #endif


// 3.6 文件包含 
// 3.6.1 头文件被包含的方式：
// 本地文件包含
// #include "filename"
// 查找策略：先在源文件所在目录下查找，如果该头文件未找到，编译器就像查找库函数头文件一样在标
// 准位置查找头文件。
// 如果找不到就提示编译错误。
// Linux环境的标准头文件的路径：
// /usr/include
// VS环境的标准头文件的路径：
// C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include
// 库文件包含
// #include <filename.h>
// 查找头文件直接去标准路径下去查找，如果找不到就提示编译错误。
// 这样是不是可以说，对于库文件也可以使用“”的形式包含？
// 答案是肯定的，可以。
// 但是这样做查找的效率就低些，当然这样也不容易区分是库文件还是本地文件了。

// 3.6.2 嵌套文件包含
// 我们已经知道，
// #include 指令可以使另外一个文件被编译。就像它实际出现于
// 一样。
// 这种替换的方式很简单：
// 预处理器先删除这条指令，并用包含文件的内容替换。
// 这样一个源文件被包含10次，那就实际被编译10次。

// 如何解决这个问题？
// 答案：条件编译。
// 每个头文件的开头写：
// #ifndef __TEST_H__
//  #define __TEST_H__
//  //头文件的内容
// #endif   
// //__TEST_H__
// 或者：
// #pragma once


// 1. 头文件中的 ifndef/define/endif是干什么用的?
// 2. #include <filename.h> 和 #include "filename.h"有什么区别? 
// #include <filename.h>
// <>查找策略：是直接取库目录下查找
// #include "filename.h"
// ""查找策略：
// 1.先去代码所在的路径下查找
// 2.如果上面找不到，再去库下查找







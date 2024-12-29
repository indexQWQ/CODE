#include <stdio.h>
#include <string.h>
#include <errno.h>
// 字符输入函数  fgetc   所有输入流     int fgetc(FILE *stream)  该函数以无符号 char 强制转换为 int 的形式返回读取的字符，如果到达文件末尾或发生读错误，则返回 EOF
// 字符输出函数  fputc   所有输出流     int fputc(int char, FILE *stream)  如果没有发生错误，则返回被写入的字符。如果发生错误，则返回 EOF，并设置错误标识符。
// 文本行输入函数fgets   所有输入流     char *fgets(char *str, int n, FILE *stream)  如果成功，该函数返回相同的 str 参数。如果到达文件末尾或者没有读取到任何字符，str 的内容保持不变，并返回一个空指针。如果发生错误，返回一个空指针。
// 文本行输出函数fputs   所有输出流     int fputs(const char *str, FILE *stream)   该函数返回一个非负值，如果发生错误则返回 EOF
// 格式化输入函数fscanf  所有输入流     int fscanf(FILE *stream, const char *format, ...)   如果成功，该函数返回成功匹配和赋值的个数。如果到达文件末尾或发生读错误，则返回 EOF。
// 格式化输出函数fprintf 所有输出流     int fprintf(FILE *stream, const char *format, ...)  如果成功，则返回写入的字符总数，否则返回一个负数
// 二进制输入   fread    文件    size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
// ptr -- 这是指向带有最小尺寸 size*nmemb 字节的内存块的指针。
// size -- 这是要读取的每个元素的大小，以字节为单位。
// nmemb -- 这是元素的个数，每个元素的大小为 size 字节。
// stream -- 这是指向 FILE 对象的指针，该 FILE 对象指定了一个输入流。
// 成功读取的元素总数会以 size_t 对象返回，size_t 对象是一个整型数据类型。如果总数与 nmemb 参数不同，则可能发生了一个错误或者到达了文件末尾。

// 二进制输出   fwrite   文件    size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)

// // 写字符
// int main()
// {
//     FILE*pf=fopen("C:\\Users\\Lenovo\\OneDrive\\desktop\\test.txt","w");
//     if(pf==NULL)
//     {
//         printf("%s\n",strerror(errno));
//         return 1;
//     }
//     int i=0;
//     for(i=0;i<26;i++)
//     {
//         fputc(65+i,pf);
//     }
//     pclose(pf);
//     pf=NULL;
//     return 0;
// }

// // 读字符
// int main()
// {
//     FILE*pf=fopen("C:\\Users\\Lenovo\\OneDrive\\desktop\\test.txt","r");
//     if(pf==NULL)
//     {
//         printf("%s\n",strerror(errno));
//         return 1;
//     }
//     int ch=0;
//     while((ch=fgetc(pf))!=EOF)
//     {
//         printf("%c ",ch);
//     }
//     pclose(pf);
//     pf=NULL;
//     return 0;
// }

// // 写一行
// int main()
// {
//     FILE*pf=fopen("C:\\Users\\Lenovo\\OneDrive\\desktop\\test.txt","a");//a是追加
//     if(pf==NULL)
//     {
//         printf("%s\n",strerror(errno));
//         return 1;
//     }
//     // 写一行
//     fputs("hello bit\n",pf);
//     fputs("hello bit\n",pf);
//     pclose(pf);
//     pf=NULL;
//     return 0;
// }

// // 读一行
// int main()
// {
//     FILE*pf=fopen("C:\\Users\\Lenovo\\OneDrive\\desktop\\test.txt","r");//a是追加
//     if(pf==NULL)
//     {
//         printf("%s\n",strerror(errno));
//         perror("fopen");//fopen: +错误信息//void perror(const char *str)
//         return 1;
//     }
//     char arr[10]={0};
//     fgets(arr,5,pf);//5个数里面包括了\0 所以放5的时候最多读4个
//     printf("%s",arr);
//     pclose(pf);
//     pf=NULL;
//     return 0;
// }

// // 写数据
// struct s
// {
//     char ar[10];
//     int age;
//     float score;
// };

// int main()
// {
//     struct s s1={"miHoYo",18,3.1415f};
//     FILE*pf=fopen("C:\\Users\\Lenovo\\OneDrive\\desktop\\test.txt","w");//a是追加
//     if(pf==NULL)
//     {
//         perror("fopen");//fopen: +错误信息//void perror(const char *str)
//         return 1;
//     }
//     printf("%d\n",(int) sizeof(s1));
//     fprintf(pf,"%s\n%d\n%f\n",s1.ar,s1.age,s1.score);
//     pclose(pf);
//     pf=NULL;
//     return 0;
// }


// // 写数据
// struct s
// {
//     char ar[10];
//     int age;
//     float score;
// };
// int main()
// {
//     struct s s1={"miHoYo",18,3.1415f};
//     FILE*pf=fopen("C:\\Users\\Lenovo\\OneDrive\\desktop\\test.txt","r");//a是追加
//     if(pf==NULL)
//     {
//         perror("fopen");//fopen: +错误信息//void perror(const char *str)
//         return 1;
//     }
//     fscanf(pf,"%s%d%f",s1.ar,&s1.age,&s1.score);
//     printf("%s\n%d\n%f\n",s1.ar,s1.age,s1.score);
//     fprintf(stdout,"%s\n%d\n%f\n",s1.ar,s1.age,s1.score);
//     pclose(pf);
//     pf=NULL;
//     return 0;
// }

// 流
// FILE*
// printf
// scanf
// 任何一个c程序，只要运行起来就会默认打开3个流
// FILE* stdin  -标准输入流(键盘)
// FILE* stdout -标准输出流(屏幕)
// FILE* stderr -标准错误流(屏幕)

// // 二进制输出
// struct s
// {
//     char ar[10];
//     int age;
//     float score;
// };
// int main()
// {
//     struct s s1={"miHoYo",18,3.1415f};
//     FILE*pf=fopen("C:\\Users\\Lenovo\\OneDrive\\desktop\\test.txt","wb");//a是追加
//     if(pf==NULL)
//     {
//         perror("fopen");//fopen: +错误信息//void perror(const char *str)
//         return 1;
//     }
//     fwrite(&s1,sizeof(s1),1,pf);
//     pclose(pf);
//     pf=NULL;
//     return 0;
// }

// // 二进制输入
// struct s
// {
//     char ar[10];
//     int age;
//     float score;
// };
// int main()
// {
//     struct s s1={"miHoYo",18,3.1415f},s2;
//     FILE*pf=fopen("C:\\Users\\Lenovo\\OneDrive\\desktop\\test.txt","rb");//a是追加
//     if(pf==NULL)
//     {
//         perror("fopen");//fopen: +错误信息//void perror(const char *str)
//         return 1;
//     }
//     fread(&s2,sizeof(s1),1,pf);
//     fprintf(stdout,"%s %d %f",s2.ar,s2.age,s2.score);
//     pclose(pf);
//     pf=NULL;
//     return 0;
// }


// 对比一组函数： 
// scanf/fscanf/sscanf
// printf/fprintf/sprintf

// scanf是针对标准标准输入的格式化输入语句
// printf是针对标准标准输出的格式化输出语句

// fscanf是针对所以输入流的格式化输入语句
// fprintf是针对所以输出流的格式化输出语句

// sscanf 从一个字符串中转换出格式化的数据
// int sscanf(const char *str, const char *format, ...)
// 把一个格式化的数据转换到字符串中，本质是把一个格式化的数据转换成字符串
// sprintf 是把一个格式化的数据转换成字符串

struct s
{
    /* data */
    char arr[10];
    int age;
    float score;
};

int main()
{
    struct s s1={"miHoYo",18,3.1415f};
    struct s s2={0};
    char buf[100]={0};
    sprintf(buf,"%s %d %f",s1.arr,s1.age,s1.score);
    //输出的是字符串"miHoYo 18 3.141500"
    //printf(buf);    
    // 从字符串buf中获取一个格式化的数据到tmp中
    sscanf(buf,"%s%d%f",s2.arr,&s2.age,&s2.score);
    printf("%s %d %f",s2.arr,s2.age,s2.score);
    return 0;
}
// 开发bs网络服务器时
// 要在网页前端输入个人信息，而前端输入的是字符串
// 要交给后端处理，可能要放到结构体里面
// 或者是又想把它展示出来
// 这在专业的软件开发里叫序列化和反序列化
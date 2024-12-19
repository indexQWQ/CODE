#include <stdio.h>
#include <string.h>
#include <assert.h>
//strlen
// size_t strlen ( const char * str );
// 字符串已经'\0'作为结束标志，strlen函数返回的是在字符串中'\0'前面出现的字符个数（不包含'\0')。
// 参数指向的字符串必须要以'\0' 结束。
// 注意函数的返回值为size_t，是无符号的-->unsigned int
// 学会strlen函数的模拟实现
// int main()
// {
//     char arr[]="asdfhj";
//     int len=strlen(arr);
//     //stlen函数里面应该传含\0的字符串
//     printf("%d\n",len);
// }
// 易错
// int main()
// {
//     const char*str1 = "abcdef";
//     const char*str2 = "bb";
//     if(strlen(str2)-strlen(str1)>0)
//     {
//         printf("str2>str1\n");
//     } 
//     else
//     {
//         printf("srt1>str2\n");
//     }
//     return 0;
//     // 1000 0000 0000 0000 0000 0000 0000 0100
//     // 1111 1111 1111 1111 1111 1111 1111 1011
//     // 1111 1111 1111 1111 1111 1111 1111 1100
// }

//模拟实现
// #include <assert.h>
// unsigned int my_strlen(const char *arr)
// {
//     unsigned int count=0;
//     //assert(arr!=NULL);
//     while(++count&&*(arr+count))
//     {
//         ;
//     }
//     return count;
// }
// int main()
// {
//     char arr[]="asdfhj";
//     int len=my_strlen(arr);
//     //stlen函数里面应该传含\0的字符串
//     printf("%d\n",len);
// }



// strcpy
// char* strcpy(char * destination, const char * source );
// Copies the C string pointed by source into the array pointed by destination, including the 
// terminating null character (and stopping at that point).
// 源字符串必须以'\0' 结束。
// 会将源字符串中的'\0' 拷贝到目标空间。
// 目标空间必须足够大，以确保能存放源字符串。
// 目标空间必须可变。 像这种字符串"miHoYo"是常量字符串不能更改
// 学会模拟实现。
// int main()
// {
//     char name[20]={0};
//     strcpy(name,"miHoYo\0gorgeous");
//     // strcpy会将源字符串中的'\0' 拷贝到目标空间。
//     printf("%s\n",name);
//     return 0;
// }

// //模拟实现
// #include <assert.h>
// char* my_strcpy(char * destination, const char * source )
// {
//     // assert(destination);
//     // assert(source);
//     char* start=destination;
//     while(*(destination++)=*(source++));
//     return start;
// }
// int main()
// {
//     char name[20]={0};
//     my_strcpy(name,"miHoYo\0gorgeous");
//     // strcpy会将源字符串中的'\0' 拷贝到目标空间。
//     printf("%s\n",name);
//     printf("%s\n",my_strcpy(name,"miHoYo\0gorgeous"));
//     return 0;
// }



//strcat
//char * strcat ( char * destination, const char * source );
//字符串追加
// Appends a copy of the source string to the destination string. The terminating null character 
// in destination is overwritten by the first character of source, and a null-character is included 
// at the end of the new string formed by the concatenation of both in destination.
// 源字符串必须以'\0' 结束。
// 目标空间必须有足够的大，能容纳下源字符串的内容。
// 目标空间必须可修改。
// 字符串自己给自己追加，如何？err
// int main()
// {
//     char arr1[]="hello ";
//     //char arr2[]={'m','i','H','o','Y','o'};
//     //strcat(arr1,arr2);//err
//     strcat(arr1,"miHoYo");
//     printf("%s\n",arr1);
//     return 0;
// }

// //模拟实现
// char * strcat ( char * destination, const char * source )
// {
//     //assert(destination && source);
//     char *ret=destination;
//     int len=sizeof(destination);
//     destination+=len;
//     while((*(destination++)=*(source++)));
//     return ret;
// }
// int main()
// {
//     char arr1[]="hello ";
//     //char arr2[]={'m','i','H','o','Y','o'};
//     //strcat(arr1,arr2);//err
//     strcat(arr1,"miHoYo");
//     printf("%s\n",arr1);
//     return 0;
// }




//strcmp
// int strcmp ( const char * str1, const char * str2 );
// This function starts comparing the first character of each string. If they are equal to each 
// other, it continues with the following pairs until the characters differ or until a terminating 
// null-character is reached
// 标准规定：
// 第一个字符串大于第二个字符串，则返回大于0的数字
// 第一个字符串等于第二个字符串，则返回0
// 第一个字符串小于第二个字符串，则返回小于0的数字
// 那么如何判断两个字符串？
// int main()
// {
//     char arr1[20]="miHoYo";
//     char arr2[]="miHoYohello";
//     int ret=strcmp(arr1,arr2);
//     if(ret>0)
//     {
//         printf(">\n");
//     }
//     else if(ret<0)
//     {
//         printf("<\n");
//     }
//     else
//     {
//         printf("==\n");
//     }
//     return 0;
// }

// //模拟实现
// 例1
// int my_strcmp ( const char * str1, const char * str2 )
// {
//     //assert(str1 && str2);
//     while((*(str1++)==*(str2++)))
//     {
//         if(*str1=='\0')
//         {
//             return 0;
//         }
//     }
//     if((*(str1)>*(str2)))
//     {
//         return 1;
//     }
//     else
//     {
//         return -1;
//     }
// }
// 例2
// int my_strcmp ( const char * str1, const char * str2 )
// {
//     //assert(str1 && str2);
//     while((*str1==*str2))
//     {
//         if(*str1=='\0')
//         {
//             return 0;
//         }
//         str1++;
//         str2++;
//     }
//     return (*str1-*str2);
// }
// int main()
// {
//     char arr1[20]="miHoYo";
//     char arr2[]="miHoYofgh";
//     int ret=my_strcmp(arr1,arr2);
//     if(ret>0)
//     {
//         printf(">\n");
//     }
//     else if(ret<0)
//     {
//         printf("<\n");
//     }
//     else
//     {
//         printf("==\n");
//     }
//     return 0;
// }

// strcmp
// strcpy
// strcat
// 长度不受限制的字符串函数













// 长度受限制的字符串函数
// strncpy
// strncat
// strncmp
// 相对安全

// strncpy
// char * strncpy ( char * destination, const char * source, size_t num );
// Copies the first num characters of source to destination. If the end of the source C string 
// (which is signaled by a null-character) is found before num characters have been copied, 
// destination is padded with zeros until a total of num characters have been written to it.
// 拷贝num个字符从源字符串到目标空间。
// 如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0(补'\0')，直到num个
// int main()
// {
//     char arr1[20]="xxxxxxxxxxxxx";
//     char arr2[]="miHoYohello";
//     //printf("%s\n",strcpy(arr1,arr2));
//     strncpy(arr1,arr2,6);
//     printf("%s\n",arr1);
//     return 0;
// }

//模拟实现

// int main()
// {
//     char arr1[20]="xxxxxxxxxxxxx";
//     char arr2[]="miHoYohello";
//     //printf("%s\n",strcpy(arr1,arr2));
//     strncpy(arr1,arr2,6);
//     printf("%s\n",arr1);
//     return 0;
// }



// strncat
// char * strncat ( char * destination, const char * source, size_t num );
// Appends the first num characters of source to destination, plus a terminating null-character.
//  If the length of the C string in source is less than num, only the content up to the terminating 
// null-character is copied.
// int main()
// {
//     char arr1[40]="hello \0xxxxxxxxxxxxxx";// 检查后面是否会追加\0;
//     char arr2[]="miHoYoGangshen";
//     strncat(arr1,arr2,6);//会追加一个\0
//     //如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边不会继续追加0(补'\0')，直到num个
//     printf("%s\n",arr1);
//     return 0;
// }



// strncmp
// int strncmp ( const char * str1, const char * str2, size_t num );
// 比较到出现另个字符不一样或者一个字符串结束或者num个字符全部比较完。
// int main()
// {
//     char arr1[20]="miHoYo";
//     char arr2[]="miHoYohello";
//     int ret=strncmp(arr1,arr2,7);
//     printf("%d\n",ret);
//     if(ret>0)
//     {
//         printf(">\n");
//     }
//     else if(ret<0)
//     {
//         printf("<\n");
//     }
//     else
//     {
//         printf("==\n");
//     }
//     return 0;
// }














// strstr
// char * strstr ( const char *str1, const char * str2);
//  Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of str1
/* strstr example */
// int main ()
// {
//     char arr1[]="miHoYoGangShen is gorgeous";
//     char arr2[]="GangShen";
//     char *p=strstr(arr1,arr2);
//     if(p==NULL)
//     {
//         printf("can't find\n");
//     }
//     else
//     {
//         printf("%s\n",p);
//     }
// } 

// 模拟实现//kmp算法也是用来实现在字符串里面查找字符串的 效率高，难实现
// 例子1
// char * my_strstr ( const char *str1, const char * str2)
// {
//     //assert(str1 && str2);
//     while(*str1)
//     {
//         if(*str1==*str2)
//         {
//             const char *p=str1;
//             int count=0;
//             while(*p==*(str2+count))
//             {
//                 p++;
//                 count++;
//             }
//             if(*(str2+count)=='\0')
//             {
//                 return str1;
//             }
//         }
//         str1++;
//     }
//     return NULL;
// }
// 例子2
// char * my_strstr ( const char *str1, const char * str2)
// {
//     //assert(str1 && str2);
//     const char *s1=str1;
//     const char *s2=str2;
//     const char *p=str1;
//     while(*p)
//     {
//         s1=p;
//         s2=str2;
//         while(*s1!='\0' && *s2!='\0' && *s1==*s2)
//         {
//             s1++;
//             s2++;
//         }
//         if(*s2=='\0')
//         {
//             return (char *)p;
//         }
//         p++;
//     }
//     return NULL;
// }
// int main ()
// {
//     char arr1[]="miHoYoGGangShen is gorgeous";
//     char arr2[]="GangShen";
//     char *p=my_strstr(arr1,arr2);
//     if(p==NULL)
//     {
//         printf("can't find\n");
//     }
//     else
//     {
//         printf("%s\n",p);
//     }
// } 



// strtok
// 切割字符串
// char * strtok ( char * str, const char * sep );
//  sep参数是个字符串，定义了用作分隔符的字符集合
// 第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
// strtok函数找到str中的下一个标记，并将其用\0 结尾，返回一个指向这个标记的指针。#####注意会改变字符串#####
// （注：strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。）
// strtok函数的第一个参数不为NULL ，函数将找到str中第一个标记，strtok函数将保存(static)它在字符串中的位置。
// strtok函数的第一个参数为NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
// 如果字符串中不存在更多的标记，则返回NULL 指针。
// int main()
// {
//     const char*sep="@.";
//     char email[]="3517905471@qq.com";//#####注意会改变字符串#####"3517905471@@qq.com",函数会直接把两个分隔符跳过
//     char cpy[20]={0};
//     strcpy(cpy,email);
//     //strtok(cpy,sep);

//     char *ret=strtok(cpy,sep);
//     printf("%s\n",ret);
//     while(ret)
//     {
//         ret=strtok(NULL,sep);
//         printf("%s\n",ret);
//     }  
//     return 0;
// }



// strerror
// char * strerror ( int errnum );
// 返回错误码，所对应的错误信息。
// #include <errno.h>//必须包含的头文件
// int main()
// {
//     // errno -c语言设置的一个全局的错误码存放变量
//     FILE *pf=fopen("C:\\Users\\Lenovo\\OneDrive\\desktop\\CODE1\\test\\roc\\字符函数和字符串函数\\test.txt","r");//绝对路径
//     if(pf==NULL)
//     {
//         printf("%s\n",strerror(errno));
//         return 1;
//     }
//     else
//     {
//         ;
//     }
//     return 0;
// }











// 字符分类函数：
// 函数         如果他的参数符合下列条件就返回真
// iscntrl     任何控制字符
// isspace     空白字符：空格' '，换页'\f'，换行'\n'，回车'\r'，制表符'\t'或者垂直制表符'\v'
// isdigit     十进制数字 0~9
// isxdigit    十六进制数字，包括所有十进制数字，小写字母a~f，大写字母A~F
// islower     小写字母a~z
// isupper     大写字母A~Z
// isalpha     字母a~z或A~Z
// isalnum     字母或者数字，a~z,A~Z,0~9
// ispunct     标点符号，任何不属于数字或者字母的图形字符（可打印）
// isgraph     任何图形字符
// isprint     任何可打印字符，包括图形字符和空白字符

// 字符转换：
// int tolower ( int c );
// int toupper ( int c );






// memcpy//内存拷贝
// strcpy or strncpy 只能拷贝字符串
// void * memcpy ( void * destination, const void * source, size_t num );
// 函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置。
// 这个函数在遇到'\0' 的时候并不会停下来。
// 如果source和destination有任何的重叠，复制的结果都是未定义的。
// memcpy 负责拷贝两块独立空间中的数据
// 但是在不同的编译器里面memcpy 也可以拷贝源内存块和目标内存块是重叠的情况
// 模拟实现
// void * my_memcpy ( void * destination, const void * source, size_t num )
// {
//     // assert(destination && source);
//     size_t count=0;
//     while(count<num)
//     {
//         *((char *)destination+count)=*((char *)source+count);
//         count++;
//     }
//     return destination;
// }
// void test ()
// {
//     int arr1[]={1,2,3,4,5,6,7,8,9};
//     int arr2[10]={0};
//     int *p=my_memcpy(arr2,arr1,sizeof(int)*5);
//     int i=0;
//     for(;i<10;i++)
//     {
//         printf("%d ",p[i]);
//     }
// }
// void test2()
// {
//     int arr1[]={1,2,3,4,5,6,7,8,9};
//     my_memcpy(arr1+2,arr1,sizeof(int)*5);
//     int i=0;
//     for(;i<10;i++)
//     {
//         printf("%d ",arr1[i]);
//     }
// }
// int main()
// {
//     //test();
//     test2();
//     return 0;
// }



// memmove
// void * memmove ( void * destination, const void * source, size_t num );
// 和memcpy的差别就是memmove函数处理的源内存块和目标内存块是可以重叠的。
// 如果源空间和目标空间出现重叠，就得使用memmove函数处理。
// 模拟实现
// void * my_memmove ( void * destination, const void * source, size_t num )
// {
//     // assert(destination && source);
//     size_t count=0;
//     if(destination-source<0)
//     {
//         while(count<num)
//         {
//             *((char *)destination+count)=*((char *)source+count);
//             count++;
//         }
//     }
//     else
//     {
//         while(count<num)
//         {
//             *((char *)destination+num-1-count)=*((char *)source+num-1-count);
//             count++;
//         }
//     }    
//     return destination;
// }
// void test2()
// {
//     int arr1[]={1,2,3,4,5,6,7,8,9,10};
//     my_memmove(arr1+2,arr1,sizeof(int)*5);
//     int i=0;
//     for(;i<10;i++)
//     {
//         printf("%d ",arr1[i]);
//     }
// }
// int main()
// {
//     test2();
//     return 0;
// }



// memcmp
// int memcmp ( const void * ptr1, const void * ptr2, size_t num );
// 比较从ptr1和ptr2指针开始的num个字节
// int main()
// {
//     int arr1[]={1,2,3,4,5};
//     int arr2[]={1,2,3};
//     int flag=memcmp(arr1,arr2,sizeof(arr2));
//     printf("%d\n",flag);
//     if(flag>0)
//     {
        
//     }
//     return 0;
// }



// memset
// void *memset(void *s, int c, size_t n);
// 可以使用memset初始化数组
// int main()
// {
//     // char arr[]="miHoYo hello";
//     // //memset(arr,'X',6);
//     // //memset(arr+7,'X',5);
//     // printf("%s\n",arr);
//     int arr[10]={0};
//     memset(arr,1,10*sizeof(int));
//     int i=0;
//     for(i=0;i<10;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     // memset修改的是每一个字节
//     return 0;
// }
#include <stdio.h>
#include <stddef.h>

#define OFFSETOF(TYPE,MEMBER) (size_t)(&(((TYPE *)0)->MEMBER))
struct s
{
    char c1;
    int i;
    char c2;
};

int main()
{
    struct s a={0};
    printf("%d\n",(int)OFFSETOF(struct s,c1));
    printf("%d\n",(int)offsetof(struct s,i));
    // printf("%d\n",(int)offsetof(struct s,c2));
    return 0;
}
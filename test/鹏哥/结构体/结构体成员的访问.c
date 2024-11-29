#include <stdio.h>
struct peo
{
    char name[100];
    char tele[12];
    char sex[5];//一个汉字两个字符
    int high;
};
struct st
{
    struct peo p;
    int num;
    float f;
};
void print2(struct peo *p1,struct st *s)
{
    printf("%s %s %s %d\n",p1->name,p1->tele,p1->sex,p1->high);
    printf("%s %s %s %d %d %f\n",s->p.name,s->p.tele,s->p.sex,s->p.high,s->num,s->f);
}
int main()
{
    struct peo p1={"张三","1334567945","男",180};
    struct st s={{"李四","1334567945","女",181},100,3.14f};//浮点数在内存里面不能精确保存
    printf("%s %s %s %d\n",p1.name,p1.tele,p1.sex,p1.high);
    printf("%s %s %s %d %d %f\n",s.p.name,s.p.tele,s.p.sex,s.p.high,s.num,s.f);
    //对象用点.   地址用->
    print2(&p1,&s);
    return 0;
}
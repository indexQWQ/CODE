#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

struct stu
{
	string name;
	string sex;
	string id;
	string broth;
	string sbj;
	int score;
};
struct inform
{
	int count;
	struct stu s[50];
};
void menu()
{
	cout<<"*****************"<<endl;
	cout<<"**1.录入 2.查找**"<<endl;
	cout<<"**3.修改 4.打印**"<<endl;
	cout<<"**5.排序 6.保存**"<<endl;
	cout<<"**7.读取 0.退出**"<<endl;
	cout<<"*****************"<<endl;
}

int find(struct inform *p,string name)
{
	for(int i=0;i<p->count;i++)
	{
		if(p->s[i].name==name)
			return 0;
	}
	return -1;
}
void initbook(struct inform *p)
{
    p->count=0;
    ifstream ifs;
    ifs.open("C:\\Users\\c24b24\\Desktop\\555.txt",ios::in);
    if(!ifs.is_open())
    {
        cout<<"打开失败"<<endl;
        return;
    }
    int index=0;
    string line;
    while(getline(ifs,line))
    {
        istringstream iss(line);
        iss>>p->s[index].name>>p->s[index].sex>>p->s[index].id>>p->s[index].broth>>p->s[index].sbj>>p->s[index].score;
        index++;
    }
    p->count=index;
    ifs.close();
}
void inputbook(struct inform *p)
{
	cout<<"请分别输入姓名、性别、学号、出生日期、专业以及入学总成绩"<<endl;
    cin>>p->s[p->count].name>>p->s[p->count].sex>>p->s[p->count].id>>p->s[p->count].broth>>p->s[p->count].sbj>>p->s[p->count].score;
    p->count++;
}
void findbook(struct inform *p)
{
	string name;
    cout<<"请输入要找的人：";
    cin>>name;
    int index=find(p,name);
    if(index==-1)
    {
        cout<<"查无此人"<<endl;
    }
    else
    {
        cout<<"姓名\t"<<"性别\t"<<"学号\t"<<"出生日\t"<<"专业\t"<<"成绩\t"<<endl;
        cout<<p->s[index].name<<"\t"<<p->s[index].sex<<"\t"<<p->s[index].id<<"\t"<<p->s[index].broth<<"\t"<<p->s[index].sbj<<"\t"<<p->s[index].score<<"\t"<<endl;
    }
}
void modifybook(struct inform *p)
{
	string name;
    cout<<"请输入要改的人：";
    cin>>name;
    int index=find(p,name);
    if(index==-1)
    {
        cout<<"查无此人"<<endl;
    }
    else
    {
        cout<<"请分别输入姓名、性别、学号、出生日期、专业以及入学总成绩"<<endl;
        cin>>p->s[p->count].name>>p->s[p->count].sex>>p->s[p->count].id>>p->s[p->count].broth>>p->s[p->count].sbj>>p->s[p->count].score;
        cout<<"修改成功"<<endl;
    }
}
void showbook(struct inform *p)
{
	cout<<"姓名\t"<<"性别\t"<<"学号\t"<<"出生日\t"<<"专业\t"<<"成绩\t"<<endl;
    for(int index=0;index<p->count;index++)
    {
        cout<<p->s[index].name<<"\t"<<p->s[index].sex<<"\t"<<p->s[index].id<<"\t"<<p->s[index].broth<<"\t"<<p->s[index].sbj<<"\t"<<p->s[index].score<<"\t"<<endl;
    }
}

int sortbyage(const void*p1,const void*p2)
{
    return (((stu *)p1)->score-((stu *)p2)->score);
}
void sortbook(struct inform *p)
{  
    qsort((p->s),p->count,sizeof(stu),sortbyage);     
    printf("排序成功\n");    
}

void keepbook(struct inform *p)
{
    ofstream ofs;

    ofs.open("C:\\Users\\c24b24\\Desktop\\555.txt",ios::out);
    if(!ofs.is_open())
    {
        cout<<"打开失败"<<endl;
        return;
    }
    for(int index=0;index<p->count;index++)
    {
        ofs<<p->s[index].name<<" "<<p->s[index].sex<<" "<<p->s[index].id<<" "<<p->s[index].broth<<" "<<p->s[index].sbj<<" "<<p->s[index].score<<" "<<endl;
    }
    cout<<"保存成功"<<endl;
    ofs.close();
}

int main()
{
	int input=0;
	struct inform book;
	initbook(&book);
	do
	{
		menu();
		cout<<"请输入选择：";
		cin>>input;
		switch(input)
		{
		case 1:
			inputbook(&book);
			break;
		case 2:
			findbook(&book);
			break;
		case 3:
			modifybook(&book);
			break;
		case 4:
			showbook(&book);
			break;
		case 5:
			sortbook(&book);
			break;
		case 6:
			keepbook(&book);
			break;
		case 7:
			initbook(&book);
			break;
		case 0:
			cout<<"退出"<<endl; 
			break;
		default:
			cout<<"输入错误"<<endl;
			break; 
		}
		system("pause");
		system("cls");
	}while(input);
	return 0;
}

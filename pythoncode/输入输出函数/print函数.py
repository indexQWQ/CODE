#print()语法格式：print(value,sep='',end='\n',file=None)
print("hello word")
a=100
b=50
print(a)
print(a+b)
print('index')

#不换行
a1=100
b1=22
print(a1,b1,'index')

#输出ascii对应的字符
print('b')
print(chr(98))
print('[')
print(chr(91))

#中文编码的范围是(u4e00~u9fa5)
#使用print函数输出中文unicode
print(ord('北'))
print(ord('京'))
print(chr(21271))
print(chr(20140))

#使用print函数将内容输出到文件
file=open("C:\\Users\\Lenovo\\OneDrive\\desktop\\test.txt",'w')
print("index",file=file)
file.close()

#多条print函数输出结果一行显示
print("index",end='->')
print("love","you",sep='--',end='\n')

#使用连接符连接两个字符串
print("index"+"beijing")
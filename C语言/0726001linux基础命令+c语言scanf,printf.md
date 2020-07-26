# linux系统常用命令

## 基础的命令

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/0726001.png)

ls         查看目录下的内容

> ls -al 查看所有隐藏文件并且查看其权限
>
> la -al filename 查看特定文件的权限

cd       目录跳转

> ​	cd 后面什么都不加会默认会跳转到家目录
>
> ​	cd  directoryname 跳转到当前目录
>
> ​	cd .. 跳转到上一级目录
>
> ​	cd -   回退到上一步操作

pwd    查看当前工作目录

> pwd  文件名

cp   拷贝命令

> ​	cp  要拷贝的文件    拷贝到何处

clear  清空当前屏幕

mv   移动文件及目录

> mv   要移动的文件和目录    移动到何处
>
> mv   旧文件的名字     新文件的名字  （实现改名）

rm   删除文件及目录

> rm  参数 文件/目录名
>
> rm  * 删除当前目录所有文件
>
> rm -r 目录名 //递归的删除该目录下所有文件
>
> rm -rf 目录名 强制删除

mkdir  创建一个目录

> mkdir  目录的名字

rmdir  删除一个空目录

> rmdir   目录的名字

tree   打印当前目录树 （如果没有则须安装tree; apt-get install tree)

> tree

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/0726005.png)

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/0726006.png)



## 文件内容的修改与查看

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/0726002.png)



## vim 文件编辑器

普通模式   插入模式  命令行模式

进去插入模式  按==i==键

进入命令行模式 按==shift==键 并且输入==:==

​	w 保存

​	q 退出

在普通模式下 按下dd  删除当前行

shift + zz 可以快速保存

按GG会自动定位到最后一行

按gg会自动定位到第一行

 按u会回退上一步操作 撤销操作

复制

> 从想复制的位置开始 按数字1 再按yy  可以复制一行

剪切

> ctrl + v进入可视快 选择要剪切的内容后  按y 回到普通模式 按p

## 文件的查找与定位

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/0726003.png)

find  ./ -name filename  第一个参数是位置 第二个参数是名字

## 用户有关操作

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/0726004.png)

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/0726007.png)

# C语言

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/0726scanf.png)

> **随堂练习一**    利用printf函数求出一个十进制整数的位数。

```c++
#include <iostream>
#include <cstdio>

using namespace std;
int main() {
   int n;
   scanf("%d", &n);
   printf(" : %d位\n", printf("%d",n));
   return 0;
}
```

> 随堂练习二   请写一个程序，读入一个行字符串(可能包含空格)，输出这个
> 字符串中字符的数量。

```c++
#include<iostream>
using namespace std;

int main() {
    char str[1000] = {0};
    int ret = 0;
    while ((ret = scanf("%s[^\n]s", str)) != EOF) {
        printf("ret = %d, : %d\n", ret, printf("%s\n", a) - 1);
    }
   //char a[100];
   //scanf("%[^\n]", a);
   //printf(" This string has %d characters. ", printf("%s\n", a) - 1);
    return 0;
}
```


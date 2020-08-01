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



## 文件的查找与定位

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/0726003.png)

find  ./ -name filename  第一个参数是位置 第二个参数是名字

## 用户有关操作

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/0726004.png)

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/0726007.png)

# 编辑器-vim

## (1)基本终端命令：

创建文件：vim 文件名.后缀名

## (2)模式：

| 快捷键                  | 模式                                                         |
| ----------------------- | ------------------------------------------------------------ |
| 默认                    | 命令模式：一切命令都要从命令模式开始                         |
| i键 a键 o键 I键 A键 O键 | 编辑模式：光标前面插，光标后面插，下一行插，行首插，行尾插，上一行插 |
| Shift + :               | 末行模式                                                     |

## (3)在命令模式下的命令：

yy	复制光标所在的这一行

4yy  复制光标所在的行开始向下所在的4行



p	从光标开始的下一行开会粘贴



dd	删除（剪切）光标所在的行

4dd	删除（剪切）光标所在的行开始向下的4行

D	从当前的光标开始剪切，一直到行末

d0	从当前光标开始剪切一直到行首

x	删除当前光标所在的位置，每次只会删除后一个

X	删除当前光标所在的位置，每次只会删除前一个



h	向左移动

j	向下移动

k	向上移动

l	向右移动



H	当前屏幕的上方

M	当前屏幕的中间

L	当前屏幕的下方



ctrl + f --->向下翻一页代码

ctrl + b --->向上翻一页代码

ctrl + d --->向下翻半页代码

ctrl + u --->向上翻半页代码



20G	快速定位到第20行代码

G	快速回到整个代码的最后一行

gg	快速回到整个代码的第一行



w	向后跳一个单词的长度，即跳到下一个单词的开始处 (dw: 表示删一个单词)

b	向前跳一个单词的长度，即跳到上一个单词的开始处



u	撤销刚刚的操作

crtl + r	反撤销



选中一片代码：

v	按单词选择

V	按行选择



Crtl + {	上移一片代码

Crtl + }	下移一片代码



">>"   (没有引号，因为>>会出现其他效果）向右移动代码

<<	向左移动代码



/	之后输入字符串进行搜索



r	替换光标所在位置的字符

R:替换光标所在位置以及后面的字符



.	重复上一次的命令

## (4)末行模式下的命令：

%s/str1/str2/g:表示将代码中出现的str1替换为str2

1,16s/str1/str2/g:表示将代码中1到16行出现的str1替换为str2



sp 文件名.文件后缀:表示横着分屏

vs 文件名.文件后缀:表示竖着分屏



w:保存

q:退出

q!:强制退出

wq:保存并且退出(也可以在命令模式下按shift + zz)

## vim 文件编辑器常用命令

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



# C语言输入输出

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
#include <stdio.h>

int main() {
    char str[1000] = {0};
    while (scanf("%[^\n]s", str) != EOF) {
        getchar();
        printf(" has %d chars!\n", printf("%s", str));
    }
    return 0;
}
```

# printf家族函数讲解

## sprintf函数

>  int sprintf( char *buffer, const char *format [, argument,...] ); 
>
>  除了前两个参数固定外，可选参数可以是任意个。buffer是字符数组名；format是格式化字符串（像："%3d%6.2f%#x%o",%与#合用时，自动在十六进制数前面加上0x）。只要在printf中可以使用的格式化字符串，在sprintf都可以使用。其中的格式化字符串是此函数的精华。

**eg: 将”test 1 2”写入数组s中** 

```c
#include<stdio.h>
int main(int argc, char *avgv[])
{
    char s[40];
    sprintf(s,"%s%d%c","test",1,'2');
    /*第一个参数就是指向要写入的那个字符串的指针，剩下的就和printf()一样了*/
    printf("%s", s);
    return 0;
}
```

**eg: 若”%s”等输出符在字符串中** 

```c
#include <iostream>
#include <stdio.h>
#include <cstring>

int main(int argc, char *argv[])
{
    char str[] = "hel%co wo%sd! sp%stf test%d";
    char buf[strlen(str)];
    sprintf(buf, str, 'l', "rl", "rin", 1);
    std::cout << "str = "<< buf << "\nlen = " <<  strlen(buf) << std::endl;
    return 0;
}

/*str = hello world! sprintf test1
len = 26*/
```

## fscanf和fprintf函数

> int fscanf ( FILE *fp, char * format, ... );
>
> ​	 **功能**：  从stream流中连续读取能够匹配format格式的字符到参数列表中对应的变量里。 
>
> format参数允许的格式为：“%[*][width][modifiers]type”。[]中的内容根据需要供选，可缺省，%type必须要有，不可省。 
>
> int fprintf ( FILE *fp, char * format, ... );
>
> fprintf() 返回成功写入的字符的个数，失败则返回负数。
>
> fscanf() 返回参数列表中被成功赋值的参数个数。 

```c
#include <stdio.h>
int main() {
　　FILE *in, *out;
　　if ((in = fopen("//AUTOEXEC.BAT", "rt")) == NULL) {
　　	fprintf(stderr, "Cannot open input file./n");
　　	return 1;
　　}
　　if ((out = fopen("//AUTOEXEC.BAK", "wt")) == NULL) {
　　	fprintf(stderr, "Cannot open output file./n");
　　	return 1;
　　}
　　while (!feof(in)) {fputc(fgetc(in), out);}
　　fclose(in);
　　fclose(out);
　　return 0;
}
```

eg:

```c
#include <stdio.h>
#include <process.h>
FILE *stream;
int main() {
　　int i = 10;
　　double fp = 1.5;
　　char s[] = "this is a string";
　　char c = '/n';
　　stream = fopen( "fprintf.out", "w" );
　　fprintf( stream, "%s%c", s, c );
　　fprintf( stream, "%d/n", i );
　　fprintf( stream, "%f/n", fp );
　　fclose( stream );
　　system( "type fprintf.out" );
}
/*
this is a string
10
1.500000
*/
```

## linux系统文件权限一道例题

> linux系统中文件权限为r,w,x；即可读，可写，可执行；现在已知一个文件的权限的总和（最大不超过7），权限总和即r+w+x的值，请输入一个权限总和，并且输入一个字符串；当可读时给字符串左右两边分别追加{}，可写时左右两边分别追加[], 可执行时左右两边分别追加（）。请使用c语言中的sprintf函数实现，不能使用c++。
> **输入样例：**
> 7
> hope
> **输出样例：**
> {[(hope)]}
> **解释：**7的二进制是111
> 也就是说从左往右看  分别是可读  可写  可执行 都为1  说明这三个都有
> 所以结果是{[(hope)]}

```c
#include <stdio.h>
#define swap(a, b) {\
     __typeof(a) __temp = a;\
    a = b; b = __temp;\
}
int main() {
    int n;
    scanf("%d",&n);//stdin
    printf("%d\n", n);//stdout
    char str[100] = {0}, buffer[100] = {0}, *p = str, *q = buffer;
    sprintf(str,"%d.%d.%d.%d",192, 168, 1, 10);
    printf("str = %s\n",str);
    if (n & 1) {
        sprintf(q, "(%s)", p);
        swap(q, p);
    }
    if (n & 2) {
        sprintf(q, "[%s]", p);
        swap(q, p);
    }
    if (n & 4) {
        sprintf(q, "{%s}", p);
        swap(q, p);
    }
    printf("%s\n", p);
    FILE *fout = fopen("./output", "w");
    fprintf(stdout, "stdout = %s\n", p);
    fprintf(stderr, "stderr = %s\n", p);
    return 0;
}
```

# 欧拉计划001

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/1595936481410_A7EDF834-C48E-4d82-902B-D479F15BC3D9.png)

> **题目大意：**
>
> 如果我们列出 10 以下所有 3 或 5 的倍数的自然数，我们得到 3，5 ，6 和 9。这些倍数的总和是 23。
> 求 1000 以下 3 或 5 的所有倍数的总和。

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200730124235.png)

**法一：时间复杂度O(n)**

```c
#include <stdio.h>

int is_val(int n) {
    return n % 3 == 0 || n % 5 == 0;
}

int main() {
    int sum = 0;
    for (int i = 1; i < 1000; i++) {
        if (is_val(i)) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
```

**法二：时间复杂度O(1)**

> 问题可转化为求1000以内以3为公差的等差数列的和+以5为公差的等差数列的和-以3和5的最小公倍数15为公差的等差数列的和。直接采用数学等差数列求和公式:
>
> n  * (a <sub>1</sub> + a <sub>n</sub>) / 2

```c
#include <stdio.h>

int main() {
    int sum3 = (3 + 999) * 333 / 2;
    int sum5 = (5 + 995) * 199 / 2;
    int sum15 = (15 + 999 / 15 * 15) * (999 / 15) / 2;
    //999/15表示1000以内有多少项
    printf("%d\n", sum3 + sum5 - sum15);
    return 0;
}
```

# 欧拉计划006

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200730125555.png)

> 题目大意：
>
> 前十个自然数的平方和是385
> 		前十个自然数之和的平方是3025，
> 		因此，前十个自然数的平方和与之和的平方之差为3025-385=2640。
> 		找出前一百个自然数的平方和与和的平方的差。

**法一：**

```c
#include <stdio.h>

int main() {
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= 100; i++) {
        sum1 += i * i;
        sum2 += i;
    }
    printf("%d\n", sum2 * sum2 - sum1);
    return 0;
}
```

**法二：**

n<sup>3</sup> = 3 $\sum_{i=1}^n{i^2}$ - 3$\sum_{i=1}^n{i}$ + n

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200730142535.png)

```c
#include <stdio.h>
#define n 100

int main() {
    int sum2 = 5050;
    int sum1 = (2 * n * n * n + 3 * n * n + n) / 6;
    printf("%d\n", sum2 * sum2 - sum1);
    return 0;
}

```

# c语言基本运算符

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200730183739.png)



**三次异或交换两个数字的原理**

```c
a ^= b;
b ^= a;
a ^= b;
```

- 异或满足交换律和结合律
- x ^ x == 0
- x ^ 0 == x

<img src="https://pic4.zhimg.com/50/v2-6640855360beda8b89d2b86064344521_hd.jpg?source=1940ef5c" data-rawwidth="307" data-rawheight="114" width="307"/>

```c
#include <stdio.h>

int main() {
    int a, b;
    while (~scanf("%d%d", &a, &b)) {
        int *p = &a;
        (*p)--;
        printf("a = %d, b = %d\n", a, b);
        a ^= b;
        b ^= a;
        a ^= b;
        printf("swap : a = %d, b = %d\n", a, b);
    }
    return 0;
}
```



# C语言数学函数

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200801131549.png)



## pow函数

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200801132159.png)



## sqrt函数

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200801132254.png)



## ceil函数

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200801132335.png)



## floor函数

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200801132404.png)



## abs函数

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200801132437.png)



## fabs函数

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200801132501.png)



## log函数

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200801132528.png)



## log10函数

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200801132547.png)



## acos函数

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200801132626.png)



## 随堂练习1

> 请写一个程序，输入一个数字 X， 输出数字X的立方根

```c
#include <stdio.h> 
#include <math.h>
int main() {
	double X;
	scanf("%lf", &x);
	printf("%lf", pow(x, 1.0 / 3.0));
	return 0;
}
```



## 随堂练习2

> 请写一个程序，读入一个角度值，将角度值转为弧度值。

```c
#include <stdio.h>
#include <math.h>
#define PI acos(-1)
int main() {
	double x;
	scanf("%lf", &x);
	printf("%lf", PI / 180.0 * x);
	return 0;
}
```


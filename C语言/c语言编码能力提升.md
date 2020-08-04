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

# C语言数据类型及其范围

如果是n位二进制数，那么无符号数的表示范围是0~（2^n) - 1；
			     有符号数的表示范围是-2^(n - 1) ~(2^(n - 1)) -1

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/2020-08-04_164147.png)

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



![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200801184923.png)



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

# inttypes头文件讲解

```c
#include <stdio.h>
#include <inttypes.h>

int main() {
    int32_t a = 123;
    int64_t b = 256;
    int8_t c = 123;
    printf("a = %lu, b = %lu\n", sizeof(a), sizeof(b));
    printf("c = %" PRId8 "\n", c);
    printf("sizeof(c) = %" PRIu64 "\n", sizeof(c));
    printf("INT32_MIN = %d\n", INT32_MIN);
    printf("INT32_MAX = %d\n", INT32_MAX);
    printf("INT16_MIN = %d\n", INT16_MIN);
    printf("INT16_MAX = %d\n", INT16_MAX);
    printf("INT8_MIN = %d\n", INT8_MIN);
    printf("INT8_MAX = %d\n", INT8_MAX);
    printf("PRId64 = %s\n", PRId64);
    printf("PRId32 = %s\n", PRId32);
    printf("PRId16 = %s\n", PRId16);
    return 0;
}
```

# 欧拉计划028

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200802110843.png)



**题目大意：**

> 从数字1开始，沿顺时针方向向右移动，形成5乘5的螺旋，如下所示：
>
> 可以验证对角线上的数字之和为101。以相同方式形成的1001 x 1001螺旋中的对角线上的数字的总和是多少？

**法一：**

观察如上矩阵，可以得到如下结论:

- 第n圈的矩阵边长为m = 2*n-1*
- 第n圈的矩阵右上角的值为m<sup>2</sup>
- 根据2点观察，可知:
  			左上角为m<sup>2</sup>-m+1，左下角m<sup>2</sup>-2*m+2
        			右下角为m<sup>2</sup>-3*m+3
- 每一圈上四个角的值相加和为: 4*m<sup>2</sup>-6*m+6

```c
#include <stdio.h>

int main() {
    int sum = 1;
    for (int l = 3; l <= 1001; l += 2) {
        sum += 4 * l * l - 6 * l + 6;
    }
    printf("%d\n", sum);
    return 0;
}
```

**法二：**时间复杂度：O（1）

采用求奇数平方和的方法

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200801184923.png)

```c
#include <stdio.h>

const int n = 1001;

int main() {
    int sum = 1;
    int sum1 = n * (n + 1) * (n + 2) / 6 - 1;
    int sum2 = (n / 2) * (3 + 1001) / 2;
    int sum3 = (n / 2) * 6;
    sum += 4 * sum1 - 6 * sum2 + sum3;
    printf("%d\n", sum);
    return 0;
}
```



# 欧拉计划030

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200802114321.png)

> 1、枚举每个数字N，判断N的每一位的5次方之和是否等于其本身
>
> 2、求枚举的上界

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200802114337.png)

> 一个7位数的每一位的5次方和，不可能为一个7位数，最多是一个6位数的每一位5次方和等于一个6位数。故上界定到9<sup>5</sup>* 6

```c
#include <stdio.h>
#include <math.h>

const int N = pow(9, 5) * 6;

int val(int n) {
    int sum = 0, tmp = n;
    while (tmp) {
        sum += pow(tmp % 10, 5);
        tmp /= 10;
    }
    return sum == n;
}

int main() {
    int sum = 0;
    for (int i = 2; i <= N; i++) {
        if (!val(i)) continue;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
```



# 欧拉计划004

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200802130049.png)



**题目大意：**

> 回文数在两个方向上都相同。 由两个两位数的乘积组成的最大回文数为9009 = 91 X 99。查找由两个3位数字的乘积组成的最大回文。

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200802130253.png)



```c
#include <stdio.h>

int is_val(int n, int base) { //模拟整数翻转，base进制下的回文数判断
    int sum = 0, tmp = n;
    while (tmp) {
        sum = sum * base + tmp % base;
        tmp /= base;
    }
    return sum == n;
}

int main() {
    int ans = 0;
    for (int a = 100; a < 1000; a++) {
        for (int b = a; b < 1000; b++) {
            int t = a * b;
            if (t > ans && is_val(t, 10)) ans = t;
        }
    }
    printf("%d\n", ans);
    return 0;
}
```

# C语言关系运算符

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200802141119.png)

> 只有0，null, ‘\0’是假的 其他都是真的

!!(x)  对x进行归一化处理， x的值要么为0，要么为1

# 分支结构

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200803142947.png)



```c
#include <stdio.h>

int judge(int n) {
    if (!n) {
        printf("FOOLISH\n");
    } else if (n < 60) {
        printf("FALL\n");
    } else if (n < 75) {
        printf("MEDIUM\n");
    } else if (n <= 100) {
        printf("GOOD\n");i}
    return 0;
}
int main() {
    int n;
    while (~scanf("%d", &n)) {
        judge(n);
    }
    return 0;
}
```



![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200803143528.png)

```c
#include <stdio.h>

int main() {
    int n;
    while (~scanf("%d", &n)) {
        switch (n) {
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            default:
                printf("error\n");
        }
    }
    return 0;
}
```



![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200803143729.png)

```c
#include <stdio.h>

int main() {
    int n;
    while (~scanf("%d", &n)) {
        switch (n) {
            case 1:
                printf("one ");
            case 2:
                printf("two ");
            case 3:
                printf("three\n");
                break;
            default:
                printf("error\n");
        }
    }
    return 0;
}
```



# 回文整数及CPU的分支结构预测

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200803143916.png)

**题目大意：**

> 确定一个整数是否是回文数。
> 1234->错误
> 12321-->真
> 一些提示：
> 0负整数可以是回文吗？（即，-1）
> 1.如果您正在考虑将整数转换为字符串，请注意使用额外空间的限制。
> 2.你也可以尝试反转一个整数。但是，如果您已经解决了“反向整数”问题，就知道反向整数可能会溢出。你会如何处理这种情况？
> 3.有一种更通用的方法来解决这个问题。

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200802160327.png)

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200802155931.png)



```c
bool isPalindrome(int x){
        if (__builtin_expect(!!(x < 0), 0)) return false;
	    long long  sum = 0, z = x;
	    while (x) {
	    	sum = sum * 10 + x % 10;
	    	x /= 10;
	    }
        return z == sum;
}
```



# 循环结构

## while循环

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200803144833.png)

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200803144651.png)

```c
#include <stdio.h>

int main() {
    int i = 1;
    //while循环
    while (i <= 100) {
        printf("%d\n", i++);
    }
    //do-while循环
    /*do {
        printf("%d\n", n);
        ++n;
    } while (n <= 100);*/
    return 0;
}
```

## for循环

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200803145113.png)

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200803145232.png)

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
		printf("%d\n", i);
    }
}
```

# 分支/循环 逻辑短路/断路等

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a = 0, b = 0;
    if ((a++) && (b++)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    printf("test1 : a = %d, b = %d\n", a, b);
    if ((a++) || (b++)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    printf("test2 : a = %d, b = %d\n", a, b);
    int n, cnt = 0;
    scanf("%d", &n);
    srand(time(0));
    if (n & 1) { //奇数的二进制最后一位是1
        printf("%d is a odd!\n", n);
    } else {
        printf("%d is a even!\n", n);
    }
    for (int i = 0; i < n; i++) {
        int val = rand() % 100;
        i && printf(" ");//控制空格的输出
        printf("%d", val);
        cnt += (val & 1);
    }
    printf("\n");
    printf("odd nums : %d\n", cnt);
    int x, digits = 0;
    scanf("%d", &x);
    do {
        digits++;
        x /= 10;
    } while (x);
    printf("digits : %d\n", digits);
    return 0;
}
```







# 欧拉计划002

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200804092255.png)

**题目大意：**

> 斐波那契数列中的每个新项都是通过将前两个项相加而生成的。 从1和2开始，前10个项将是：
> 1，2，3，5，8，13，21，34，55，89，...
> 通过考虑斐波那契数列中值不超过400万的项，找到偶值项的总和。







**法一：**空间复杂度：O(n)

```c
#include <stdio.h>
#define max_n 44
#define N 4000000

int fib[max_n + 5] = {1, 2, 0};

int main() {
    int sum = 0;
    for (int i = 2; i <= max_n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0; i <= max_n; i++) {
        if (fib[i] <= N && !(fib[i] & 1)) sum += fib[i];
    }
    printf("%d\n", sum);
    return 0;
}
```



**法二：**空间复杂度：O(1)

```c
#include <stdio.h>

#define max_n 4000000

int main() {
    int a = 0, b = 1, sum = 0;
    while (a + b <=  max_n) {
        b = a + b;
        a = b - a;
        if (b & 1) continue;
        sum += b;
    }
    printf("%d\n", sum);
    return 0;
}
```



**法三：**滚动数组思想

```c
#include <stdio.h>
#define max_n 4000000
int fib[2] = {0, 1};

int main() {
    int sum = 0, n = 1;
    while (fib[n % 2] + fib[(n - 1) % 2] <= max_n) {
        n++;
        fib[n % 2] = fib[(n - 1) % 2] + fib[(n - 2) % 2];
        if (fib[n % 2] & 1) continue;
        sum += fib[n % 2];
    }
    printf("%d\n", sum);
    return 0;
}
```



# #define和位运算

**1、请定义一个宏，比较两个数a、b的大小，不能使用大于、小于、if语句** 

```c
//方法一
#define maxmin(a, b) (((a) - (b)) >> 31? 1 : 0) 

//方法二
#define max(a,b) ((((long)((a)-(b)))&0x80000000)?b:a) 
//若a > b ,则a-b的二进制最高位为0，与上任何数还是0，所以大数为a;
//否则，a-b为负数，二进制最高位为1，与上0x80000000(最高位为1其他为0)之后为1，所以此时的大数为b. 

//方法三
#define COMPARE(x,y) ((x)-(y))+(abs((x)-(y)))?1:0
```

**2、请定义一个函数，求一个数的绝对值，不使用库函数**

```c
int abs(int x) {
    return (((x>>31)&1)?(~x+1):x);
}
```

**3、请定义一个宏，实现交换两个数**

```
#define swap(a, b) {\
     __typeof(a) __temp = a;\
    a = b; b = __temp;\
}
```

# 欧拉计划003

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200804153513.png)

**题目大意：**

> 13915的质因子是5 7 13 29
>
> 那么600851475143的最大质因数是多少？

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200804155658.png)

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200804155726.png)

![1596527048866](C:\Users\HP\AppData\Roaming\Typora\typora-user-images\1596527048866.png)



> **第一**，ans一定是质因子的原因是num会把所有质因子的倍数都给筛掉。
>
>  i 等于合数被整除的情况不可能出现，也不可能循环到sqrt(n)以上的数，循环求i是不是它的质因数，直到i不是它的因数为止(i = 4能被整除的不可能出现，因为当i=2时已经被全求出来了)
>             也就是说n % i==0的情况，只有当i为质数时才有可能出现。
>
> **第二，**一定要判断n是否等于1是因为当n刚开始就是质数的时候，最大的质因数就是他本身，所以肯定不为1；如果n刚开始是合数，在进行循环完之后的n如果不为1，说明此时的n已经是最大的质因数了，而且大于此时的ans，大于sqrt(n)，所以ans = n; 如果等于1，说明他的最大质因子小于sqrt(n)，此时的ans就是他的最大质因数。

```c
#include <stdio.h>
#define max_n 600851475143LL

int main() {
    int ans = 0, i = 2;
    long long n = max_n;
    while (i * i <= n) {
        if (n % i == 0) ans = i;//ans 为什么一定是素因子
        while (n % i == 0) n /= i;
        i++;
    }
    if (n != 1) ans = n;//为什么一定要判断
    printf("%d\n", ans);
    return 0;
}
```





# 欧拉计划008

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200804203338.png)

输入样例：

```c
73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043557
66896648950445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450
```

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200804203548.png)



![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200804203707.png)



```c
#include <stdio.h>
#include <string.h>
#define max_n 1000

char num[max_n + 5];

int main() {
    int len = 0;
    while (~scanf("%s", num + len)) len = strlen(num);
    long long ans = 0, p = 1, zero = 0;
    for (int i = 0; num[i]; i++) {
        num[i] -= '0';
        if (num[i]) p *= num[i];
        else zero += 1;
        if (i < 13) continue;
        if (num[i - 13]) p /= num[i - 13];
        else zero -= 1;
        if (zero == 0 && p > ans) ans = p;
    }
    printf("%lld\n", ans);
    return 0;
}
```



# 欧拉计划015

![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200804203940.png)



**题目大意：**

> 从2x2网格的左上角开始，只能向右和向下移动，到右下角正好有6条路线。
>
> 通过20×20网格有多少条这样的路径？



**题目讲解**

> 以2x2宫格为例，根据题目描述，有如下基本事实可以轻易得知:
> 1、无论哪种方法，从左上角走到右下角总共需要4步
> 2、无论哪种方法，横着肯定需要走2步，竖着也是2步
>
> **思维变换:**
> 1、用R代表向右走，D代表向下走
> 2、用一个仅包含R和D长度为4的字符串代表一种走法，例如: RRDD(第一步向右走，第二步向右走，第三步向下走，第四步向下走)
> 3、字符串中肯定有两位为R,剩下的位置为D
> 4、问题等价为: 4位中选出2位放R,有多少种不同的选择方法[组合问题]



![](http://miracle0609.oss-cn-beijing.aliyuncs.com/miracle0609/img/20200804204313.png)



```c
//版本1
#include <stdio.h>

int main() {
    long long m = 40, n = 20, ans = 1;
    while (m != 20 || n) {
        if (m != 20) ans *= m--;
        if (n && ans % n == 0) ans /= n--;
    }
    printf("%lld\n", ans);
    return 0;
}
```

```c
//版本2
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main() {
    int64_t ans = 1, m = 20;
    for (int32_t i = 40; i > 20; --i) {
        ans *= i;
        while (ans % m == 0 && m != 1) {
            ans /= m;
            --m;
        }
    }
    printf("%"PRId64"\n", ans);
}
```


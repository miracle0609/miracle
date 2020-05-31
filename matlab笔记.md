# 一、变量管理

### 1、工作空间中驻留的变量查看

​			口who   查看有哪些变量
​					口whos  查看变量的具体信息

### 2、清除变量

​			clear ——清除所有变量

​			clear 变量名 清楚某个变量

### 2、保存数据

​			save 文件名



# 二、matlab数据类型

**class(数据)  查看数据类型**

## 1、数值型

- 双精度（8字节）

- 单精度

- 带符号和无符号整型

  > **a=1;**
  > 建立double型数据a，值为1，转化：
  > 	**b= uint8(a);** 
  > 		a转化为uint8类型(无符号整型，8位)赋值到b中，执		行结果a类型不变。
  >
  > ​	 **a= uint8(a);**
  > ​		a转化为uint8类型。
  >
  > ​	**a=double(a)**
  >
  > ​		a转换为double类型



## 2、字符串

**字符串——使用单引号括起来的字符序列**

> **str = 'This is a string'**

> **获取字符ASCII值**
> 			double()函数或者abs()函数
>
>  **ASCII转化为字符输出**
>         	char函数        口char(63);
> 		**数字转换成字符串**
>
> ​	num2str()  
>
>  **字符串转换成数字**
>
> ​	str2num()

> **执行字符串内容eval函数**
> 		eval('t=1');
> 		将字符串't= 1'作为MATLAB语句执行，即上面的语句执行		结果为将1赋值给变量t

## 3、结构体

> **结构体.成员名=表达式**
>
> 口a.x1= 1;
> 		口a.x2= 'str;
> 		口a.x3= [1112 13];
> ◆建立结构体a，成员包括三个分别为x, x2, x3。
> 	**结构体操作**
> 		口isstruct函数
> 		口fieldnames函数
> 		口isfield函数
> 		口rmfield函数
> 		口getfield函数



## 4、单元cell

**可以存放不同的数据类型**

```matlab
a = {1, 'str', [11,12,13,14]}
```



## 5、矩阵

**矩阵按列来存放**

### 5.1矩阵的建立

按行输入矩阵元素，同一行元素使用空格或者逗号隔开

不同行元素使用分号或者回车作为间隔

```matlab
A = [1 2 3 4]
A = [1,2,3,4]
A = [1 2 3; 4 5 6; 7 8 9]   % 3*3矩阵

zeros(n,m)   % 零矩阵,n,m代表行数和列数
ones(n,m)    % 幺矩阵,n,m代表行数和列数

% 冒号表达式建立向量
% 冒号是一个重要的运算符，语法
% e1:e2:e3
% el为初始值，e2为步长，e3为终止值，产生行向量
A = 1:2:5
	A =
     1     3     5
% linspace(a,b,n)
% a和b分别为行向量的第一个和最后一个元素，n为总元素，省略n自动产生100个元素的行向量
linspace(1,10,100)
```
### 5.1矩阵的简单操作

#### 5.1.1索引矩阵

- 可以使用矩阵元素的行标和列标或者矩阵元素的位置索引来索引矩阵元素
- 行标和列标共同使用的形式
- 使用序号索引，涉及到MATLAB中矩阵的存储形式
- 序号和下标的转换

> sub2ind(size(A),n,m) , ind2sub(size(A),k)

```matlab
>> A = [1 2 3; 4 5 6; 7 8 9]

A =
     1     2     3
     4     5     6
     7     8     9

>> A(2,3)  % A中第二行，第三列元素的值

ans =
     6

>> A(5)  % A中第五个元素的值

ans =
     5
>> [m, n] = find(A == 5) % 找某个元素的行标和列标

m =
     2
n =
     2
>> ind = find(A == 5) % 找某个元素在A中是第几个元素

ind =
     5
>> sub2ind(size(A),2,3) % 序号转换成下标

ans =
     8
>> [m, n] = ind2sub(size(A),3) % 下标转换为序号

m =
     3
n =
     1
```

#### 5.1.2重排矩阵

```matlab
>> A = [1 2 3; 4 5 6; 7 8 9]

A =
     1     2     3
     4     5     6
     7     8     9
>> H = reshape(A,9,1) % 重排成9*1矩阵

H =
     1
     4
     7
     2
     5
     8
     3
     6
     9
>> I = A(:)

I =
     1
     4
     7
     2
     5
     8
     3
     6
     9
```

#### 5.1.3矩阵转置

```matlab
>> A = [1 2 3; 4 5 6]

A =

     1     2     3
     4     5     6
>> A'

ans =

     1     4
     2     5
     3     6
```

#### 5.1.4矩阵拆分

```matlab
>> A = [1 2 3; 4 5 6]

A =

     1     2     3
     4     5     6
>> M = A(1,:) % 获得第一行所有列的内容

M =
     1     2     3
>> M = A(1,1:2) % 获得第一行 第一列到第二列的内容

M =
     1     2

>> M = A(1,1:end - 1)% 获得第一行 第一列到倒数第二列的内容

M =
     1     2
>> M = A([1,2],[1,2]) 
%  或者  M = A(1:2,1:2)
% 获得第一行第一列 以及 第二行第二列的内容
M =
     1     2
     4     5
```

#### 5.1.5矩阵元素删除

```matlab
>> A = [1 2 3; 4 5 6]

A =

     1     2     3
     4     5     6

>> A(1,:) = [] % 删除第一行所有列的元素

A =
     4     5     6
>> A(2) = [] % 删除第二个元素

A =
     4     6
```

#### 5.1.6扩展

```matlab
>> A = [1 2 3; 4 5 6]

A =

     1     2     3
     4     5     6
>> Q = repmat(A,2,1) % 矩阵复制

Q =
     1     2     3
     4     5     6
     1     2     3
     4     5     6
>> R = [1 1 2 2 3 3 3 4]
R =
  1 至 6 列

     1     1     2     2     3     3

  7 至 8 列

     3     4
>> S = unique(R) % 去重

S =
     1     2     3     4
```

# 三、矩阵的进一步处理

## 1、特殊矩阵的建立

```matlab
% zeros
% ones
% eyes 单位阵  主对角线元素为1，其余元素为0
I = eye(10,10)
I = eye(10)
I = eye(3,4)

% rand randn
S  = rand(0,1)  % 产生从0到1随机分布的随机矩阵
Sn = randn(1,10) % 产生从1到10服从正态分布的随机矩阵

% 从a到b之间分布的随机数
S = a + （b - a） * rand(n, m)

% 从0到10之间均匀分布
S = 0 + (10 - 0) * rand(0, 1)

% 产生均值为u,方差为s的正态分布随机矩阵
y = u + sqrt(s) * randn(n, m)
>> y = 0.1 + sqrt(5) * randn(5, 1)
y =
    1.3023
    4.2007
   -4.9509
    2.0279
    0.8128

>> mean(y) % 均值
ans =
    0.6785
>> std(y) % 方差
ans =
    3.4031

% 魔方矩阵
magic(n)   % n*n 单位阵
>> magic(4)

ans =
    16     2     3    13
     5    11    10     8
     9     7     6    12
     4    14    15     1
     
% Hilbert矩阵
% hilb(n)  n*n 单位阵
% h(i, j) = 1 / (i + j)
>> hilb(3)

ans =
    1.0000    0.5000    0.3333
    0.5000    0.3333    0.2500
    0.3333    0.2500    0.2000

% Toeplitz矩阵
toeplitz(1:4)
>> toeplitz(1:4)

ans =

     1     2     3     4
     2     1     2     3
     3     2     1     2
     4     3     2     1
```

## 2、矩阵和向量的计算

```matlab
>> A = [1 0 0 0; 3 1 0 0; -5 2 1 0; 7 -3 2 1]
>> B = [1 2 3 4; 2 3 4 5; 3 4 5 6; 4 5 6 7]
>> A + B
ans =

     2     2     3     4
     5     4     4     5
    -2     6     6     6
    11     2     8     8
>> k = 3
>> k * A
ans =
     3     0     0     0
     9     3     0     0
   -15     6     3     0
    21    -9     6     3
% 计算A的行列式 使用det函数

>> det(A)

ans =

     1
%如果A的行列式不为o，那么计算A的逆 使用inv函数
>> inv(A)

ans =

    1.0000         0         0         0
   -3.0000    1.0000   -0.0000    0.0000
   11.0000   -2.0000    1.0000   -0.0000
  -38.0000    7.0000   -2.0000    1.0000
%向量可以看做1*n矩阵或者n*1矩阵，因此向量的加法和数乘等运算和矩阵是一样的。
%内积运算:
%计算向量a和b的内积，使用内积定义式为(a,b)=b的共轭转置* a
%其中a和b向量为
 
>> a = [1+5i, 2, 3+6i, 7-2i]
>> b = [2-i, 4+3i, 3-i, 6]
>> s = sum(conj(b).*a) % 内积
s =
  50.0000 +14.0000i
  
>> s = a * b' % 内积
s =
  50.0000 +14.0000i
>> s = dot(b , a)  % 内积
s =
  50.0000 +14.0000i
```

## 3、线性方程组求解

```matlab
>> A = [1 2 3; 1 4 9; 1 8 27]

A =

     1     2     3
     1     4     9
     1     8    27

>> b = [5 -2 5]'

b =

     5
    -2
     5

>> x = inv(A) * b % 第一种方法

x =

   22.5000
  -14.0000
    3.5000

>> x = A \ b % 第二种方法 左除

x =

   22.5000
  -14.0000
    3.5000
```

## 4、矩阵的相似化简和分解

```matlab
>> A = [0 3 3; -1 8 6; 2 -14 -10]

A =

     0     3     3
    -1     8     6
     2   -14   -10

>> jordan(A) //jordan标准型

ans =
     0     0     0
     0    -1     1
     0     0    -1

>> [V J] = jordan(A) //jordan标准型 V为相似变换矩阵 J为jordan标准型
V =
     4    -3    -3
     2    -3    -2
    -2     4     2
J =
     0     0     0
     0    -1     1
     0     0    -1

% 求解矩阵特征值  eig函数

>> A = [1 0 i; 0 2 0; -i 0 1]

A =

   1.0000 + 0.0000i   0.0000 + 0.0000i   0.0000 + 1.0000i
   0.0000 + 0.0000i   2.0000 + 0.0000i   0.0000 + 0.0000i
   0.0000 - 1.0000i   0.0000 + 0.0000i   1.0000 + 0.0000i
   
>>  eig(A)

ans =

     0
     2
     2
>> [E , D] = eig(A) % 分别获取特征值和特征向量

E =

   0.0000 + 0.7071i   0.0000 + 0.7071i   0.0000 + 0.0000i
   0.0000 + 0.0000i   0.0000 + 0.0000i   0.0000 + 1.0000i
  -0.7071 + 0.0000i   0.7071 + 0.0000i   0.0000 + 0.0000i


D =

     0     0     0
     0     2     0
     0     0     2
```

## 5、向量和矩阵的范数

```matlab
>> A = [0 3 3; -1 8 6; 2 -14 -10]

A =

     0     3     3
    -1     8     6
     2   -14   -10
% 范数，1范数，2范数，无穷范数，f范数
>> norm(A, 1)
ans =
    25
>> norm(A, 2)
ans =
   20.4523
>> norm(A, inf)
ans =
    26
>> norm(A, 'fro')
ans =
   20.4695
```

## 6、矩阵分析

```matlab
% 函数矩阵
% MATLAB中函数的计算，比如求导数，MATLAB默认对矩阵的每一个元素求导，这即为函数矩阵导数的计算方法。
>> syms x
>> A = [sin(x) exp(x) 1; cos(x) x^2 + 1 log(x)]
 
A =
 
[ sin(x),  exp(x),      1]
[ cos(x), x^2 + 1, log(x)]
% diff(A, n) 对矩阵求n阶导 没有n diff(A) 默认求一阶导
 
>> diff(A)
 
ans =
 
[  cos(x), exp(x),   0]
[ -sin(x),    2*x, 1/x]

>> diff(A, 2)
 
ans =
 
[ -sin(x), exp(x),      0]
[ -cos(x),      2, -1/x^2]

% 矩阵函数
% 计算矩阵函数 e^A sin(A) cos(A)
>> A = [0 1; 0 -2]

A =

     0     1
     0    -2
% MATLAB中使用funm函数计算矩阵函数，funm为通用矩阵函数计算函数。其使用方法如下:
>> expA = funm(A, @exp)

expA =

    1.0000    0.4323
         0    0.1353

>> expA = expm(A)

expA =

    1.0000    0.4323
         0    0.1353
>> sinA = funm(A, @sin)

sinA =

         0    0.4546
         0   -0.9093

>> sinA = funm(A, @cos)

sinA =

    1.0000    0.7081
         0   -0.4161
```

# 四、matlab的程序控制结构

**顺序结构，选择结构，循环结构**

## 1、M文件

> ​		**M文件分类**
>
> - 命令文件(脚本文件，Script File)
>
> - 函数文件(Function File)
>
> - edit 建立普通脚本文件
>
>   **区别**
>
> - 命令文件没有输入，没有返回;
>
> - 命令文件可以对工作空间的变量操作，结果返回工作空间，而函数文件中的变量为局部变量，函数执行完毕，变量被清除;

## 2、顺序结构

按照代码顺序执行，即顺序结构，受控于代码前后位置;
使用于顺序结构中的输入和输出(命令交互) :

- 数据输入(input函数 )
- 数据显示(disp函数)
- 程序暂停(pause函数)

```matlab
>> A = input('请输入一个数字：')
请输入一个数字：1

A =

     1

>> disp('This id a apple') 显示数据
This id a apple
>> disp(A)
     1
>> pause(3);A % 暂停三秒输出A

A =

     1
```

## 3、选择结构（分支结构）

**分支结构，又称之为选择结构，包括if分支， switch分支和try分支**

> **单分支if语句**
> 语法:
> if条件
> 	语句组
> end

> **双分支if语句**
> 语法:
> if条件
> 	语句组1
> else
> 	语句组2
> end

> **多分支if语句**
> 语法:
> if条件
> 	语句组1
> elseif
>
> ​	语句组2
> elseif 
>
> ​	语句组3
>
> end



> **switch 分支**
>
> 语法:
> switch 表达式
> 	case 表达式1
> 		语句组1
> 	case 表达式2
> 		语句组2
> 	case 表达式m
> 		语句组m
> 	otherwise
> 		语句组n
> end

> **try分支**
> 在经典的程序设计语言中未出现，这是一种试探性的分支语句，也就是如果这条语句执行有错误，则不执行，或者执行其他的语句，提高了程序的容错性能。
> 语法:
>  try
> 	语句组1
> catch
> 	语句组2
>  end

```matlab
% 单分支条件
A = input('input A');
if A > 10
    disp(A);
end

>> chooseyuju
input A12
    12
>> % 双分支if语句
% y = cos(x(x < 10));
x = input('x');
if x > 10
    y = log(x);
else
    y = cos(x);
end
disp(y);

x10
   -0.8391
   
   % 多分枝if语句
c = input('input a character', 's');
if c >= 'A' & c <= 'Z'
    disp(char(abs(c) + abs('a') - abs('A')));
elseif c >= 'a' & c <= 'z'
    disp(char(abs(c) - abs('a') + abs('A')));
elseif c >= '0' & c <= '9'
    disp(c);
end

input a character0
0

% switch分支
price = input('input price');
switch fix(price / 100)
    case {0,1}
        rate = 0;
    case {2,3,4}
        rate = 0.03;
    case {5,6,7,8,9}
        rate = .05; % 如果小数点前面没有数字默认为0
    otherwise
        rate = .1;
end
disp(rate);

input price566
    0.0500
```

## 4、循环结构

> **包括for循环和while循环**
> **for循环:**
> 语法(常用的一 种形式)
>  for循环变量=表达式1:表达式2:表达式3
> 		循环体.
> end
>        注意循环变量是自动增加的，在循环体内对循环变量的赋值操作会带来不可预料的程序执
>
> **while循环**
> 语法:
>  while 条件
> 	循环体
> end

```matlab
% for循环
A = 1:100;
sumA = 0;
for k = 1:100
    sumA = sumA + A(k);
end

>> sumA

sumA =

        5050
% while 循环
while 1
    c = input('input a chracter', 's');
    if isempty(abs(c))
        break;
    end
end
```

# 五、matlab编辑器和程序调试

## 函数文件

> **基本结构**
> function[输出形参]=函数名([输入形参])
>  [注释说明]
> 函数体

```matlab
function re = add(a,b)
% 完成变量a和b的相加
% 输入： a加数1
%       b加数2
% 输出： re为两个参数的加和
% $Author:  miracle0609
% $Date:    2020.05.28
% $Version: V1.0
re = a + b;
end


>> add(1,3)

ans =

     4
```

> **函数参数可调标识变量**
>
> - nargin  输入参数个数 
>
> - nargout 输出参数个数 
>
> - varargin
>
> - varargout
>
>   可以完成传递参数的可调功能，类似于高级语言中的
>   函数重载和多态。
>
>   **varargin与varargout**  
>
>   ```matlab
>   function test(varargin)
>   disp(['nargin is ' num2str(nargin)]);
>   for v=1:numel(varargin)
>   disp(['varargin{' num2str(v) '} class is ' class(varargin{v})]);
>   end
>   
>   >> test(1,'a',uint8(32),'123456');
>   
>   会得到结果：
>   
>   nargin is 4
>   varargin{1} class is double
>   varargin{2} class is char
>   varargin{3} class is uint8
>   varargin{4} class is char
>   ```
>
>   用法：varargout=function(varargin);
>   作用：传入或者返回个数可变的参量（arguments).
>   详细内容：
>       varargin: matlab里面可以设置函数参量可以变化，想当于VC里面的函数重载；可以通过nargin判断varargin的参量个数，然后根据变量的输入形式，用varargin{:}调用所有的参量;
>       varargout: 同上，可以用nargout返回输出变量的个数，用varargout{:}对所有的输出变量赋值；
>       例：    
>
>   ```matlab
>     function varargout=tomography_test(varargin);
>                 nargin
>                 varargin{:}
>                 varargout=varargin;
>                 nargout
>                 varargout{:}
>     end
>   ```
>
>   **varargin,表示用在一个函数中，输入参数不确定的情况，这增强了程序的灵活性。**
>                 例如：function g=fun(f,varargin)
>                 然后在程序中使用时，假如在调用函数时，fun(f,a,b,c)，那么：varargin{1}=a,varargin{2}=b,varargin{3}=c
>                 **注意：在MATLAB中数组中下标是从1开始的。**
>   **varargout,表示函数输出结果的个数，**[g,varargout]=fun(varargin)
>
>   **nargin:系统统计出来的参数输入个数**
>

```matlab
% 实现一个相加的功能，不确定有多个数参与相加，但至少有两个。
function re = add_muti(a, b, c, d)
	if nargin == 4
    	re = a + b + c + d;
	elseif nargin == 3
    	re = a + b + c;
	elseif nargin == 2
   	 	re = a + b;
	else
   		error('wrong');
end

>> add_muti(1,2)

ans =

     3

>> add_muti(1,2,3)

ans =

     6
     
% 实现一个相加或者相乘的功能，不确定有多少个输出参数，但至少有一个。
function [a,b] = add_mu(c,d,e,f)
%
%
%
    if nargout == 2
        a = c + d + e + f;
        b = c * d * e * f;
    else
        a = c + d + e + f;
    end
end
>> add_mu(1,2,3,4)

ans =

    10

>> [m, n] = add_mu(1,2,3,4)

m =
    10
n =
   	24


% 实现一个相加的功能，不确定有多个数参与相加，但至少有两个。
function g=add2(a,b,varargin)  
    narginchk(2,4); % 检测输入参数个数是否符合范围
    if nargin == 2  
        g = a + b;  
    elseif nargin == 3  
        g = a + b + varargin{:};  
     elseif nargin == 4  
        g = a + b + varargin{1} + varargin{2}; 
    end
end    


```

**全局变量**

> 使用global声明

# 六、绘图相关函数

> 二维高层绘图的基本函数
> **plot函数**
> **二维绘图的辅助操作**
> 		  标注:
> 			图形名称
> 			坐标轴名称
> 			曲线标注
> 			图例
>
> - 坐标轴控制
> - 图形保持(同一坐标轴绘制多个图形)
> - 窗口分割(同一-窗口含有多个坐标轴)

## plot基本用法

plot(x, y);
		要求:  x和y为相同长度的向量

### 特殊用法：

- x为向量，y为矩阵，其中一维与x长度相同，则绘制多条不同色彩的曲线(颜色怎么确定?
- x和y为同维的矩阵，以对应列绘制不同色彩的曲线;
- plot有一一个参数，若x为实数向量，则绘制折线图，若x为复数向量，则以实部和虚部为横纵坐标绘图;
- 多个输入参数;
- 曲线选项



### 基本标注函数:

-  title 
-  xlabel
-  ylabel
-  text
- legend



### 特殊字符的显示

​	LaTeX字符简介

### 坐标轴控制

- axis equal    —— 将横轴纵轴的定标系数设成相同值。 
- axis square   —— 将当前坐标系设置为方形。横轴及纵轴比例是1：1 
- axis auto  —— 将坐标轴刻度恢复为自动的默认设置 
- axis off    ——关闭所有的坐标轴标签、刻度、背景 
- axis on     —— 打开所有的坐标轴标签、刻度、背景 
- axis([xmin xmax ymin ymax])
- xlim([xmin xmax])    ——用来限制x坐标轴的范围
- ylim([ymin ymax])	——用来限制y坐标轴的范围

```matlab
% 基本绘图操作
x = 0:0.01:2*pi;
y = sin(x);

plot(x,y);

% 第二个参数为矩阵 
y1 = sin(x);
y2 = cos(x);
y3 = 0.002*exp(x);
y4 = x;
y5 = 0.002*tan(x);

z = [y1; y2; y3; y4; y5];
plot(x,z);

% 两个参数都是矩阵
x1 = 0:0.01:2*pi;
x2 = -pi:0.01:pi;
x = [x1; x2]';

y1 = cos(x1);
y2 = sin(x2);
y = [y1; y2]';
plot(x,y);

% plot只有一个参数
x = linspace(0,2*pi,200);
y = sin(x);
plot(y);
y2 = cos(x);
y3 = y + i*y2;
plot(y3);
axis equal % 将坐标轴变成正方形

% plot有多个参数
x1 = linspace(0,2*pi,200);
x2 = linspace(0,2*pi,100);
y1 = cos(x1);
y2 = sin(x2);
plot(x1,y1,x2,y2);

% plot含有的曲线选项
x = linspace(0,2*pi,200);
y = sin(x);
plot(x, y, 'k'); % r g y m k b
plot(x, y, 'p');% * . p（五角星） < >
plot(x, y, ':');% - -- -. :
plot(x, y, 'r*:');

% 图形标注
x = linspace(0, 2*pi, 100);
y =sin(x);
plot(x, y);
xlabel('x');
ylabel('y');
title('正弦');
text(2,0.3,'y = sin(x)');
text(5,0.5,'x^2'); % 在（5，0.5）处标注x^2
text(6,0.5,'x_2'); % 在（5，0.5）处标注x_2

% 图例标注
x1 = linspace(0,2*pi,200);
x2 = linspace(0,2*pi,100);
y1 = cos(x1);
y2 = sin(x2);
plot(x1,y1,x2,y2);
legend('cos', 'sin');
xlim([0 10])

% 图形保持
x = 0:0.1:2*pi;
y1 = sin(x);
y2 = cos(x);
hold on
plot(x, y1, 'r');
plot(x, y2, 'g');
hold off

% 窗口分割
x = 0:0.1:2*pi;
y1 = sin(x);
y2 = cos(x);
y3 = tan(x);
y4 = exp(x);
subplot(2, 2, 1);
plot(x, y1);
subplot(222);
plot(x, y2);
subplot(223);
plot(x, y3);
subplot(224);
plot(x, y4);
```

## 其他绘图函数

> **对象和句柄**
> MATLAB把构成图形的各个基本要素称为图形对象，产生每一-个图形对象时，MATLAB会自动分配一个唯一的值用于表示这个对象，称为句柄。

**line对象和line函数**
			h= line('pro1’, val, 'pro2‘, val,...);
			产生line对象，h为line对象的句柄;
 		**line对象的修饰:**

- Color属性; 
- LineWidth属性;
- LineStyle属性;
- Marker属性;
- MarkerSize属性;



**text对象和text函数**
        修饰:通过set函数设置

-  Color属性

-  String属性

- FontSize属性

-  Rotation属性

  **axes对象和axes函数**

  修饰: 

- Box属性

-  GridLineStyle属性

-  Position属性

-  Units属性

-  XLabel、YLabel和ZLabel属性

-  Xlim、Ylim和Zlim属性

```matlab
% line对象
h = line([-pi:0.01:pi], sin([-pi:0.01:pi]));
hp = plot([-pi:0.01:pi], sin([-pi:0.01:pi]));

h1 = line('XData',[-pi:0.01:pi],'YData',sin([-pi:0.01:pi]),'LineWidth', 1, 'LineStyle', ':', 'Color', 'r');

set(h1, 'LineWidth', 2, 'Marker', 'p', 'MarkerSize', 3); 

ht = text(0, 0,'sin');
set(ht, 'String', 'cos');
set(ht, 'FontSize', 20);

hf = figure;
ha = axes('Parent', hf, 'Units', 'normalized' ,'Position', [.1 .1 .6 .5]);
get(ha);
```

# 七、matlab符号运算

## 符号常量和符号变量

**语法:**
	

```matlab
% 建立一个符号变量
a= sym('a');
syms a;
% 建立一个符号常量
c= sym('3');
```



## 符号表达式

**语法:**
		

```matlab
% 法一 建立一个符号表达式 类型为char
f='3*x+ 6';
% 法二 建立一个符号表达式 类型为sym
syms x
f=3*x+ 6;
```

## 符号四则运算

```matlab
% +       -      *       /      ^
% symadd symsub symmul symdiv sympow 函数
```



## 符号表达式化简

```matlab
% simplify 
>> syms x y
s = (x^2 + y^2)^2 + (x^2 - y^2)^2;
simplify(s)

ans =
 
2*x^4 + 2*y^4
 
```



## 符号与数值的转化

```matlab
% eval函数 符号转换为数值
c= sym('3');
eval(c)

ans =

     3
```

## 符号表达式的因式分解和展开

●factor   ——因式分解

●expand ——展开

●collect   ——合并同类项

```matlab
% 因式分解，展开,合并同类项

% 因式分解
>> syms a b x y;
f1 = a^3 - b^3;
factor(f1)

ans =
 
[ a - b, a^2 + a*b + b^2]

% 展开
>> f2 = (3*x^2 + 8*y^2) * (-x^2 + 3*y);
expand(f2)

ans =
 
- 3*x^4 - 8*x^2*y^2 + 9*x^2*y + 24*y^3

% 合并同类项
>> f3 = 3*x^2 + 4*x^2 + 5*x^2*y;
collect(f3)

ans =
 
(5*y + 7)*x^2
```



## 符号矩阵

●构建方式和数值矩阵一 致

●转置

​		transpose 转置

●其他使用在数值矩阵中的函数也可以直接用于符号矩阵

```matlab
% 符号矩阵
a1 = [x x + y; y y^2]
transpose(a1)
```

## 符号函数的求解

```matlab
>> % 符号函数值的求解 subs函数
syms x
f1 = x^3 - 9;
subs(f1, 3) % 求解f1在x = 3处的值
 
ans =
 
18
```

## 符号极限

●limit函数

```matlab
>> % 符号极限/微分/积分
syms x
y = (sin(x + a) - sin(x - a))/x
limit(y, 0)
ans =
 
piecewise(in(real(a)/pi, 'integer') & (sinh(imag(a)) == 0 | in(real(a)/pi - 1/2, 'integer')), 0, in(real(a)/pi, 'integer') & 0 < cos(real(a))*sinh(imag(a)) | in(real(a)/pi, 'integer') & cos(real(a))*sinh(imag(a)) < 0 | sinh(imag(a)) ~= 0 & ~in(real(a)/pi - 1/2, 'integer'), limit((sin(a - x) + sin(a + x))/x, x, 0))
```



## 符号微分

●diff 函数  

```matlab
%  diff(x, n)  对x求n阶导
>> y2 = sin(x);
diff(y2)  
diff(y2, 2)
diff(y2, 3)

ans =
 
cos(x)
 
ans =
 
-sin(x)
 
ans =
 
-cos(x)
```

## 符号积分

int函数

```matlab
>> y3 = log(x)
int(y3) % 不定积分

ans =
 
x*(log(x) - 1)

>> y4 = abs(1 - x) 
int(y4, 1, 2)   % 求解函数在区间[1,2]的定积分

ans =
 
1/2
```

## 符号级数

> **符号级数求和**
>
> ​	symsum
>
> **泰勒级数**
>
> ​	taylor

```matlab
>> % 符号级数求和
syms n
f = 1/n^2;
s1 = symsum(f, n, 1, inf) 
% 函数名 变量名 左边界 右边界
 
s1 =
 
pi^2/6

>> % 泰勒展开
y = exp(x);
taylor(y, x, 0)
 
ans =
 
x^5/120 + x^4/24 + x^3/6 + x^2/2 + x + 1
```

## 符号方程求解

### 符号代数方程和方程组

solve

```matlab
% 代数方程
clear
syms x
eval(solve(x + x*exp(x) - 10))

% 方程组
clear
clc
syms x y
[x, y] = solve(1/x^3 + 1/y^3 -28, 1/x + 1/y - 4, x, y)
```



### 符号常微分方程

dsolve

```matlab
>> % 微分方程
clear
clc
dsolve('Dy = y + 1','x') % 是dy/dx = y + 1 的解
% Dy代表求一阶导，D2y代表求二阶导，以此类推
ans =
 
C7*exp(x) - 1
```


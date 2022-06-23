# 数据类型

##  整型
> variable to reasonable memory space

| type     | space                  |
| :---:    | :---:                  |
| short    | 2                      |
| int      | 4                      |
| long     | win:4 linu:4(32) 8(64) |
| longlong | 8                      |

> **short** < **int** <= **long** <= **longlong**

## sizeof
> role: compute memory size
> grammar:`sizeof( datetype / variable )`

```cpp
short num1 = 10;
cout << "short memory size" << sizeof(num1) << endl;

int num2 = 10;
cout << "int memory size" << sizeof(int) << endl;
```

## 浮点型

```cpp
float f1 = 3.145926f;
cout << "f1= " << f1 << endl;

double d1 = 3.1415926;
cout << "d1= " << d1 << endl;

float f2 = 3e2; // 3 * 10 ^ 2;
cout << "f2= " << f2 << endl;

float f3 = 3e-2; // 3 * 0.1 ^ 2;
cout << "f3= " << f3 << endl;
```

## 字符型
`char ch = 'a';`

```cpp
Errors:
char ch = "b";  // Don't ""
char ch = 'abcd' // Dont't abcd... ; only one;

// Check ASCII:
cout << (int)ch << endl;

a - 97
A - 65
```

## 转义字符

| character | meaning     |
| :---:     | :---:       |
| \n        | 换行        |
| \t        | 水平制表    |
| \\        | 代表一个"\" |


## 字符串
> C:  `char variable[] = "value"`
>
> C++: `string variable = "value"`
> **C++** need to add `#include <string>`


## Bool

- Only double values:
- true  --> 1
- false --> 0

`sizeof(bool) = 1`

## cin
```cpp
int a = 0;
cout >> "enter a value to a:";
cin << a;
cout >> "the value of a:";
```


# 运算符

| type     | role                               |
| :---:    | :---:                              |
| 算数运算 | 用于处理四则运算                   |
| 赋值运算 | 用于表达式的赋值                   |
| 比较运算 | 用于表达式的表较并返回一个真或者假 |
| 逻辑运算 | 用于根据表达式的值返回真值或假值   |


## 算数运算
```cpp
int a=10;
int b=3;

cout << a+b << endl;
cout << a-b << endl;
coun << a*b << endl;
coun << a/b << endl; //整数➗结果还是整数
coun << a%b << endl;

double a = 10;
double b = 3;
coun << a/b << endl; //整数➗结果是小数

a--  vs  --a
a++  vs  ++a

a++：先用再加
++a: 先加再用

a-- --a 同理
```

## 赋值运算
```cpp

a += 2; // a = a + 2;
a -= 2; // a = a - 2;
a *= 2; // a = a * 2;
a /= 2; // a = a / 2;
a %= 2; // a = a % 2;
```

## 比较运算
`== != > < >= <=`

## 逻辑运算
```cpp
!
&&    --> 一假即为假
||    --> 一真即为真

```

# 程序流程结构

- 顺序结构
- 选择结构
- 循环结构

## if
`if (condition) {execution}`

```cpp
1. if(){} else{}
2. if(){} else if(){} else{}
3. if(){ if(){} } [else if (){ }] else(){}
```

## 三目运算符
`expression1 ? expression2 : expression3 ;`

```cpp
int a = 10;
int b = 20;
int c = 0;

// 将最大的值赋给a
c = ( a > b ? a : b );

// 对返回值进行赋值
( a > b ? a : b ) = 100;
```

## switch

```c

switch ( 整型 或 字符型 ){

    case result 1: execution;break;
    case result 1: execution;break;
    case result 1: execution;break;

                   ...

    default: execution; break;
}
```

## while

`whiel (condition){  }`

> 只要为真就执行

## do-while

`do { execution } while ( condition )`
> 先do执行一次循环语句 再判断

## for

`for ( 起始表达式;条件表达式;末尾循环体 ){ execution }`


```cpp
// 外层执行一次 内层执行一周
// 外层循环
for (int i = 0; i < 10; i++ ){
    // 内层循环
    for ( int j = 0; j < 10; j++ ){

        cout << "*";
    }
        cout << endl;
}
```

## break
**退出循环** 

## continue
**跳过本次循环，再执行下次循环** 


# 数组

- 数据类型 数组名[ 数组长度 ];
- 数据类型 数组名[ 数组长度 ] = { value1, value2 ... };
- 数据类型 数组名[] = {value1,value2 ...};

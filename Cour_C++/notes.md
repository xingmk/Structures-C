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

| character | meaning    |
| :---:     | :---:      |
| \n        | 换行       |
| \t        | 水平制表   |
| \\        | 代表一个 \ |


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

```cpp

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


```cpp
int arr[10] = {1,2,3,4,5,6,7,8,9,10,}
cout << "整个数组占用的内存空间为：" << sizeof(arr) <<endl;
cout << "每个元素占用内存空间为："<< sizeof(arr[0])<<endl;
cout << "数组中的元素个数为：" << sizeof(arr) / sizeof(arr[0])<<endl;

cout << "数组的首地址为：" << (int)arr << endl;
cout << "数组的第一个元素地址为：" << (int)&arr[0] << endl;
cout << "数组中第二个元素地址为：" << (int)&arr[1] << endl;

```

## 二维数组

- 数类型 数组名 [行数] [列数] = { value1,value2 }, {value3,value4};
 
`- 数类型 数组名 [行数] [列数] = {
{ value1,value2 },
{value3,value4}
};`
 
- 数类型 数组名 [行数] [列数] = { value1,value2 ,value3,value4};
- 数类型 数组名 [] [列数] = { value1,value2,value3,value4};
 
 
```cpp
cout << "二维数组大小:" << sizeof(arr) << endl;
cout << "二维数组一行大小" << sizeof(arr[0]) << endl;
cout << "二维数组元素大小" << sizeof(arr[0][0]) << endl;

cout << "二维数组行数" << sizeof(arr)/sizeof(arr[0]) << endl;
cout << "二维数组列数" << sizeof(arr[0])/size(arr[0][0]) << endl;
```

# 函数

**语法**  
返回类型 函数名（参数列表）{函数体语句 return表达式}

## 函数传值 

**传值的时候：形参发生任何改变都不会影响实参** 

```cpp
void swap(int num1, num2){

    int temp =num1;
    num1 = num2;
    num2 = temp;
}
int main(){

    int a = 10;
    int b = 20;
    swap(a, b);

    return 0;
}
```

## 函数的常见形式
- 无参无返
- 有参无返
- 无参有返
- 有参有返


# 指针
```cpp
//指针定义：数据类型 * 指针变量
    int *p;
//指针记录a的地址
    p = &a;

//使用指针
//通过解引的方式来找到指针指向的内存
//指针前加 * 代表解引用，找到指针指向的内存中的数据
    *p --> 地址的数值
```

## 指针内存
**无论指针是什么类型都遵守以下**   
- 在32位OS下 --> 4字节   
- 在64位OS下 --> 8字节

## 空指针, 野指针 
```cpp
// 空指针用于给指针进行初始化
    int *p = NULL;

// 空指针不能进行访问
// 0 ～ 255 之间的内存编号是系统占用，因此不可访问
***Errors:***    *p = 100;
        
```

## const修饰指针
 
- const修饰指针 --> 常量指针
- const修饰常量 --> 指针常量
- const即修饰指针又修饰常量

**常量指针** 
> 指针指向可以改，但是指针指向的值不可以改
```cpp
     int a = 10;
     int b = 10;
     int *p = &a;
     const int *p = &a;
```

**指针常量** 
> 指针指向的值可以改，但是指针指向不可以改

`int * const p = &a; ` 

**即修饰指针又修饰常量**   
`const int * const p = &a;` 


## 指针和数组

**数组名就是数组首地址** 




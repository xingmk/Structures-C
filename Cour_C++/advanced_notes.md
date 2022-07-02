# C++核心

## 内存分区
- 代码区：存二进制文件 由操作系统管理
- 全局区：存放全局变量和静态变量以及常量
- 栈区：由编译区自动分配释放, 存放函数的参数值 局部变量等
- 堆区：由程序员分配和释放 若程序员不释放 程序结束时由操作系统回收

### 代码区：
存放CPU执行的机器指令

- 共享的
- 只读的

### 全局区：

> - 全局变量
> - 静态变量  --> static关键字
> - 常量:
>     - 字符串常量
>     - const修饰的全局变量 == 全局常量

> 该区域数据在结束由操作系统释放


### 栈区
> 由编译器自动处理
> 不要返回局部变量的地址，栈区开辟的数据由编译器自动释放


### 堆区
> 由程序员分配和释放
```cpp
int *func(){

    //利用new 将数据开辟到堆区
    // 指针本质也是局部变量 放在栈上 指针保存的数据是放在堆区
    int *p = new int(10);
    return p;
}

// 堆区开辟数组
void test(){

    int * arr = new int[10];
    for(int i = 0; i < 10; i++){
        arr[i] = i + 100;
    }

}

int main(){
    int *p = func();
    cout << *p << endl;

    // 释放堆区
    delete p;
    // 释放数组
    delete[] arr;

}
```

# 引用
> 给变量起别名
`数据类型 &别名 = 原名`
```cpp
int a = 10;
int &b = a;

```

## 引用注意
- 必须初始化
- 初始化后不可改变


## 引用传递函数参数
```cpp
// 值传递
void exchang01(int a,int b){

    int temp = a;
    a = b;
    b = tem;
}

// 地址传递
void exchang02(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

// 引用传递
void exchang03(int &a, int &b){

    int temp = a;
    a = b;
    b = temp;
}

int main(){
    exchang01(a, b);
    exchang02(&a, &b);
    exchang03(a, b);

}

```


## 引用做函数返回值
> 注意：
> - 不要返回局部变量的引用
> - 函数的调用可以作为左值

```cpp
int & test01(){

    int a = 10;  // 局部变量存放在四区中的栈区
    return a;
}

int & test02(){

    static int a = 10;  // 静态变量--全局区
    return a;
}

int main(){

    int &ref2 = test02;

    test02 = 1000; //作为左值
}

```

## 引用的本质
> 本质是在指针常量

&ref = a; --> `int * const ref = &a;`


## 常量引用
```cpp

int main(){

    // int &ref = 10;  --> Error

    const int &ref = 10;
    /* int temp = 10;
       const int &ref = temp; */
}

```

# 函数
## 函数默认参数

`返回值类型 函数名 (参数=默认值) {} `
> 根据传入的数值为主

**如果某个位置有默认值，此位置之后都要有默认值**
**从左到右（前面的不用）**

**如果函数声明有默认参数，函数实现就不能有默认参数,二者只能有其一**


## 函数占位参数
`返回值类型 函数名 (数据类型){}`


## 函数重载
> 函数名可相同 提高复用性

**满足的条件**
- 同一个作用域下
- 函数名称相同
- 函数参数类型不同, 个数不同 或者 顺序不同

## 函数重载注意

- 引用作为重载条件
- 函数重载碰到函数默认参数


```cpp
void func2(int a, int b = 10){

    cout << "func1" <<endl
}

void func2 (int a){

    cout << "func2" << endl;
}

int main(){

    fun2(10);  --> Error: 二义性
        上面两个函数都可用但不知道具体用哪一个

}
```


# 类和对象
**特性:**
- 封装
- 继承
- 多态

# 封装

**Grammar**
`class 类名{访问权限： 属性  /   行为}`


```Cpp

#define PI 3.14

// class 代表设计一个类 类后紧跟着名称
class Circle{

    // 访问权限
    // 公共权限
    public:

        // 属性
        int m_r;

        // 行为
        // 获取圆的周长
        double calculateZC(){

            return 2 * PI * m_r;
        }


}


int mian(){
    // 通过一个类 创建一个对象
    Circle ci;

    // 给属性赋值
    ci.m_r = 10;

    cout << "圆的周长：" << ci.calculateZC() <<enl;
}

```

## 访问权限
- 公共权限 public   --> 成员可访问 类外也可访问
- 保护权限 protected --> 类内可访问 类外不可
- 私有权限 private  --> 类内可访问 类外不可


## class  VS  struct

|       class      |      struct     |
|:----------------:|:---------------:|
| default: private | default: public |


## 成员私有
**优点**
- 可以自己控制读写权限
- 对于写的权限 可以检测数据的有效性

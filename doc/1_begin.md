# 实践一把

1. 编译 C 程序
`gcc hello.cpp` 或者 `g++ hello.cpp`

2. 指定输出文件名（默认为源程序文件名）
`gcc hello.cpp -o amos`

3. Windows下边执行`.exe`
`hello` 或者 `"e:\study\github\hmmm\"hello`

4. 变量类型

  - 整数类型 `char/int/short/long`
  - 浮点类型 `float/double`
  - 枚举 `enum`
  - void类型 `void`
  - 派生类型
    - 指针类型
    - 数组类型
    - 结构类型
    - 共用体类型
    - 函数类型

5. 方法调用-传值
```c
// 传值调用
int add(int num1, int num2);

int add(int num1, int num2)
{
  return num1 + num2;
}
```

6. 方法调用-引用
```c
// 引用调用
int add2(int *num1, int *num2);

int add2(int *num1, int *num2)
{
  return *num1 + *num2;
}
```

7. 结构体
```c

```
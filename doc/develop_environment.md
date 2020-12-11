# C开发环境搭建-CentOS

`yum install gcc`
`yum install gcc-c++`

```c
#include <cstdio>

int main() {
    printf("Hello World !");
}
```

## 异常处理

未安装 `g++` 可能会报错 `gcc: error trying to exec 'cc1plus': execvp: No such file or directory`

`yum install gcc-c++`


# C开发环境搭建-Windows
- IDE：VS Code
- Plugin：C/C++、Code Runner
- 运行环境：MinGW

## Install MinGW

[mingw-w64](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/)

![下载MinGW示意图](mingw_install.png)

## 配置环境变量

环境变量`PATH`中添加`E:\app_res\mingw64\bin`

测试一下：
`g++ --version`
`gcc --version`

## gcc和g++的区别总结
gcc: GNU C Compiler
g++: GNU C++ Compiler

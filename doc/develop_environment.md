# C开发环境搭建
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
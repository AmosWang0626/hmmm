//
// Created by amos.wang on 2020/12/11.
//

#include <cstdio>

// 传值调用
int add(int num1, int num2);

// 引用调用
int add2(int *num1, int *num2);

int main()
{
  printf("Hello World !\n");

  printf("sum = %d\n", add(1, 9));

  int num1 = 1;
  int num2 = 9;

  printf("sum = %d\n", add2(&num1, &num2));

  return 0;
}

int add(int num1, int num2)
{
  return num1 + num2;
}

int add2(int *num1, int *num2)
{
  return *num1 + *num2;
}
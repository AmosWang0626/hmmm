//
// Created by amos.wang on 2020/12/11.
//

#include <stdio.h>

// 传值调用
int add(int num1, int num2);

// 引用调用
int add2(int *num1, int *num2);

int main()
{
  printf("Hello World !\n");

  int num1 = 1;
  int num2 = 9;

  printf("sum = %d\n", add(num1, num2));
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
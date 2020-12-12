#include <stdio.h>
#include <string.h>

struct User
{
  char name[20];
  unsigned int age : 4;
  int test : 4;
};

int main()
{
  struct User user;

  strcpy(user.name, "AMOS");
  user.age = 15;
  printf("用户 %s 年龄：%d\n", user.name, user.age);

  user.test = 7;
  printf("int test %d\t", user.test);
  user.test = 8;
  printf("int test %d\t", user.test);

  return 0;
}
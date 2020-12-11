#include <stdio.h>
#include <string.h>

struct Book
{
  int id;
  char name[50];
  char author[50];
  char subject[100];
};

void printBook(struct Book *book);

int main()
{

  struct Book book1;
  struct Book book2;

  book1.id = 1433233;
  strcpy(book1.name, "汇编语言");
  strcpy(book1.author, "amos");
  strcpy(book1.subject, "编程语言,基础");

  printBook(&book1);

  return 0;
}

void printBook(struct Book *book)
{
  printf("Book id: %d\n", book->id);
  printf("Book name: %s\n", book->name);
  printf("Book author: %s\n", book->author);
  printf("Book subject: %s\n", book->subject);
}

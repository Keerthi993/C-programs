#include<stdio.h>
int main()
{
  char name[30];
  printf("Enter your Full Name:- ");
  fgets(name, 30, stdin);
  printf("Hello %s", name);
  return 0;
}
/*{
  FILE *file;
  file=fopen("ll.txt", "r");
  if(file==NULL)
  {
    printf("Error Opening File.\n");
    return 1;
  }
char c[200];
fgets(c, 10, file);
printf("%s",c);
printf("\n");
fclose(file);
}*/
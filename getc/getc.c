#include<stdio.h>
int main()
{
  FILE *fp;
  fp=fopen("ll.txt", "r");
  if(fp==NULL)
  {
    printf("The Value is Null");
  }
  printf("The initial value is %c", getc(fp));
  fclose(fp);
  return 0;
}
#include<stdio.h>
int main()
{
  char name[]="Keerthana Vijayakumar";
  FILE *fp;
  fp=fopen("lk.txt", "w");
  fputs(name, fp);
  fclose(fp);
  return 0;
}
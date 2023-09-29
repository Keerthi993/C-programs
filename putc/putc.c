#include<stdio.h>
int main()
{
  char name='Y';
  FILE *fp;
  fp=fopen("lk.txt", "w");
  putc(name, fp);
  fclose(fp);
  return 0;  
}
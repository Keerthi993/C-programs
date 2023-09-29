#include<stdio.h>
int main()
{
  FILE *fp;
  fp=fopen("lk.txt", "w");
  fputc('a', fp);
  fclose(fp);
  return 0;
}
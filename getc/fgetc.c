#include<stdio.h>
int main()
{
  FILE *file;
  file=fopen("ll.txt", "r");
  if(file==NULL)
  {
    printf("Error Opening File.\n");
    return 1;
  }
char c;
c=fgetc(file);
//while((c=fgetc(file))!=EOF)
{
  printf("%c",c);
printf("\n");
}
fclose(file);
}
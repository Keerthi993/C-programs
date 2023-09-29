#include <stdio.h>
int main()
{
  int c;
  char buffer[256];
  FILE *fp;
  fp=fopen("ll.txt","r");
  if(fp==NULL)
  {
    perror("Error in Opening file");
    return -1;
  }
  while(!feof(fp))
  {
    c=getc(fp);
    if(c== '!')
    {
      ungetc('+', fp);
    }
    else
    {
      ungetc(c,fp);
    }
    fgets(buffer, 255, fp);
    fputs(buffer, stdout);
  }
return 0;
}

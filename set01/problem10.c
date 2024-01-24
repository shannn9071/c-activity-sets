#include <stdio.h>

int main(void) {

int i;
char ch1[100],ch2[100];

  printf("enter the first string:\n");
scanf("%s",&ch1);

  printf("enter the second string:\n");
  scanf("%s",&ch2);


for(int i=0 ;ch1[i] == ch2[i]&&ch1[i]!='\0'&&ch2[i]!='\0';i++);

if(ch1[i]>ch2[i])
{
printf("%s is greater\n",ch1);
  return 0;
  
}

  if(ch2[i]>ch1[i])
  {
  printf("%s is greater\n",ch1);
    return 0;

  }

  else
  {
    printf("strings are equal\n");
  }

  return 0;
}
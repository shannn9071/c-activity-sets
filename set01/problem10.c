#include<stdio.h>
#include<string.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main(){
    char ch1[100],ch2[100];
    input_strings(ch1,ch2);
    int result = compare_strings(ch1,ch2);
    output(ch1,ch2,result);
    return 0;
}
void input_strings(char *ch1, char *ch2){
    printf("Enter the string 1:");
    scanf("%s",ch1);
     printf("Enter the string 2:");
    scanf("%s",ch2);}

int compare_strings(char *ch1, char *ch2)
    {
    int i = 0;
    while (ch1[i] != '\0' && ch2[i] != '\0')
    {
        if (ch1[i] < ch2[i])
            return -1;
        else if (ch1[i] > ch2[i])
            return 1;

        i++;
    }
}

void output(char *ch1, char *ch2, int result){
    if (result == -1)
       printf("%s is greater than %s\n", ch2, ch1);
     else if (result == 1)
       printf("%s is greater than %s\n", ch1, ch2);
    else
       printf("%s is equal to %s\n", ch1, ch2);
    }

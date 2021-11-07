#include<stdio.h>
#include<string.h>


void reverse_array(char arr[])
{
int n = strlen(arr);
for (int i=n-1;i>=0;i--)
    {
        printf("%c", arr[i]);
    }
}

int main()
{
  int n = 0;
  reverse_array("test");
  printf("%d\n", n);
   
return 0;
}





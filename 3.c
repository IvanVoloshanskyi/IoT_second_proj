#include<stdio.h>
#include<string.h>


void reverse(char arr[])
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
  reverse("test");
  printf("%d\n", n);
   
return 0;
}





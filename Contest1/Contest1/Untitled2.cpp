#include "conio.h"
#include "stdio.h"
void nhiphan(int i);
int x[30],k,i;
static int n;
void printresult()
{
        for(int j=0; j<n; j++)
        printf("%d ",x[j]);
      printf("\n");
 
}
 
int main()
{
 
  printf("\Nhap vao do dai cua day: ");
  scanf("%d",&n);
  nhiphan(0);
  return 0;
}
 
void nhiphan(int i)
{
  int k;
    for ( k=0; k<=1; k++)
        {
            x[i] = k;
        if (i== n-1)
                printresult();
        else
            nhiphan(i+1);
 
        }
}

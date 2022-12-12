// program for swaping two no.
#include<stdio.h>
void swap(int x,int y);
int main ()
{
    int a,b;
    printf("Please enter the value of a,b which you want to swap\n");
    scanf("%d%d",&a,&b);
    printf("\nthe value of a before the swap : %d\n",a);
    printf("\nthe value of b before the swap : %d\n",b);
    swap(a,b);
    printf("\nthe value of a after the swap : %d\n",a);
    printf("\nthe value of b after the swap : %d\n",b);
    return 0;
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

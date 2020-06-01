#include<stdio.h>
#include<stdlib.h>
int main()
 { int k,j;int flag;
    int a[5]={3,9,5,7,1};
    for(int i=1;i<5;i++)
    {k=a[i];
        for( j=i-1;j>=0&&a[j]>k;j--)
        {
        a[j+1]=a[j];
         }
        a[j+1]=k;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d,",a[i]);
    }
}


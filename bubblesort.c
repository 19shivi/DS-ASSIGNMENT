#include<stdio.h>
#include<stdlib.h>
int main()
 { int k;int flag;
    int a[5]={15,16,6,8,5};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {if(a[j]>a[j+1])
        {k=a[j+1];
        a[j+1]=a[j];
        a[j]=k ;
        flag=1;
        }}
        if(flag==0)
            break;

    }
    for(int i=0;i<5;i++)
    {
        printf("%d,",a[i]);
    }
}

#include<stdio.h>
#include<string.h>
 void main()
 {
     int string1[]={2,,9,7,6,3};
     int length=strlen(string1);
     printf("%s is sorted as ",string1);
     mergesort(string1,0,length-1);
     printf("%s\n",string1);
     printf("%s is sorted as ",string2);
     length=strlen(string2);
      mergesort(string2,0,length-1);
       printf("\"%s\"\n",string2);
 }

 void mergesort(int str1[],int lb,int ub)
 {   int array[ub-lb];
     if(ub>lb)
     {
        int  mid=(lb+ub)/2;
         mergesort(str1,lb,mid);
         mergesort(str1,mid+1,ub);

         merge(str1,array,lb,mid,ub);
         copy(str1,array,lb,ub);


     }
 }

 void merge(int a1[],int a2[],int lb,int mid,int ub)
 { int k=0;
 int midstart=mid+1;
   while(lb<=mid && midstart<=ub)
   {
       if(a1[lb]<a1[midstart])
       {
           a2[k]=a1[lb];
           lb++;
       }
       else
       {a2[k]=a1[midstart];
        midstart++;
       }
       k++;
   }

 if(lb>mid)
  while(midstart<=ub){
     a2[k]=a1[midstart];
     midstart++;k++;}

 else
    while(lb<=mid)
 {
   a2[k]=a1[lb];
   lb++;k++;
 }
 }
void copy(int a1[],int a2[],int lb,int ub)
{ int k=0;
    for(int i=lb;i<=ub;i++)
    {
        a1[i]=a2[k];
        k++;
    }
}

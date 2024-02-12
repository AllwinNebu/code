#include<stdio.h>
void insertion_sort(int ar[], int n)
 {
    int j, k;
    for(int i=1;i<n;i++) 
    {
        k = ar[i];
        j = i-1;
        while(k<ar[j] && j>=0) 
        {
            ar[j+1] = ar[j];
            --j;
        }
        ar[j+1] = k;
        for(int i=0;i<n;i++)
        {
          printf("%d ",ar[i]);
        }
        printf("\n");
    }
 
 }
void main()
 {
    int ar[20], n;
    printf("Enter the number of items in the array: ");
    scanf("%d",&n);
    printf("Enter the items in the array: ");
    for(int i=0;i<n;i++) 
    {
     scanf("%d",&ar[i]);
    }
    insertion_sort(ar, n);
}
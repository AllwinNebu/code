#include<stdio.h>
struct sparse {
 int row;
 int column;
 int value;
};
struct sparse s[20];

void sparse_matrix( int rows,int col,int ar[rows][col]) {
        int count=0, k=1;;
         for(int i=0;i<rows;i++) 
         {
           for(int j=0;j<col;j++) 
           {
             if(ar[i][j] != 0) 
              {
                s[k].row = i;
                s[k].column = j;
                s[k].value = ar[i][j];
                k++;
                count++;
              }
           }
         }
    s[0].row = rows;
    s[0].column = col;
    s[0].value = count;
        
    printf("\nSparse matrix representation: \n");
    printf("\nRows(%d) Columns(%d) Value(%d)\n",s[0].row,s[0].column,s[0].value);
    for(int i=1;i<k;i++) 
    {
        printf("%d\t %d\t %d\n",s[i].row, s[i].column, s[i].value);
    }
}
void main() {
    int row, column;
    printf("Enter the no. of rows of the matrix: ");
    scanf("%d",&row);
    printf("Enter the no. of columns of the matrix: ");
    scanf("%d",&column);
    int arr[row][column];
    printf("Enter the elements of the matrix: ");
    for(int i=0;i<row;i++)
     {
      for(int j=0;j<column;j++)
       {
         scanf("%d",&arr[i][j]);
       }
     }
    printf("The Given matrix: \n");
    for(int i=0;i<row;i++)
     {
       for(int j=0;j<column;j++)
        {
          printf("%d\t", arr[i][j]);
        }
       printf("\n");
    }
    sparse_matrix(row,column,arr);
}
#include <stdio.h>

int main()
{
    int m,n;       
    printf("Enter the number of rows and column\n");
    scanf("%d %d",&m,&n);    
    int arr[m][n];   
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<m;i++)     
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nElements in the matrix are \n");
    for(int i=0;i<m;i++)     
   {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nRow Sum....\n");
    for(int i=0;i<m;i++)   
    {
        int rsum=0;
        for(int j=0;j<n;j++)
        {
            rsum=rsum+arr[i][j];
        }
        printf("\nSum of all the elements in row %d is %d\n",i,rsum);
    }

     printf("\ncol Sum....\n");
    for(int i=0;i<n;i++)   
    {
        int csum=0;
        for(int j=0;j<m;j++)
        {
            csum=csum+arr[j][i];
        }
        printf("\nSum of all the elements in col %d is %d\n",i,csum);
    }
}
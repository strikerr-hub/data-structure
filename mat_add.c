#include <stdio.h>
int main()
{
    int n,m,i,j;
    printf("Enter the order of each array\n");
    scanf("%d%d",&n,&m);
    printf("Enter the element of first matrix\n");
    int a[n][m],b[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter the elements of second matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        scanf("%d",&b[i][j]);
    }
    printf("Matrix after addition is\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        printf("%d\n",a[i][j]+b[i][j]);
    }
    return 0;
}
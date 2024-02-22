#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void triageBulle(int arr[], int n)
{
    int i, j, temp;
    for(i=n-1; i>=1; i--)
    {
        for(j=0; j<=i-1; j++)
        {
          if(arr[j]>arr[j+1])
          {
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
          }
        }
    }
}
void affichage(int arr[], int n)
{
    int i;
    for(i=0; i<=n-1; i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
}
int main()
{
     int *arr;
    int n, i;
    printf("entrez la taille du tableau: ");
    scanf("%d",&n);
    printf("entrez les elements du tab:\n");
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("tableau non trié:\n");
    affichage(arr, n);
    triageBulle(arr, n);
    printf("tableau  trié:\n");
    affichage(arr, n);
    return 0;
}

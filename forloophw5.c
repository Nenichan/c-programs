#include <stdio.h>
#include<math.h>
int main() 
{
    int x,i,n,p=1;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) 
    {
    p=p+pow(x,i);
    }
    printf("The sum of powers of x from 1 to %d is: %d\n",n,p);
}
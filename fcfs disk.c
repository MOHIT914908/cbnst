#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a;
    scanf("%d",&a);
    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=abs(arr[i]-a);
        a=arr[i];
    }
    printf("toatal is %d",total);
    return 0;
}

#include"stdio.h"

int global_array[128000000];
int main()
{
    freopen("inneg.txt","r",stdin);
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&global_array[i]);

    int low=-7,high=5;
    for(int i=0;i<n;i++)
        global_array[i]+=7;

    int range_array[5+7+1]={0};

    for(int i=0;i<n;i++)
    {
        range_array[global_array[i]]++;
    }
    for(int i=1;i<13;i++)
        range_array[i]+=range_array[i-1];

    int sorted_array[n+1];
    for(int i=n-1;i>-1;i--)
    {
        sorted_array[range_array[global_array[i]]]=global_array[i];
        range_array[global_array[i]]--;
    }

    for(int i=1;i<=n;i++)
        printf("%d ",sorted_array[i]-7);
    return 0;
}

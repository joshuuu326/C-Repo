#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
    int maxRuns=M*36;
    if(maxRuns>=N)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
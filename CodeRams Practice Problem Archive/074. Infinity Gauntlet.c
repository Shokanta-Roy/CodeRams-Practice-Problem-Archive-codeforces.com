#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float a;
        scanf("%f",&a);
        float result= a/2.0;

        printf("%0.1f \n",result);
    }

    return 0;
}

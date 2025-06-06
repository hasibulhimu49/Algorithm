#include<stdio.h>
int main()
{
    int activity[]= {3,1,2,7,8,4,6,5};
    int start[]= {1,1,0,3,4,4,5,2};
    int finish[]= {2,3,4,5,5,6,8,9};

    int n=sizeof(start)/sizeof(start[0]);
    int i,j;
    printf("Following activities are selected \n");
    i=0;
    printf("a%d",activity[i]);
    for(j=1; j<n; j++)
    {
        if(start[j]>=finish[i]);
        {
            printf("a%d",activity[j]);
            i=j;
        }
    }

    return 0;
}

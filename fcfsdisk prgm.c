#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rq[100],i,j,n,totalheadmovement=0,initial;
    printf("Enter the no of requests:\n");
    scanf("%d",&n);
    printf("Enter the requests sequence\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&rq[i]);
    }
    printf("Enter the initial head position\n");
    scanf("%d",&initial);
    printf("sequence of request access:\n");
    for (i=0;i<n;i++)
    {
        printf("%d ",rq[i]);
           totalheadmovement=totalheadmovement+abs(rq[i]-initial);
           initial=rq[i];
    }
       printf("\nTotal head movement is %d\n",totalheadmovement);
    return 0;
    }
OUTPUT:
Enter the no of requests:
7
Enter the requests sequence
82
170
43
140
24
16
190
Enter the initial head position
50
sequence of request access:
82 170 43 140 24 16 190 
Total head movement is 642
[1] + Done     
    

#include <stdio.h>
#include<string.h>
int main()
{
    struct fcfs{
        char pn[100];
        int bt,wt,tat;
    }b[100];
    int sum1=0,sum2=0,i,n;
    float avg1=0,avg2=0;
    printf("Enter number of processes:\n");
    scanf("%d",&n);
    printf("Enter process names and burst times:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%s",&b[i].pn);
        scanf("%d",&b[i].bt);
    }
    b[1].wt=0;
    char t2[100];
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=n;i++)
        {
            if(b[i].bt>b[i+1].bt)
            {
                
                //strcpy(
                int temp=b[i].bt;
                b[i].bt=b[i+1].bt;
                b[i+1].bt=temp;
            
            strcpy(t2,b[i].pn);
            strcpy(b[i].pn,b[i+1].pn);
            strcpy(b[i+1].pn,t2);
            }
        }
    }
    for(i=1;i<=n;i++)
    {
      b[i+1].wt=b[i].bt+b[i].wt;
      b[i].tat=b[i].wt+b[i].bt;
      //b[i+1].wt
    }
    printf("pn\tbt\twt\ttat\n");
    for(i=1;i<=n;i++)
    {
        sum1+=b[i].wt;
        sum2+=b[i].tat;
        printf("%s\t%d\t%d\t%d\n",b[i].pn,b[i].bt,b[i].wt,b[i].tat);
    }
    avg1=(float)sum1/n;
    avg2=(float)sum2/n;
    printf("Sum of waiting time: %d\nAverage of waiting time: %.2f\n",sum1,avg1);
    printf("Sum of turnaround time: %d\nAverage of turnaround time: %.2f\n",sum2,avg2);
    return 0;
}

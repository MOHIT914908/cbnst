#include<stdio.h>
int main()
{
int at[10],bt[10],rt[10],sum,i,small;
int j=0,n,time,avgwt=0,avgtat=0;
printf("Enter no of Processes : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter at for Process P%d : ",i+1);
scanf("%d %d",&at[i],&bt[i]);
rt[i]=bt[i];
}
printf("\n\nProcess\tat\tbt\t Turnaround Time Waiting Time\n\n");
rt[9]=9999;
for(time=0;j!=n;time++)
{
small=9;
for(i=0;i<n;i++)
{
if(at[i]<=time && rt[i])
{
small=i;
}
}
rt[small]--;
if(rt[small]==0)
{
    j++;
sum=time+1;
printf("\nP[%d]\t%d\t%d \t%d\t \t%d",small+1,at[small],bt[small],sum-at[small],sum-bt[small]-at[small]);
avgwt+=sum-bt[small]-at[small];
avgtat+=sum-at[small];

}
}
printf("\n\nAverage waiting time = %f\n",avgwt*1.0/n);
printf("Average Turnaround time = %f",avgtat*1.0/5);
return 0;
}

#include<stdio.h>
struct g{
int pid;
int at;
int bt;
int ct;
int tat;
int wt;
};
int main(){
 int n;
 printf("enter the number of process\n");
 scanf("%d",&n);
 printf("enter arrival and burst time \n");
 struct g arr[n],t;
 for(int i=0;i<n;i++)
 {
 arr[i].pid=i+1;
 scanf("%d%d",&arr[i].at,&arr[i].bt);
 }
 for(int i=0;i<n;i++)
 {
 for(int j=0;j<n-1;j++)
 {
 if(arr[j].at>arr[j+1].at)
 {
 t=arr[j];
 arr[j]=arr[j+1];
 arr[j+1]=t;
 }
 }
 }
 int sum=0;
 for(int i=0;i<n;i++)
 {
 if(arr[i].at>sum)
 {
 sum+=arr[i].bt+arr[i].at-sum;
 }
 else{
 sum+=arr[i].bt;}
 arr[i].ct=sum;
 arr[i].tat=arr[i].ct-arr[i].at;
 arr[i].wt=arr[i].tat-arr[i].bt;
 
 }
 for(int i=0;i<n;i++)
 {
 for(int j=0;j<n-1;j++)
 {
 if(arr[j].pid>arr[j+1].pid)
 {
 t=arr[j];
 arr[j]=arr[j+1];
 arr[j+1]=t;
 }
 }
 }
 for(int i=0;i<n;i++)
 {
 printf("%d %d %d %d %d %d \n",arr[i].pid,arr[i].at,arr[i].bt,arr[i].ct,arr[i].tat,arr[i].wt);
 }

 return 0;
 }
 

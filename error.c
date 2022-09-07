#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double truncate(double x){
double p=x;
p=x*10000;
p=(int)(p);
p/=10000;
printf("trancate no. is %f",p);
return p;


}
double roun(double x){
double p=x;
p=x*10000;
p=(int)(p+0.5);
p/=10000;
printf("round off no. is %f",p);
return p;
}

int main(){
double x,y;
double ea,er,ep;
printf("enter the number\n");
scanf("%lf",&x);
 int choice;
 printf("enter your choice \n1.truncate \n2.roundoff\n3.exit\n");
 scanf("%d",&choice);
 switch(choice){
 case 1: y=truncate(x);
             break;
 case 2:y=roun(x);
             break;
case 3: break;
default:printf("wrong choice");
             break;
 }
  ea=fabs(x-y);
 printf("absolute error is %lf\n ",ea);
 
 er=ea/x;
 printf("relative error is %lf\n",er);
 
 ep=er*100;
 printf("percentage error is %lf\n",ep);
 
 }

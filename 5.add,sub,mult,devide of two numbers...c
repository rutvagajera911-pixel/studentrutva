#include<stdio.h>
int main(){
int num1,num2;
int sum,sub,mult;
float div;
printf("enter first number");
scanf("%d",&num1);
printf("enter second number");
scanf("%d",num2);
sum=num1+num2;
sub=num1-num2;
mult=num1*num2;
if(num2!=0){
    div=(float) num1/num2;
}else{
printf("ERROR:DIVISION BY ZERO IS NOT ALLOWES\n");
return 1;
}
printf("sum:%D\n",sum);
printf("difference:%d\n",sub);
printf("product:%d\n",mult);
printf("quotient:%.2f",div);
return 0;
}

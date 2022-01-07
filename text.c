// 1) To find the average between three numbers 

#include <stdio.h>
void main(){
    int a,b,c, avg, , sum;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    sum = a+b+c;
    avg = sum/3;
    printf(the average of three numbers "%d", avg);
}


// 2) To find graetest number among three usinf if and else conditions 
  #include <stdio.h>
void main() {
int a,b,c;
a=100;
b=200;
c=300;
if (a>b && a>c){   //here the ambasent (&&) shows that the both conditions to be satisfy 
printf("a is the greatest no");
}else if{(b>a && b>c)
printf("b is the greatest no");
}else{
printf("c is the greatest no");
     }
 }

// 3) To find the reqired person by using switch case
#include <stdio.h>
void main()
{
int x ;
printf("Enter your number");
scanf("%d",&x);
switch (x)
{
case 1: printf("your are come in ");
break;
case 2: printf("your are come in");
break;
case 3: printf("your are come in");
break;
default: printf("you have to enroll to the system ");
break; 
} }

// 4) Looping the number from 1 to any number by using for loop
#include <stdio.h>
void main() {
int x;
for(x=0;x<=10;x++)
{printf("x=%d\n", x);
if (x==4)
break;
} }
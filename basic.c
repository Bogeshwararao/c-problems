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

// here in whiole loop we have three 
// a)for,   b)while ,   c) do while    
// 4.1) For  Looping the number from 1 to any number by using for loop
#include <stdio.h>
void main() {
int x;
for(x=0;x<=10;x++)
{printf("x=%d\n", x);
if (x==4)
break;     // here the break is to stop when (x==4);
} }

//4.2) For  Looping the number from 1 to any number by using while loop
#include <stdio.h>
void main() {
int x;
x=0;
while(x<=10)
{ 
printf("x=%d\n", x);
x++;  // in  while loop we will declare the increment at last
if (x==4)
break; } }
//4.3)  For  Looping the number from 1 to any number by using do while loop
#include <stdio.h>
void main() {
int x;
x=0;
do{ 
printf("x=%d\n", x);
x++;
if (x==4)
break;
}while(x<=5); }
// here we have done some problems in (intermediate.c) file go and check ;



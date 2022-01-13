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

// strings in c 
// 5.1) string length by using strlen();
#include<stdio.h> 
#include <string.h> 
int main(){
char ch[20]= {'c', 's', 'e', '\0'}; }; 
printf("Length of string is: %d",strlen(ch)); 
return 0;
}
//5.2) To combine strings strcat()
#include<stdio.h> 
#include <string.h> 
int main(){
char ch[10]={'h', 'e', 'l', 'l', 'o', '\0'}; 
char ch2[10]={'c', '\0'}; 
strcat(ch,ch2);
printf("Value of first string is: %s",ch); 
return 0;
}// 5.3) To compare strings equal are not strcmp();
#include<stdio.h> 
#include <string.h> 
int main(){
char str1[20],str2[20]; 
printf("Enter 1st string: ");
gets(str1);//reads string from console 
printf("Enter 2nd string: "); 
gets(str2);
if(strcmp(str1,str2)==0) 
printf("Strings are equal");
else
printf("Strings are not equal");
return 0;
// 5.4) To reverse string strrev;
#include<stdio.h>
#include <string.h> 
int main(){
char str[20]; 
printf("Enter string: ");
gets(str);//reads string from console 
printf("String is: %s",str); 
printf("\nReverse String is: %s",strrev(str));
return 0;
}
// 5.5) To get string upper case strupr();
#include<stdio.h> 
#include <string.h> 
int main(){
char str[20]; 
printf("Enter string: ");
gets(str);//reads string from console 
printf("String is: %s",str);
printf("\nUpper String is: %s",strupr(str)); 
return 0;
}
// 5.6) To get string lower case strlwr()
#include<stdio.h> 
#include <string.h> 
int main(){
char str[20]; 
printf("Enter string: ");
gets(str);//reads string from console 
printf("String is: %s",str);
printf("\nLower String is: %s",strlwr(str)); 
return 0;
}





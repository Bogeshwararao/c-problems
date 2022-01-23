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
// structure from here :)
#include<stdio.h> 
#include <string.h> 
struct employee
{ int id;
char name[50];
}e1; //declaring e1 variable for structure //
int main( )
{
//store first employee information //
e1.id=101;
strcpy(e1.name, "abc");//copying string into char array//
//printing first employee information //
printf( "employee 1 id : %d\n", e1.id);
printf( "employee 1 name : %s\n", e1.name); 
return 0;
}
// 1.1) nested structure 
#include<stdio.h>
struct address
{
char city[20]; 
int pin;
char phone[14];
};
struct employee
{
char name[20]; 
struct address add;
};
void main ()
{
struct employee emp;
printf("Enter employee information?\n");
scanf("%s %s %d %s",emp.name,emp.add.city, &emp.add.pin, emp.add.phone); 
printf("Printing the employee information. ..\n");
printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s",emp.name,emp.add.city,emp.add. 
pin,emp.add.phone;
}
//1.2)) 
#include <stdio.h> 
#include <string.h> 
struct Employee
{
int id;
char name[20]; 
struct Date
{
int dd; 
int mm; 
int yyyy;
}doj;
}e1;
int main( )
{
//storing employee information 
e1.id=101;
strcpy(e1.name, "Sonoo Jaiswal");//copying string into char array 
e1.doj.dd=10;
e1.doj.mm=11; 
e1.doj.yyyy=2014;
//printing first employee information 
printf( "employee id : %d\n", e1.id); 
printf( "employee name : %s\n", e1.name);
printf( "employee date of joining (dd/mm/yyyy) : %d/%d/%d\n", e1.doj.dd,e1.doj.mm,e1.doj.yyyy);
return 0;
}
// an array of structures that stores information of 5 students and prints it
#include<stdio.h> 
#include <string.h> 
struct student{
int rollno;
char name[10];
};
int main(){ 
int i;
struct student st[5];
printf("Enter Records of 5 students"); 
for(i=0;i<5;i++){
printf("\nEnter Rollno:");
scanf("%d",&st[i].rollno); 
printf("\nEnter Name:"); 
scanf("%s",&st[i].name);
}
printf("\nStudent Information List:"); 
for(i=0;i<5;i++){
printf("\nRollno:%d, Name:%s",st[i].rollno,st[i].name);
}
return 0;
}
// PASSING STRUCTURE TO FUNCTION IN C BY ADDRESS
#include <stdio.h> 
#include <string.h>
struct student
{
int id;
char name[20]; 
float percentage;
};
void func(struct student *record);
int main()
{
struct student record;
record.id=1; 
strcpy(record.name, "Raju"); 
record.percentage = 86.5;
func(&record); 
return 0;
}
void func(struct student *record)
{
printf(" Id is: %d \n", record->id); 
printf(" Name is: %s \n", record->name);
printf(" Percentage is: %f \n", record->percentage);
}
// pointers in c 
#include <stdio.h>
void main(){
  int a=10;
  printf("value of the varible var is: %d", a);
  printf("memory adress of the varible var is: %x", &a);
}

#include <stdio.h>
int main()
{
int i = 10; // normal integer variable storing value 10 
int *a; // since '*' is used, hence its a pointer variable 
a = &i;
/*
below, address of variable 'i', which is stored 
by a pointer variable 'a' is displayed
*/
printf("Address of variable i is %u\n", a);
/*
below, '*a' is read as 'value at a' 
which is 10
*/
printf("Value at the address, which is stored by pointer variable a is %d\n",*a); 
return 0;
}
// pointers using array
#include <stdio.h> 
const int MAX = 3; 
int main () {
int var[] = {10, 100, 200};
int i;
for (i = 0; i < MAX; i++) {
printf("Value of var[%d] = %d\n", i, var[i] );
}
return 0;
}
// pointers using array in strings
#include <stdio.h> 
const int MAX = 4; 
int main () {
char *names[] = { 
"ABCD",
"EFGH",
"IJKL",
"MNOP"
};
int i = 0;
for ( i = 0; i < MAX; i++) {
printf("Value of names[%d] = %s\n", i, names[i] );
}
return 0;
}

// pointers using strutures
#include <stdio.h>
#include <string.h>
struct student{
  int id;
  char name[30];
  float percentage;
};
int main(){
  int i;
  struct student record1={1, "abish", 99};
  struct student *ptr;
  ptr = &record1;
     printf("Record of the student 1:");
     printf("Id : %d",ptr->id);
     printf("Name: %s",ptr->name);
     printf("percentage : %f",ptr->percentage);
     return 0;
}



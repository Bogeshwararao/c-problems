// 1) c proggram to factorial of a given number is :
#include <stdio.h>
int main() {
    int n, fac=1,i ;
    scanf("%d", &n);
        for(i=1;i<=n;i++){
            fac = fac*i;
        }
    printf("the factorial of the number %d is %d", n , fac );
    return 0;
}  

// 2) fibonacci sequence  :
#include<stdio.h> 
void main() 
{ 
int n1=0,n2=1,n3,i,number; 
printf("Enter the no of elements:"); 
scanf("%d",&number); 
printf("\n%d %d",n1,n2);
for(i=2;i<number;++i) { 
n3=n1+n2; 
printf(" %d",n3); 
n1=n2; 
n2=n3; 
} }

// 3) To reverse the given number is :
#include<stdio.h> 
void main() 
{ 
int n, rev=0, rem; 
printf("Enter a no: "); 
scanf("%d", &n); 
while(n!=0){
    rem= n%10;
    rev= rev*10+rem;
    n=n/10;
}
printf("reversed No: %d",rev);
}
// 4) problem to find GCD of two numbers:  
#include <stdio.h>
int main() {
    int n1, n2 ,i, gcd;
    printf("enter the numbers \n");
    scanf("%d %d", &n1 , &n2);
    for(i=1;i<=n1 && i<=n2; i++){
        if(n1%i==0 && n2%i==0)
        gcd=i;
    }
    printf("Gcd of %d and %d is = %d",n1,n2,gcd);
    return 0;
}
// 5)  Program to find Exponentiation:
#include <stdio.h>
#include <math.h>       //using math function we write directly pow(x,y);
int main() {           // if u want the expo in point integer value use double function to get; 
    int x , y;
    scanf("%d %d", &x , &y);
    int result = pow(x,y);
    printf("%d", result);
    return 0;
}
// 6) program to find the sum and average; 
#include <stdio.h>
int main(){
int marks[10], i, n, sum = 0, average; 
printf("Enter n: ");
scanf("%d", &n); 
for(i=0; i<n; ++i)
{
printf("Enter number%d: ",i+1); 
scanf("%d", &marks[i]);  
sum += marks[i];  
}
average = sum/n; 
printf("Average = %d", average); 
return 0;  
}
//  7) C Program for deletion of an element from the specified location from an Array
#include <stdio.h> 
int main()
{
int arr[30], num, i, loc; 
printf("\nEnter no of elements:");
scanf("%d", &num); //Read elements in an array 
printf("\nEnter %d elements :", num);
for (i = 0; i < num; i++)
{
scanf("%d", &arr[i]);  //Read the location
 }  
printf("\nLocation of the element to be deleted :"); 
scanf("%d", &loc); 
while (loc < num)
{ 
arr[loc - 1] = arr[loc]; loc++;
} num--; // No of elements reduced by 1
//Print Array
for (i = 0; i < num; i++) 
printf("\n %d", arr[i]); 
return (0);
}

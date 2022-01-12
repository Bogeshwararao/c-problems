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
// ARRAY PROBLEMS FROM HERE :)
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
// 8) C Program to delete duplicate elements from an array
#include <stdio.h>
int main()
{
int arr[20], i, j, k, size; 
printf("\nEnter array size: "); 
scanf("%d", &size); 
printf("\nAccept Numbers: "); 
for (i = 0; i < size; i++) 
scanf("%d", &arr[i]);
printf("\nArray with Unique list: "); 
for (i = 0; i < size; i++)
{
for (j = i + 1; j < size;)
{
if (arr[j] == arr[i])
{
for (k = j; k < size; k++)
{
arr[k] = arr[k + 1];
}
size--;
}
else j++;
} }
for (i = 0; i < size; i++)
{
printf("%d ", arr[i]);
}
return (0); }
// 9)C Program to find smallest element in an array
#include<stdio.h> 
int main()
{
int a[30], i, num, smallest; 
printf("\nEnter no of elements :");
scanf("%d", &num); //Read n elements in an array 
for (i = 0; i < num; i++)
scanf("%d", &a[i]); //Consider first element as smallest 
smallest = a[0];
for (i = 0; i < num; i++)
{
if (a[i] < smallest) { smallest = a[i];
} }
// Print out the Result
printf("\nSmallest Element : %d", smallest); 
return (0);
}
// 10)C Program to find largest element in an array
#include int main()
{
int a[30], i, num, largest; 
printf("\nEnter no of elements :");
scanf("%d", &num); //Read n elements in an array 
for (i = 0; i < num; i++)
scanf("%d", &a[i]);
//Consider first element as largest 
largest = a[0];
for (i = 0; i < num; i++)
{
if (a[i] > largest)
{ largest = a[i]; }
}
// Print out the Result
printf("\nLargest Element : %d", largest); 
return (0);
}
// 11) C Program to reverse an array elements in an array
#include<stdio.h> 
int main()
{ int arr[30], i, j, num, temp; 
printf("\nEnter no of elements : "); 
scanf("%d", &num);
//Read elements in an array 
for (i = 0; i < num; i++)
{ scanf("%d", &arr[i]);
}
j = i - 1; // j will Point to last Element
i = 0; // i will be pointing to first element 
while (i < j)
{
temp = arr[i]; 
arr[i] = arr[j]; 
arr[j] = temp;
i++; // increment i 
j--; // decrement j
}
//Print out the Result of Insertion 
printf("\nResult after reversal : "); 
for (i = 0; i < num; i++)
{
printf("%d \n", arr[i]);
}
return (0);
}


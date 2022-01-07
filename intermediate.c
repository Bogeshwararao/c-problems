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
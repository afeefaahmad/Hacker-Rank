#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,ar[20],i; 
    //capacity of arrray ar is 20
    //n is the size of array
    long int sum=0;    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        //taking array as input from user  
    } 
    
    for(i=0;i<n;i++)  //traversing array
    {
        sum=sum+ar[i];  
    }  
    printf("%ld",sum);
return 0;
}

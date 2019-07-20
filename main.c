/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

#define max 100
int flag =0; 
int main()
{
    
    int a[max],n,k, i =0, flag=0;
    printf("Enter the no of elements in array");
    scanf("%d",&n);
    printf("Enter the elements in the array");
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the no that need to searched");
    scanf("%d",&k);
    while(i<n )
    {  // int flag =0 ;
        if(a[i]==k)
        {
            flag = 1 ;
            printf("The no is found at index %d",i);
            break ;
        }
        else 
            {i++;
                flag=0;
            }
        
         
    }
   if(flag==0)
    printf("Value not found in the array");
    
}


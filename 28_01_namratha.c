/*Author Name=Namratha karkera
Date = 10/8/2023
Branch = I.T.
Roll No=28
Program =01
Description=Write a function that compares two arrays and returns 1 if they are identical and 0
otherwise.
*/

#include <stdio.h>
int fib(int a){
    if(a==0|| a==1){
        return a;
    }

else{
    return fib(a-2)+fib(a-1)
}
}

void main(){
    int n,a=0,count=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(fib(a)==n){
            count++;
            break;
        }
        a++;
    }
    if (count !=0){
        printf("FIBONACCI SERIES");
    }
    else{
        printf("NOT A FIBONACCI SERIES");
    }
}

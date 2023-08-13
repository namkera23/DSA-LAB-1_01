Author Name=Namratha Karkera
Date = 10/8/2023
Branch = I.T.
Roll No=28
Program =06
Description=Write a menu driven program to perform the following operations in an ARRAY
1. INSERT
2. DELETE
3. TRAVERSE
4. SEARCH
*/

#include <stdio.h>
int st[5];
int top=-1;
void push()
void pop()
void display()
void main()
{
    int ch ;
    do{
        printf("enter the input\n1.pop\n2.push\n3.display\n4.end\n");
        scanf("%d",&ch)
        switch(ch)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: printf("end");
            break;
            default: printf("invalid");
        }
    }while(ch !=4)
}
void push()
{
    if(top==4)
    printf("the stack is full\n");
    else
    top++;
    printf("enter the number you want to push ");
    scanf("%d",&st[top]);
}
void pop()
{
    if (top==-1)
    printf("the stack is emty\n");
    else
    top --;
}
void display()
{
    int i;
    if (top==-1)
    printf("the stack is emty\n");
    else
    for(i=0;i<top;i++)
    printf("%d\n",st[i]);
}

/*Author Name=Namratha karkera
Date = 118/2023
Branch = I.T.
Roll No=28
Program =13
Desription: Array Implementation of Circular Queue
*/

#include<stdio.h>
#include<stdlib.h>
#define n 10
void enqueue(int x);
void dequeue();
void display();
int f=-1;
int r=-1;
int queue[n];
void main(){
    int ch,x;
    while(1){
        printf("\n----Queue Operations----\n");
        printf("1. Enqueue Element\n");
        printf("2. Dequeue Element\n");
        printf("3. Display Elements\n");
        printf("4. Exit\n");
    printf("Enter Number:\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            printf("\nEnter Element to be Inserted: ");
            scanf("%d",&x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Invalid Number.\n");
        }
    }
}
void enqueue(int x){
    if((f==0 && r==n-1) || f==r+1){
        printf("Queue is Full.\n");
    }
    else{
        if(f==-1 && r== -1){
            f++;
            r++;
            queue[r]=x;
            printf("Element %d has been inserted.\n",x);
        }
        else{
            r=(r+1)%n;
            queue[r]=x;
            printf("Element %d has been inserted.\n",x);
        }
    }
}
void dequeue(){
    if(f==-1 && r== -1){
        printf("Queue is Empty.");
    }
    else{
        if(f==r){
            f=-1;
            r=-1;
        }
        else{
            f=(f+1)%n;
            printf("Element has been deleted.\n");
        }
    }
}
void display(){
    if(f==-1 && r== -1){
        printf("Queue is Empty.");
    }
    else{
        printf("Elements are:\n");
        for(int i=f;i<=r;i++){
            printf("%d\n",queue[i]);
        }
    }
}

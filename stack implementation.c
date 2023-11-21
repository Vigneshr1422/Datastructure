#include<stdio.h>
int stack[10],choice,n,top,x,i; // Declaration of variables
void push();
void pop();
void display();
int main()
{
 top = -1;     // Initially there is no element in stack
 printf("\n Enter the size of STACK : ");
 scanf("%d",&n);
 printf("\nSTACK IMPLEMENTATION USING ARRAYS\n");
 do
 {
 printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
 printf("\nEnter the choice : ");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 {
 push();
 break;
 }
 case 2:
 {
 pop();
 break;
 }
 case 3:
 {
 display();
 break;
 }
 case 4:
 {
 break;
 }
 default:
 {
 printf ("\nInvalid Choice\n");
 }}}
 while(choice!=4);
 return 0;
}

void push()
{
 if(top >= n - 1)
 {
 printf("\nSTACK OVERFLOW\n");
 }
 else
 {
 printf("Enter a value to be pushed : ");
 scanf("%d",&x);
 top++;             // TOP is incremented after an element is pushed
 stack[top] = x;   // The pushed element is made as TOP
 }}
void pop()
{
 if(top <= -1)
 {
 printf("\nSTACK UNDERFLOW\n");
 }
 else
 {
 printf("\nThe popped element is %d",stack[top]);
 top--;     //  Decrement TOP after a pop
 }}
void display()
{
 if(top >= 0)
 {
   //  Print the stack
 printf("\nELEMENTS IN THE STACK\n\n");
 for(i = top ; i >= 0 ; i--)
 printf("%d\t",stack[i]);
 }
 else
 {
 printf("\nEMPTY STACK\n");
 }}


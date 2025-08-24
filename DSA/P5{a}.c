 /*AIM:Implement two stacks in a using single array
 a) Without using switchcase*/
 
 #include <stdio.h>
 #define N 5
 int stack[N];
 int top=-1;
 void push(){
 int x;
 printf("Enter Element:");
 scanf("%d", &x);
 if (top==N-1){
 printf("\nOverflow!\n");
 }
 else{
 top++;
 stack[top]=x;
 }
 }
 void pop(){
 if (top==-1){
 printf("\nUnderflow!\n");
 }
 else{
 int x=stack[top];
 top--;
 printf("Popped Element: %d\n", x);
 }
 }
 void display() {
 if (top ==-1) {
 printf("Stack is empty!\n");
 } else {
 printf("\nStack elements are:\n");
 for (int i = top; i >= 0; i--) {
 printf("%d\n", stack[i]);
 }
}
 }
 int main()
 {
 push();
 push();
 push();
 push();
 push();
 push(); // this will show overflow error
 pop();
 pop();
 pop();
 pop();
 pop();
 pop(); // this will show underflow error
 return 0;
 }
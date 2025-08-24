/*b) with using switchcase*/

 #include <stdio.h>
 #define N 5
 int stack[N];
 int top=-1;
 void push(){

    int x;
    printf("Enter Element:");
    scanf("%d", &x);
    if (top==N-1){

        printf("Overflow!");
        }
    else{
        top++;
        stack[top]=x;
        }
    }
    void pop(){
        if (top==-1){
        printf("Underflow!");
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
            printf("Stack elements are:\n");
            for (int i = top; i >= 0; i--) {
                printf("%d\n", stack[i]);
                }
            }
    }
    int main() {
        int choice;
        while (1) {
            printf("\nMENU:\n");
            printf("1. Push\n");
            printf("2. Pop\n");
            printf("3. Display\n");
            printf("4. Exit\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice) {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            return 0;
            default:
            printf("Invalid choice!\n");
        }
    }
}
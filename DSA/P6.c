/*PROGRAMNUMBER-6
 AIM:Create a stack and perform push(), pop(), peek() and traverse() operations on the
 stack using linked list.*/
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>
 struct Node
 {
    int data;
    struct Node* next;
 };
 struct Node* createNode(int value)
 {
    struct Node* newNode = (struct Node*)(malloc(sizeof(struct Node)));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
 }
 struct Node* head = NULL;
 void push()
 {
    int value;
    printf("Enter value to push : ");
    scanf("%d", &value);
    if (head == NULL)
    {
        struct Node* newNode = createNode(value);
        head = newNode;
        printf("%d pushed to an empty stack", value);
        return;
    }
    else
    {
        struct Node* newNode = createNode(value);
        newNode->next = head;
        head = newNode;
        printf("%d pushed to the stack", value);
        return;
    }
 }
 void pop()
 {
    if (head == NULL)
    {
        printf("\nUnderflow!");
        return;
    }
    else
    {
        struct Node* temp = head;
        int deletedValue = temp->data;
        head = head->next;
        free (temp);
        printf("%d popped from the stack", deletedValue);
        return;
    }
 }
 void peek()
 {
    if (head == NULL)
    {
        printf("Stack is empty");
        return;
    }
    printf("Value at the top of the stack is : %d", head->data);
 }
 void display()
 {
    if (head == NULL)
    {
        printf("Stack is empty");
        return;
    }
    struct Node* temp = head;
    printf("Stack elements are : ");
    while (temp != NULL)
    {
        printf("%d-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
 }
 int main()
 {
    while (true)
    {
        printf("\n\n*MAIN MENU*\n\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT");
        int option;
        printf("\n\nEnter your option : ");
        scanf("%d",&option);
        switch(option)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5:
            {
            }
            printf("\nProgram exited successfully");
            return 0;
            default: printf("\nPlease enter a valid option");
        }
    }
 }

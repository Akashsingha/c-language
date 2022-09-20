#include <stdio.h>
#include <conio.h>

int stack[10], pos, top = -1, value;

int push(int);  // Add a element
void pop();     // Delet a element
void display(); // Display the stack
void peek();    // Display the top elememt

int main()
{
    int option;
    printf("\n\n\t\t*****STACK OPERATION USING ARRAY*****\n");
    do
    {
        puts("\n\n******MAIN MENU*****");
        printf("\n1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n5. EXIT\n\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf(" Enter the number to be pushed on stack:\t");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            getch();
            break;
        case 5:
            printf("\t'Exit'\n");
            break;
        default:
            printf("Invalid input!!");
            break;
        }

    } while (option != 5);

    return 0;
}

// Inserting a number (PUSH FUNCTION)

int push(int value)
{
    top++;
    stack[top] = value;
    printf("\n%d is Pushed in the stack:\t Succesfully!!!\n", value);
}

// Deleting a number (POP FUNCTION)

void pop()
{
    printf("\tYou deleted \t%d", stack[top]);
    top--;
}

// Displaying all the element (DISPLAY FUNCTION)

void display()
{
    if (top == -1)
        printf("\nStack is empty\n");
    else
    {
        printf("\n");
        for (int i = top; i >= 0; i--)

            printf("\t\t%d.  |%2d|\n", i, stack[i]);
    }
}

void peek()
{
    if (top == -1)
        printf("Stack is empty:\n");
    else
        printf("\tTop most element is : %d", stack[top]);
}
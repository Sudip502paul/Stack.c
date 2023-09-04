#include <stdio.h>  
#include <stdlib.h>  

#define SIZE 4  
int top = -1, inp_array[SIZE];

void push()  
{  
    int x;  
    if (top == SIZE - 1)  
    {  
        printf("\nOverflow!!");  
    }  
    else  
    {  
        printf("\nEnter the element to be added onto the stack: ");  
        scanf("%d", &x);  
        top = top + 1;  
        inp_array[top] = x;  
    }  
}

void pop()  
{  
    if (top == -1)  
    {  
        printf("\nUnderflow!!");  
    }  
    else  
    {  
        printf("\nPopped element: %d\n", inp_array[top]);  
        top = top - 1;  
    }  
}

void peak()  
{  
    if (top == -1)  
    {  
        printf("\nUnderflow!!");  
    }  
    else  
    {  
        printf("\nElements present in the stack: \n");  
        for (int i = top; i >= 0; --i)  
            printf("%d\n", inp_array[i]);  
    }  
}

int main()  
{  
    int choice;  

    while (1)  
    {  
        printf("\nWhat to do on the stack:");  
        printf("\n1.Push\n2.Pop\n3.Peak\n4.Exit");  
        printf("\n\nEnter the choice: ");  
        scanf("%d", &choice); 

        switch (choice)  
        {  
        case 1:  
            push();  
            break;  
        case 2:  
            pop();  
            break;  
        case 3:  
            peak();  
            break;  
        case 4:  
            exit(0);  
        default:  
            printf("\nError!! Choose Correctly\n");  
        }  
    }  

    return 0;
}  
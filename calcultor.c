#include <stdio.h>
/*
Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
is pressed.
Example:
Input/Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit
*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*--*-*-*-*-*-*-*-*-*---*-*--*--*--*--*--*-
Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit
Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit
Enter your choice: 0
*/
float Addition(float a, float b) 
{
    return a + b;
}


float Subtraction(float a, float b) 
{
    return a - b;
}


float Multiplication(float a, float b) 
{
    return a * b;
}

int Modul(int a, int b) 
{
    return a % b;
}

float Division(float a, float b)
{
    if (b != 0) 
	{
        return a / b;
    } 
	else 
	{
        printf("Error=> Cannot divide by zero\n");
        return 0;
    }
}

int main() 
{
    int choice;
    float n1, n2, res;

	do
	{
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for %%\n");
        printf("Press 5 for /\n");
        printf("Press 0 to exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("_*-*_*-*_*-_*-_*-_*-_*-_*-_*-_*-_*-_*-_*-_*-_*-_*-_*-_*---==== >\n");

        if (choice == 0) 
		{
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%f", &n1);
        printf("Enter the second number: ");
        scanf("%f", &n2);

        switch (choice) 
		{
            case 1:
                res = Addition(n1, n2);
                printf("Addition of %.1lf and %.1lf is %.1lf\n", n1, n2, res);
                break;
            case 2:
                res = Subtraction(n1, n2);
                printf("Subtraction of %.1lf and %.1lf is %.1lf\n", n1, n2, res);
                break;
            case 3:
                res = Multiplication(n1, n2);
				printf("Multiplication of %.1lf and %.1lf is %.1lf\n", n1, n2, res);
                break;
            case 4:
                res = Modul(n1, n2);
                printf("Modul of %.1lf and %.1lf is %.1lf\n", n1, n2, res);
                break;
            case 5:
            	res = Division(n1,n2);
            	printf("Division of %.1lf and %.1lf is %.1lf\n", n1, n2, res);
            	break;
            default:
                printf("Invalid choice. Please select a valid operation.\n");
                break;
        }

        printf("res: %.1f\n\n", res);
    }while(1); 


    return 0;
}
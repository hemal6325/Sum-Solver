#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define note "You Entered Invalid Operation."

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();

int main()

{
    printf("\n  \tWelcome To The [Sum Solver] Calculator!! \n\n");

    printf("\tDepartment of Software Engineering.\n \n");

    printf("\tCopyright : \n");
    printf("\tMD Rohejul Islam Hemal - 2023 - All Rights Reserved. \n \n \n");

    int choice;

    printf("\n \t******* Press 0 to Quit The Program ********\n\n");
    printf("\t> 01 --------------------------- Addition. \n");
    printf("\t> 02 --------------------------- Substraction. \n");
    printf("\t> 03 --------------------------- Multiplication. \n");
    printf("\t> 04 --------------------------- Division. \n");
    printf("\t> 05 --------------------------- Modulus.\n");
    printf("\t> 06 --------------------------- Power. \n");
    printf("\t> 07 --------------------------- Factorial. \n");
    printf("\t> 08 --------------------------- Square. \n");
    printf("\t> 09 --------------------------- Cube. \n");
    printf("\t> 10 --------------------------- Square Root. \n\n");

    while(1)
    {
        printf("\n\n \tEnter The Operation You Want To Do : ");

        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            modulus();
            break;
        case 6:
            power();
            break;
        case 7:
            factorial();
            break;
        case 8:
            square();
            break;
        case 9:
            cube();
            break;
        case 10:
            squareroot();
            break;
        case 0:
            exit(0);

        default:
            printf("\n********** %s ***********\n",note);
        }

    }
    return 0;
}

void addition()
{
    int a,b;

    printf("\n\tEnter The First Number : ");
    scanf("%d",&a);

    printf("\tEnter The Second Number : ");
    scanf("%d",&b);

    printf("\n\tThe Addition Of A and B Is %d\n",a+b);
}

void subtraction()
{
    int a,b;

    printf("\n\tEnter The First Number : ");
    scanf("%d",&a);

    printf("\tEnter The Second Number : ");
    scanf("%d",&b);
    printf("\n\tThe Subtraction Of A and B Is %d\n",a-b);
}

void multiplication()
{
    int a,b;

    printf("\n\tEnter The First Number : ");
    scanf("%d",&a);

    printf("\tEnter The Second Number : ");
    scanf("%d",&b);

    printf("\n\tThe Multiplication Of A and B Is %d\n",a*b);
}

void division()
{
    float a,b;

    printf("\n\tEnter The First Number : ");
    scanf("%d",&a);

    printf("\t Enter The Second Number : ");
    scanf("%d",&b);

    printf("\n\tThe Division Of A and B Is %0.1f\n",(float)a/(float)b);
}

void modulus()
{
    int a,b;

    printf("\n\tEnter The First Number : ");
    scanf("%d",&a);

    printf("\tEnter The Second Number : ");
    scanf("%d",&b);

    printf("\n\tThe Modulus Of A and B Is %d\n",a%b);
}

void factorial()
{
    int n,factorial;

    printf("\n\tEnter The Number You Want The Factorial Of : ");
    scanf("%d",&n);

    factorial=1;

    for(int i=1; i<=n; i++){
        factorial = factorial*i;
    }
    printf("\n\tFactorial Of %d Is %d",n,factorial);
}

void power()
{
    double b;
    double p;

    printf("\n\tEnter The Base : ");
    scanf("%lf",&b);

    printf("\tEnter The Power : ");
    scanf("%lf",&p);

    double e=pow(b,p);

    printf("\n\tThe Power Is %0.1lf",e);
}

void square()
{
    double b;

    printf("\n\tEnter The Number You Want The Square Of: ");
    scanf("%lf",&b);

    double p = pow(b,2);

    printf("\n\tThe Square Of %0.1lf Is %0.1lf",b,p);
}

void cube()
{
    double b;

    printf("\n\tEnter The Number You Want The Cube Of: ");
    scanf("%lf",&b);

    double p = pow(b,3);

    printf("\n\tThe Cube Of %0.1lf Is %0.1lf",b,p);
}

void squareroot()
{
    double b;

    printf("\n\tEnter The Number You Want The Square Root Of : ");
    scanf("%lf",&b);

    double s = sqrt(b);

    printf("\n\tThe Square Root Of %0.1lf Is %0.1lf",b,s);
}

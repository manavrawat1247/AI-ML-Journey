#include <stdio.h>
void checkEvenOdd(int n) 
{
    if (n % 2 == 0)
        printf("The number is Even.\n");
    else
        printf("The number is Odd.\n");
}
void checkPrime(int n) 
{
int i,c=0;
for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("%d is a prime number.\n");
    }
    else
    {
        printf("%d is not a prime number.\n");
    }
}
int reverseNumber(int n) {
    int reverse = 0;
    while (n != 0) 
	{
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    return reverse;
}
void checkPalindrome(int n) 
{
    if (n == reverseNumber(n))
        printf("The number is a Palindrome.\n");
    else
        printf("The number is Not a Palindrome.\n");
}
int sumOfDigits(int n) {
    int sum = 0;

    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int main() 
{
    int choice, num;

    do {
        printf("\nMENU\n");
        printf("1. Check Even or Odd\n");
        printf("2. Check Prime\n");
        printf("3. Check Palindrome\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Reverse the Number\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter an integer: ");
            scanf("%d", &num);
        }

        switch (choice) {
            case 1:
                checkEvenOdd(num);
                break;

            case 2:
                checkPrime(num);
                break;

            case 3:
                checkPalindrome(num);
                break;

            case 4:
                printf("Sum of digits = %d\n", sumOfDigits(num));
                break;

            case 5:
                printf("Reverse = %d\n", reverseNumber(num));
                break;

            case 6:
                printf("Program exited.\n");
                break;
				
}
} 
}
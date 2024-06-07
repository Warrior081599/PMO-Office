#include <stdio.h>

<<<<<<< HEAD
int isPrime(int n) {
    if (n <= 1)
        return 0; // 0 and 1 are not prime numbers
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; // Number is divisible, hence not prime
    }
    
    return 1; // Number is prime
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    
=======
int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum of %d and %d is: %d", num1, num2, sum);

>>>>>>> branch1
    return 0;
}

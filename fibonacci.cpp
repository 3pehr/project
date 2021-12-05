#include <iostream>
using namespace std;

long fibo(int n);

int main()
{
     int number;
     cout << "Enter your N-th number: ";
     cin >> number;
     cout << "Fibonacci"
          << "(" << number << ")"
          << "=" << fibo(number);
     return 0;
}

long fibo(int n)
{
     int result;
     if (n == 1 || n == 2)
     {
          return 1;
     }
     return fibo(n - 1) + fibo(n - 2);
}
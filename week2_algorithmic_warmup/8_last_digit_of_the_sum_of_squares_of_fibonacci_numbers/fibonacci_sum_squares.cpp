#include <iostream>
#include <cmath>

using namespace std;
//Get the last digit of the fib number for input n 
//

long long getLastDigit(long long n){

  if(n < 2) return n;

  long long fib1 = 0;
  long long fib2 = 1;
  long long fib3;

  for(int i = 2; i <= n; ++i){
    fib3 = (fib1 + fib2) % 10;
    fib1= fib2;
    fib2 = fib3;
  }
  return fib3 % 10;
  
  
  }

long long getSumOfSquares(long long n){

    long long verticalSide = getLastDigit(n % 60);
    long long horizontalSide = getLastDigit((n + 1) % 60);
    long long sumSquares = verticalSide * horizontalSide;
    return sumSquares % 10;

}

// Fn = (Fn + Fn-1) x Fn
int main()
{
    long long int n;        /* nth value to be found */
    std::cin >> n;
    std::cout << getSumOfSquares(n) << "\n";
    return 0;
}


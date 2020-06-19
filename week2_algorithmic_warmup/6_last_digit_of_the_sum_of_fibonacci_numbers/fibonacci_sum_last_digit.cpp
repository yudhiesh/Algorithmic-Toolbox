#include <iostream>
using namespace std;

long long calc_fib(long long n) {

    n = (n+2)%60;
    int fib[n+1];
    fib[0]=0;
    fib[1]=1;
    int res = 1;
    for(int i = 2; i<=n;i++){
        fib[i] = (fib[i-1]%10 + fib[i-2]%10)%10;
        // res = res + fib[i];
    }
    // cout<<fib[n]<<"\n";
    if(fib[n] == 0){
        return 9;
    }
    return (fib[n]%10-1);
}

int main() {
    long long n = 0;
    std::cin >> n;

    std::cout << calc_fib(n) << '\n';
    return 0;
}

//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 
//121393, 196418, 317811
//Works on all range of inputs. It works on the following algorithm. 
//The idea is to notice that the last digits of fibonacci numbers also occur in sequences of length 60 
//(from the previous problem: since pisano period of 10 is 60). 
//Irrespective of how large n is, its last digit is going to have appeared somewhere within the sequence. i
//Two Things apart from edge case of 10 as last digit.
//Sum of Fib(n) = Fib(n +2 ) - 1

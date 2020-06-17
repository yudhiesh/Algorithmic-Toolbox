#include <iostream>
using namespace std;


unsigned int get_fibonacci_last_digit_naive(unsigned int n) {
    if (n <= 1)
        return n;

    unsigned int previous = 0;
    unsigned int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        unsigned int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}
int get_fibonacci_last_digit_fast(long long n){
  int* f = new int[n+1];
  f[0] = 0;
  f[1] = 1;

  for (long long i =2; i<= n; ++i){
    f[i] = (f[i-1] +f[i-2])%10;
  }
  return f[n];
}

int main() {
    long long  n;
    cin >> n;
    int c = get_fibonacci_last_digit_fast(n);
// unsigned int c = get_fibonacci_last_digit_naive(n);
    cout << c << '\n';
    }

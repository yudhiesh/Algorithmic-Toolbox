#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long MaxPairwiseProduct(const vector<int>& numbers) {
  long long result = 0;
  int n =numbers.size();
  for(int i = 0; i < n; ++i){
    for(int j = i + 1; j < n; ++j)
      if(((long long)numbers[i] * numbers[j] > result)){
          result = ((long long)numbers[i] * numbers[j]);
          }
  }
  return result;
}
long long MaxPairwiseProductFast(const vector<int>& numbers){
  int n = numbers.size();
  int maxInt1 = -1;
  for(int i = 0; i < n; ++i){
    if((maxInt1 == -1) || numbers[i] > numbers[maxInt1]){
      maxInt1 = i;
    }
  }
  int maxInt2 = -1;
  for(int j = 0; j < n; ++j){
    if((j != maxInt1) && ((maxInt2 == -1)|| numbers[j] > numbers[maxInt2])){
      maxInt2 = j;
    
    }
  }
  return ((long long)(numbers[maxInt1]))* numbers[maxInt2];

}

int main() {
  /*
    while(true){
      int n = rand() % 1000 + 2;
      cout << n << "\n";
      vector<int> a;
      for(int i = 0; i < n; ++i){
        a.push_back(rand() % 100000);
      }
      for(int j = 0; j < n; ++j){
        cout << a[j] << " ";
      }
      cout << "\n";
      long long res1 = MaxPairwiseProduct(a);
      long long res2 = MaxPairwiseProductFast(a);
      if(res1 != res2){
        cout << "Answer wrong" << " " << res1 << " " << res2 << "\n"; 
        break;
      }
      else {
      cout << "OK\n"; 
      }
    }
*/

    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }


//    cout << MaxPairwiseProduct(numbers) << "\n";
    cout << MaxPairwiseProductFast(numbers) << "\n";

    return 0;
}

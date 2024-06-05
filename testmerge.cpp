#include <iostream>

using namespace std;

int fibonacci(int n) {
  if (n == 0 || n == 1) {
    return n;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main() {
  int n;
  cout << "Nhap so Fibonacci muon tinh: ";
  cin >> n;

  int result = fibonacci(n);
  cout << "So Fibonacci thu " << n << " la: " << result << endl;

  return 0;
}


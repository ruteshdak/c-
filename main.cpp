#include <iostream>
using namespace std;
int main() {
  int i, largest, n;
  int num[50];
  cout << "Enter no of elements";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> num[i];
  }
  largest = num[0];
  for (int i = 1; i < n; i++) {
    if (largest < num[i]) {
      largest = num[i];
    }
  }
  cout << largest;
}

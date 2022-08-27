#include <iostream>
using namespace std;
int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, count = 0,co=0;
    cin >> n;

    string arr[100];

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
      if (arr[i] == "START38") {
        count++;

      } else if(arr[i]=="LTIME108") {
        
        co++;
      }
    }
    cout << count <<" "<< co;
  }
}

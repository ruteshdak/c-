


#include <iostream>
using namespace std;
int main() {
  int T,arr[7],count=0,ccount=0;
  cin >> T;
  while (T--) {
    int a,b;
    cin>>a>>b;
    int n = a;
    int c = a+b;
    int d = 500-a*2;
    int e = 1000 - c*4;
    int z = d+e;
    //cout<<z;
    int s = b;
    int p = b+a;
    int q = 1000 - b*4;
    int r = 500 - p*2;
    int f = q+r;
    // cout<<f;
    if(f==z){
      cout<<f;
    }
    else if(z>f){
      cout<<z;
    }
    else {
      cout<<f;
    }
  }
}
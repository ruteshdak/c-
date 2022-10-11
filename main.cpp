


#include <iostream>
using namespace std;
int main() {
  int T,arr[7],count=0,ccount=0;
  cin >> T;
  while (T--) {
    int n;
    for (int i = 0; i < 7; i++) {
      cin >> arr[i];
      
    }
    for(int i=0;i<7;i++){
      if(arr[i]==1){
        count++;
      }
      else if(arr[i]==0){
        ccount++;
      }
      }
      if(count>ccount){
        cout<<"YES";
      }
      else{
        cout<<"NO";
      }
    
  }
}
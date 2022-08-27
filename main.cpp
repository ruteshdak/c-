#include <iostream>
using namespace std;
int main(){
  int T;
  cin>>T;
  while(T--){
    
    int n,count=1;
    cin>>n;
    for(int i=1;i<=n;i++){
     count = count*i;
    }
    cout<<count;
  }
}
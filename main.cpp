

#include <iostream>
using namespace std;
void tr();
int main(){
  tr();
}
void tr(){
  int N,K;
  cin>>N>>K;
  if(N==K){
    cout<<0;
  }
  else{
    cout<<N-K;
  }
}
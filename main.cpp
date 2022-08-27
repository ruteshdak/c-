#include <iostream>
using namespace std;
int main(){
  int T;
  cin>>T;
  while(T--){
    int arr[100000];
    int N,L,R,count=0;
    cin>>N;
    cin>>R;
    // cout<<L/10<<endl;
    // cout<<L%10<<endl;
    for(int i=N;i<=R;i++){
      if(i%10==2 || i%10==3 || i%10==9){
        count++;
      }
      
    }
    cout<<count;
    
  }
}
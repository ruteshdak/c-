

// #include <iostream>
// using namespace std;
// int main() {
//   int A, B, A1, B1, A2, B2;
//   int T, count;
//   cin >> T;
//   while (T--) {
//     cin >> A >> B >> A1 >> B1 >> A2 >> B2;
//     if (A == B1 && B == A1) {
//       cout<<1<<endl;

//     } else if (A == B2 && B == A2) {
//       cout<<2<<endl;
//     }
//     else{
//         cout<<0;
//     }
//   }
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int T;
//   cin >> T;
//   while (T--) {
//     int arr[1000];
//     int n;
//     cin >> n;

//     if (n % 6 == 0) {
//       cout << "yes";
//     } else {
//       cout << "no";
//     }
//   }
// }


// Function protoypes with no argument no return 
// #include <iostream>
// using namespace std;
// void say_hello();
// void hello_world();
// int main(){
//   say_hello();
//   cout<<"hi"<<endl;
  
// }
// void hello_world(){
//   cout<<"World"<<endl;
//   cout<<"Hello"<<endl;
// }
// void say_hello(){
//   cout<<"Hellooo"<<endl;
//   hello_world();
//   cout<<"world"<<endl;
// }





// #include <iostream>
// using namespace std;

// void area_cy();
// void volume_cy();

// int main(){
//    area_cy();
//   volume_cy();
//   return 0;
// }

// void area_cy(){
//   double radius,height;
//   cin>>radius>>height;
//   cout<<3.14*radius*radius*height<<endl;
// }

// void volume_cy(){
//   double rad,hei;
//   cin>>rad>>hei;
//   cout<<(3.14*rad*rad*hei)/3<<endl;
// }


#include <iostream>
using namespace std;
void average();
int main(){
  average();
}
void average(){
  float a,b,c;
  cin>>a>>b>>c;
  float d= (a+b)/2;
  float e = (b+c)/2;
  float s = (a+c)/2;
  if(d>=35 && e>=35 && s>=35){
    cout<<"pass";
  }
  else {
    cout<<"fail";
  }
}
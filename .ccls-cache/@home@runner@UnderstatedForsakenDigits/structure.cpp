// #include <stdio.h>

// struct employee{
// int Id;
// float salary;
// char favChar;
// };

// int main(){
//   struct employee rutesh;
//   rutesh.Id=2;
//   rutesh.salary=120523532;
//   rutesh.favChar ='V';
// }
// // // #include <iostream>
// // // using namespace std;
// // // int max(int num1,int num2);
// // // int min(int num1,int num2);
// // // int main(){
// // // int num1,num2, maximum,minimum;
// // //   cin>>num1>>num2;
// // //   maximum=max(num1,num2);
// // //   minimum=min(num1,num2);
// // //   cout<<maximum;
// // //   cout<<minimum;
// // //   }
// // #include<iostream>

// // using namespace std;

// // int maxNum(int first, int second, int third){

// //  int max = first;
// //  if (second > max){
// //   max = second;
// // }
// //  if (third > max){
// //     max = third;
// // }
// // return max;

// // }
// // int minNum(int first, int second, int third){
// //     int min = first;
// //     if (second < min) {
// //         min = second;
// //     }
// //      if (third < min) {
// //         min = third;
// //     }   return min;
// // }

// //     int main(){

// //    int a, b, c;
// //    cin>>a>>b>>c;
// //    cout<<"Max num is: "<<maxNum(a,b,c)<<endl;
// //    cout<<"Min num is :"<<minNum(a,b,c)<<endl;

// //    return 0;
// //       }
// // #include <iostream>
// // using namespace std;
// // void even_odd(int x){
// //   if(x%2==0){
// //     cout<<"even";
// //   }
// //   else{
// //     cout<<"odd";
// //   }
// // }
// // int main(){
// //   int x;
// //   cin>>x;
// //   return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // int main(){
// //   char vowels[]={'a','e','i','o','u'};
// //   cout<<vowels[0];
// //   cin>>vowels[5];
// // }
// // #include <iostream>
// // using namespace std;
// // void age(int a){

// //   if(a>18){
// //     cout<<"eligible to vote";
// //   }
// //   else{
// //     cout<<"not eligible to vote";
// //   }
// // }
// // int main(){
// //   int x;
// //   cin>>(x);
// //   age(x);
// //   return 0;
// // }

// // #include <iostream>
// // #include <vector>
// // using namespace std;
// // int main(){
// //   vector <int> vector1;
// //   vector <int> vector2;
// //   vector1.push_back(10);
// //   vector1.push_back(20);
// //   cout<<vector1.at(0);
// //   cout<<vector1.at(1);
// //   return 0;
// // }
// #include <iostream>
// using namespace std;
// int main(){
//   char letter_grade;
//   cin>>letter_grade;
//   switch(letter_grade){
//     case 'a':
//     case 'A':
//     cout<<"Your score is best";
//     break;
//     case 'b':
//     case 'B':
//     cout<<"Your score is better";
//     break;
//     case 'c':
//     case 'C':
//     cout<<"Your score is good";
//     break;
//     case 'f':
//     case 'F':
//       {
//         char confirm;
//         cout<<"Are you sure (Y/N)?";
//         cin>>confirm;
//         if(confirm=='y' || confirm=='Y'
//         ){
//           cout<<"you didn't study hard";
//         }
//         else if (confirm =='N'||confirm=='n'){
//           cout<<"you study";
//         }
//         else{
//           cout<<"Illegal choice";
//         }
//         break;
//       }
//     default:
//     cout<<"You did not get good marks";

//   }
// }

// #include <iostream>
//  #include <vector>
// using namespace std;
// int main(){
// char selection;

//   do{
//      cout<<"1. Do this"<<endl;
//     cout<<"2. Do that"<<endl;
//     cout<<"1. Do something else"<<endl;
//     cout<<"Q. Quit"<<endl;
//     cout<<"Enter your selection";
//     cin>>selection;
//   }
//     while(selection=='q'||selection=='Q');

//     cout<<"Thanks"<<endl;
// }
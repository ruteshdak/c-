#include <iostream>
using namespace std;
#define size 4
int queue[size],front=-1,rear=-1;
void cirenqu(){
  if(rear==size-1 && front==0){
    cout<<"overflow"<<endl;
  }
  else if(rear==front-1){
    cout<<"overflow"<<endl;
  }
  else{
    int num;
    cout<<"enter num:"<<endl;
    cin>>num;
    if(rear==size-1)
      rear=0;
    else
      rear++;
    queue[rear]=num;
    if(front==-1)
      front++;
    
  }
}
void cirdeq(){
  if(front==-1 && rear==-1){
    cout<<"Queue is empty"<<endl;
  }
  else{
    cout<<"deleted element is "<<queue[front]<<endl;
    if(front==rear){
      front=-1,rear=-1;
    }
    else{
      front++;
    }
  }
}
void display(){
  if(front==-1 && rear==-1){
    cout<<"Queue is empty"<<endl;
  }
  cout<<"Elements in Circular Queue are :"<<"  "<<endl;
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            cout<<queue[i];
    }
    else
    {
        for (int i = front; i < size; i++)
           cout<<queue[i];
 
        for (int i = 0; i <= rear; i++)
            cout<<queue[i];
    }
}
int main(){
  int choice;
  while(1){
    cout<<"\n1.Circularqueue"<<endl<<"2. Circular Deq"<<endl<<"3.Display"<<endl;
    cout<<"Enter choice:"<<endl;
    cin>>choice;
    switch(choice){
      case 1:
      cirenqu();
      break;
    
    case 2:
    cirdeq();
    break;
  
  case 3:
  display();
  break;
  
default:
cout<<"Invalid choice"<<endl;
      }}}




//  #include <iostream>
// using namespace std;
// #define size 4
// int queue[size],front=-1,rear=-1;
// void cirenqu(){
//   if(rear==size-1 && front==0){
//     cout<<"overflow"<<endl;
//   }
//   else if(rear==front-1){
//     cout<<"overflow"<<endl;
//   }
//   else{
//     int num;
//     cout<<"enter num:"<<endl;
//     cin>>num;
//     if(rear==size-1)
//       rear=0;
//     else
//       rear++;
//     queue[rear]=num;
//     if(front==-1)
//       front++;
    
//   }
// }
// void cirdeq(){
//   if(front==-1 && rear==-1){
//     cout<<"Queue is empty"<<endl;
//   }
//   else{
//  cout<<"deleted element is "<<queue[front]<<endl;
//     if(front==rear){
//       front=-1,rear=-1;
//     }
//     else{
//       front++;
//     }
//   }
// }
// void display(){
//   if(front==-1 && rear==-1){
//     cout<<"Queue is empty"<<endl;
//   }
//   cout<<"Elements in Circular Queue are :"<<"  "<<endl;
//     if (rear >= front)
//     {
//         for (int i = front; i <= rear; i++)
//             cout<<queue[i];
//     }
//     else
//     {
//         for (int i = front; i < size; i++)
//            cout<<queue[i];

 
//         for (int i = 0; i <= rear; i++)
//             cout<<queue[i];
//       }
//   }
 
// int main(){
//    while(1){
//     cout<<"\n1.Circularqueue"<<endl<<"2. Circular Deq"<<endl<<"3.Display"<<endl;
//     cout<<"Enter choice:"<<endl;
//   int choice;
   
// cin>>choice;   
//  switch(choice){
//       case 1:
//       cirenqu();
//       break;
    
//     case 2:
//     cirdeq();
//     break;
  
//   case 3:
//   display();
//   break;
  
// default:
// cout<<"Invalid choice"<<endl;
//       }
// }
// }






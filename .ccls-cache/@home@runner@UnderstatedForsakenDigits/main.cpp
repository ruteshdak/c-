// #include <iostream>
// using namespace std;

// struct Node {
//   int data;
//   struct Node *next;
// };

// struct Node *head = NULL;
// void insert_beg() {
//   int data_more;
//   cout << "Enter data for the node: ";
//   cin >> data_more;
//   struct Node *newnode = new Node;
//   newnode->data = data_more;
//   newnode->next = head;
//   head = newnode;
// }

// void insert_end() {
//   int val;
//   cout << "Enter the value: ";
//   cin >> val;
//   struct Node *temp5 = new Node;
//   temp5->data = val;
//   temp5->next = NULL;
//   if (head == NULL) {
//     head = temp5;
//   } else {
//     struct Node *temp6 = head;
//     while (temp6->next != NULL) {
//       temp6 = temp6->next;
//     }
//     temp6->next = temp5;
//   }
// }
// void DeleteNodeBeg()
// {
// if(head==NULL)
// cout<<"underflow";
// else
// {
// head = ; //statement-1
// start=start -> next; //statement-2
// delete ptr ; //statement-3
// }
// }

// void display() {
//   struct Node *temp3 = head;
//   if (temp3 == NULL) {
//     cout << "EMPTY!" << endl;
//     return;
//   }
//   while (temp3 != NULL) {
//     cout << temp3->data << '\t';
//     temp3 = temp3->next;
//   }
//   cout << endl;
// }

// int main() {
//   int choice;
//   do {
//     cout << "The operations are: \n1.Insert at the beginning \n2.Insert at the "
//             "end \n3.Display \n4.Exit \nEnter your choice: ";
//     cin >> choice;
//     switch (choice) {
//     case 1: {
//       insert_beg();
//       break;
//     }
//     case 2: {
//       insert_end();
//       break;
//     }
//     case 3: {
//       display();
//       break;
//     }
//     case 4: {
//       cout << "Thank you for using the program. It has now exited." << endl;
//     }
//     default: {
//       cout << "Invalid Choice." << endl;
//     }
//     }
//   } while (choice != 4);

//   return 0;
// }




#include <iostream>
using namespace std;
int main(){
  int T;
  cin>>T;
  while(T--){
    int D,L,R;
    cin>>D>>L>>R;
    if(D>=L && D<=R){
      cout<<"Take second dose now";
    }
    else if(D<L){
      cout<<"Too Early";
    }
    else{
      cout<<"Too Late";
    }
  }
}
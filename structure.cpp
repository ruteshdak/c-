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
// // // // #include <iostream>
// // // // using namespace std;
// // // // struct student {
// // // //   string name;
// // // //   int std, division, roll;
// // // // };
// // // // int main() {
// // // //   struct student st[5];
// // // //   struct student *ptr;
// // // //   ptr = &st[5];
// // // //   for (int i = 0; i < 3; i++) {
// // // //     cout << "Student " << i + 1 << endl;
// // // //     cout << "Enter name: ";
// // // //     cin >> st[i].name;
// // // //     cout << "Enter std: ";
// // // //     cin >> st[i].std;
// // // //     cout << "Enter division: ";
// // // //     cin >> st[i].division;
// // // //     cout << "Enter roll number: ";
// // // //     cin >> st[i].roll;
// // // //   }
// // // //   cout << "Details of Stuents" << endl;
// // // //   for (int i = 0; i < 5; i++) {
// // // //     cout << "Student" << i + 1 << endl;
// // // //     cout << "Name: " << ptr->name << endl;
// // // //     cout << "Std: " << ptr->std << endl;
// // // //     cout << "Division: " << ptr->division << endl;
// // // //     cout << "Roll: " << ptr->roll << endl;
// // // //   }
// // // // }
// // // #include <iostream>
// // // using namespace std;
// // // struct student
// // // 	{
// // // 	char name[20];
// // // 	int age;
// // // 	};
// // // int main()
// // // 	{
// // // 	struct student s;
// // // 	struct student *ptr;
// // // 	ptr=&s;
// // // 	int i;
// // // 	for(i=0; i<1; i++)
// // // 		{
// // // 		cout<<"Name: ";
// // // 		cin>>ptr->name;
// // // 	    cout<<"Age: ";
// // // 		cin>>ptr->age;
// // // 		}
// // // 	cout<<"Display"<<endl;
// // // 	for(i=0; i<1; i++)
// // // 		{
// // // 		cout<<"Name: ";
// // // 		cout<<ptr->name<<endl;
// // // 	    cout<<"Age: ";
// // // 		cout<<ptr->age<<endl;
// // // 		}

// // // 	}
// // #include<iostream>
// // using namespace std;
// // void incr(int n,int a[])
// // {
// //  for(int i=0;i<n;i++)
// //  {
// //  a[i]+=5;
// //  }
// //  cout<<"Updated Array"<<endl;
// //  for(int i=0;i<n;i++)
// //  {
// //  cout<<a[i]<<" ";
// //  }
// // }
// // int main()
// // {
// //  int n;
// //  cout<<"Enter the length of array : "<<endl;
// //  cin>>n;
// //  int a[n];
// //  cout<<"Array Elements"<<endl;
// //  for(int i=0;i<n;i++)
// //  {
// //  cin>>a[i];
// //  }
// //  incr(n,a);
// // }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5], i, num, index;
//     cout<<"Enter 5 Numbers: ";
//     for(i=0; i<5; i++){
//         cin>>arr[i];}
//     cout<<"\nEnter a Number to Search: ";
//     cin>>num;
//     for(i=0; i<10; i++)
//     {
//         if(arr[i]==num)
//         {
//             index = i;
//             break;
//         }
//     }
//     cout<<"\nFound at Index No."<<index;
//     cout<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int binary_search(int array[],int x,int low, int high){

// }
// #include <iostream>
// using namespace std;
// int binarySearch(int array[], int x, int low, int high) {
//   while (low <= high) {
//     int mid = low + (high - low) / 2;
//     if (array[mid] == x)
//       return mid;
//     if (array[mid] < x)
//       low = mid + 1;
//     else
//       high = mid - 1;
//   }
//   return -1;
// }
// int main(void) {
//   int array[] = {3, 4, 5, 6, 7, 8, 9};
//   int x;
//   cout << "Number to be searched: ";
//   cin >> x;
//   int n = sizeof(array) / sizeof(array[0]);
//   int result = binarySearch(array, x, 0, n - 1);
//   if (result == -1)
//     cout << "Not found";
//   else
//     cout << "Element is found at index " << result;
// }
//#include <iostream>
// using namespace std;
// int main() {
//   int i, largest, n;
//   int num[50];
//   cout << "Enter no of elements";
//   cin >> n;

//   for (int i = 0; i < n; i++) {
//     cin >> num[i];
//   }
//   largest = num[0];
//   for (int i = 1; i < n; i++) {
//     if (largest < num[i]) {
//       largest = num[i];
//     }
//   }
//   cout << largest;
// }



// #include <iostream>
// using namespace std;
// float volume_circle(float radius){
//   return (4*radius*radius*radius*3.14)/3;
// } 
// int main(){
//   float radius;
//   cin>>radius;
//   int result;
//   result=volume_circle(radius);
//   cout<<result;
// }

// #include <iostream>
// using namespace std;
// void num(int x){
//   if(x%2==0){
//     cout<< "even";
//   }
//   else{
//     cout<< "odd";
//   }

//   }
// int main(){
//   int x;
//   cin>>x;
  
//   num(x);
  
//   return 0;
// }
// #include <iostream>
// using namespace std;

// #include <iostream>
// using namespace std;
// void  fun(int x){
//     cout<<x*2;
// }

// int main() {
//     int T,x;
//     cin>>T;
//     while(T--){
//        cin>>x;
//        fun(x); 
//     }
    
    
// 	return 0;
// }
// #include <iostream>
// using namespace std;
// void fun(int x){
//   if(x<=1000){
//     cout<<"yes";
//   }
//   else{
//     cout<<"no";
//   }
// }
// int main(){
//   int T;
//   cin>>T;
//   while(T--){
//   int x;
//   cin>>x;
//   fun(x);}
// }

















// #include <iostream>
// #define MAX 10
// using namespace std;
// int stack_arr[MAX];
// int top = -1;
// void push(int item) {
//   if (top == MAX) {
//     cout << "Stack Overflow";
//   }
//   top = top + 1;
//   stack_arr[top] = item;
// }
// int pop() {
//   int item;
//   if (top == -1) {
//     cout << "Stack Underflow";
//     exit(1);
//   }
//   item = stack_arr[top];
//   top = top - 1;
//   return item;
// }
// void peek() {
//   if (top == -1) {
//     cout << "the stack is empty"<<endl;
//   } else {
//     cout << "top element:" << stack_arr[top] <<endl;
//   }
// }
// void display() {
//   int i;
//   if (top == MAX) {
//     cout << "Stack is empty" << endl;
//     return;
//   }
//   cout << "Stack elements" << endl;
//   for (i = top; i >= 0; i--) {
//     cout << stack_arr[i] << endl;
//   }
// }
// void peep(int item) {
//   int c = 0, e;
//   for (int i = top; i > -1; --i) {
//     if (stack_arr[i] == item) {
//       e = i;
//       c++;
//     }
//   }
//   if (c == 1) {
//     cout << "Element found at:" << e<<endl;
//   } else {
//     cout << "not valid"<<endl;
//   }
// }
// int main() {
//   int z, item;
//   while (1) {
//     cout << "1. Push" << endl;
//     cout << "2. Pop" << endl;
//     cout << "3. Peek" << endl;
//     cout << "4. Peep" << endl;
//     cout << "5. Quit" << endl;
//     cout << "Enter your choice " << endl;
//     cin >> z;
//     switch (z) {
//     case 1:
//       cout << "Enter element to be pushed" << endl;
//       cin >> item;
//       push(item);
//       display();
//       break;
//     case 2:
//       item = pop();
//       cout << "Popped item is " << item << endl;
//       display();
//       break;
//     case 3:
//       peek();
//       break;
//     case 4:
//       cout << "Enter item to be peep" << endl;
//       cin >> item;
//       peep(item);
//       break;
//     case 5:
//       exit(1);
//     default:
//       cout << "not valid";
//     }
//   }
// }




// Functions in Cpp
// #include <iostream>
// using namespace std;
// void avg();
// int main(){
//   avg();
//   }
// void avg(){
//   int a,b,c,d,avg;
//   cin>>a>>b>>c;
//   avg=(a+b+c)/3;
//   if(avg>35){
//     cout<<"Pass";
//   }
//   else{
//     cout<<"Fail";
//   }

// }



// Functions in cpp
// #include <iostream>
// using namespace std;
// void avg(int a, int b, int c) {
//   int d = (a + b + c) / 3;
//   if (d > 35) {
//     cout << "Pass";
//   } else {
//     cout << "Fail";
//   }
// }
// int main() {
//   int a, b, c;
//   cin >> a >> b >> c;
//   avg(a, b, c);
// }



// #include <iostream>
// using namespace std;
// void candy(int a,int b){
//   int d;
//   d=a%b;
//   if(d==0 && d%2==0){
//     cout<<"yes";    
//   }
//   else{
//     cout<<"no";
//   }
// }
// int main(){
//   int a,b;
//   cin>>a>>b;
//   candy(a,b);
// }


// #include <iostream>
// using namespace std;

// int main() {
//    int T,X;
//    cin>>T;
//    while(T--){
//      cin>>X;  
//      if(X<300){
//            cout<<300<<endl;
//        }
//        else{
//            cout<<X*10<<endl;
//        }
//    }
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	int W,X,Y,Z;
// 	int T;
// 	cin>>T;
// 	while(T--){
// 	    cin>>W>>X>>Y>>Z;
// 	    if((W==X||W==Y||W==Z) || (W==X+Y || W==Y+Z || W==X+Z)) {
// 	    cout<<"Yes"<<endl;
// 	}
// 	else{
// 	    cout<<"no"<<endl;
// 	}}
// 	return 0;

// }



// #include <iostream>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int w;
//         cin>>w;
//         int a[3];
//         int s1=0,s2=0,s3=0;
//         int c=0;
//         for(int i=0;i<3;i++)
//         {
//             cin>>a[i];
//         }
//                 s1=a[0]+a[1];
//                 s2=a[1]+a[2];
//                 s3=a[2]+a[0];
//                 int s4=a[0]+a[1]+a[2];
//          if(a[0]==w || a[1]==w || a[2]==w)
//         {
//             cout<<"yes"<<endl;
//         }
//         else if(s1==w || s2==w || s3==w || s4==w)
//         {
//             cout<<"yes"<<endl;
//         }
//         else
//         {
//             cout<<"no"<<endl;
//         }
//     }
// 	return 0;
// }






// #include <iostream>
// using namespace std;

// int main() {
// 	int arr[10],count=0;
// 	for(int i=0;i<4;i++)
// 	{
// 	    cin>>arr[i];
// 	}
//   	for(int i=0;i<4;i++)
// 	{
// 	    if(arr[i]>=10) 
// 	    count++;
// 	}
// 	cout<<count<<endl;
//   return 0;
//   }







// #include <iostream>
// using namespace std;
// int main(){
  
//   int T;
//   cin>>T;
//   while(T--){
//     int n,count=0;
//   int arr[n];
//     cin>>n;
    
//     for(int i=0;i<n;i++){
//       cin>>arr[i];
//       }
//     for(int i=0;i<n;i++){
//       if(arr[i]>=1000)
//       {
//         count++;
        
//       }
      
//     }
//     cout<<count;
//   }
  
    
// }


// #include <iostream>
// using namespace std;

// int main() {
// 	int t,i;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
// 	    int arr[n];
	    
// 	    for( i=0;i<n;i++)
// 	    {
// 	        cin>>arr[i];
// 	    }
// 	    int cnt=0;
// 	    for( i=0;i<n;i++)
// 	    {
	   
	    
// 	        if(arr[i]>=1000)
// 	        {
// 	            cnt++;
// 	        }
// 	    }
	
	    
// 	   cout<<cnt<<endl;
// 	}
	
// 	return 0;
// }





















// #include <iostream>
// using namespace std;
// int queue[100], n = 100, front = - 1, rear = - 1;
// void Insert() {
//    int val;
//    if (rear == n - 1)
//    cout<<"Queue Overflow"<<endl;
//    else {
//       if (front == - 1)
//       front = 0;
//       cout<<"Insert the element in queue : "<<endl;
//       cin>>val;
//       rear++;
//       queue[rear] = val;
//    }
// }
// void Delete() {
//    if (front == - 1 || front > rear) {
//       cout<<"Queue Underflow ";
//       return ;
//    } else {
//       cout<<"Element deleted from queue is : "<< queue[front] <<endl;
//       front++;;
//    }
// }
// void Display() {
//    if (front == - 1)
//    cout<<"Queue is empty"<<endl;
//    else {
//       cout<<"Queue elements are : ";
//       for (int i = front; i <= rear; i++)
//       cout<<queue[i]<<" ";
//          cout<<endl;
//    }
// }
// int main() {
//    int ch;
//    cout<<"1) Insert element to queue"<<endl;
//    cout<<"2) Delete element from queue"<<endl;
//    cout<<"3) Display all the elements of queue"<<endl;
//    cout<<"4) Exit"<<endl;
//    do {
//       cout<<"Enter your choice : "<<endl;
//       cin>>ch;
//       switch (ch) {
//          case 1: Insert();
//          break;
//          case 2: Delete();
//          break;
//          case 3: Display();
//          break;
//          case 4: cout<<"Exit"<<endl;
//          break;
//          default: cout<<"Invalid choice"<<endl;
//       }
//    } while(ch!=4);
//    return 0;
// }


// // C++ Recursive Code For Linear Search
// #include <iostream>
// using namespace std;

// int linearsearch(int arr[], int size, int key)
// {
// 	if (size == 0) {
// 		return -1;
// 	}
// 	if (arr[size - 1] == key) {
// 		// Return the index of found key.
// 		return size - 1;
// 	}
// 	else {
// 		int ans = linearsearch(arr, size - 1, key);
// 		return ans;
// 	}
// }

// // Driver's Code
// int main()
// {
// 	int arr[5] = { 5, 4, 6, 9, 15 };
// 	int key = 15;

// 	// Function call
// 	int ans = linearsearch(arr, 5, key);
// 	if (ans == -1) {
// 		cout << "The element " << key << " is not found."
// 			<< endl;
// 	}
// 	else {
// 		cout << "The element " << key << " is found at "
// 			<< ans << " index of the given array." << endl;
// 	}
// 	return 0;
// }
// // Code contributed by pragatikohli



// // C++ Recursive Code For Linear Search
// #include <iostream>
// using namespace std;

// int linearsearch(int arr[], int size, int key)
// {
// 	if (size == 0) {
// 		return -1;
// 	}
// 	if (arr[size - 1] == key) {
// 		// Return the index of found key.
// 		return size - 1;
// 	}
// 	else {
// 		int ans = linearsearch(arr, size - 1, key);
// 		return ans;
// 	}
// }

// // Driver's Code
// int main()
// {
// 	int arr[5] = { 5, 15, 6, 9, 4 };
// 	int key = 4;

// 	// Function call
// 	int ans = linearsearch(arr, 5, key);
// 	if (ans == -1) {
// 		cout << "The element " << key << " is not found."
// 			<< endl;
// 	}
// 	else {
// 		cout << "The element " << key << " is found at "
// 			<< ans << " index of the given array." << endl;
// 	}
// 	return 0;
// }
// // Code contributed by pragatikohli




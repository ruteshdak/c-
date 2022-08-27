
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


#include <iostream>
using namespace std;

int main() {
	int t,i;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    for( i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int cnt=0;
	    for( i=0;i<n;i++)
	    {
	   
	    
	        if(arr[i]>=1000)
	        {
	            cnt++;
	        }
	    }
	
	    
	   cout<<cnt<<endl;
	}
	
	return 0;
}

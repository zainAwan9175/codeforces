#include <iostream>

 
using namespace std;
#define int long long int
 
void solve()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
	
}
 
 if(n%2==0)
 {
 	cout<<2<<endl;
 	cout<<1<<" "<<n<<endl;
 	cout<<1<<" "<<n<<endl;
 	
 }
 else{
 	cout<<4<<endl;
 	cout<<1<<" "<<n-1<<endl;
 	cout<<1<<" "<<n-1<<endl;
 	cout<<n-1<<" "<<n<<endl;
 	cout<<n-1<<" "<<n<<endl;
 	
 }
}
 
 
    
 
int32_t main() {
    int t;
    cin >>t;
    
   
    
    while (t--) {
    	solve();
        
      
       
    }
    
    return 0;
}
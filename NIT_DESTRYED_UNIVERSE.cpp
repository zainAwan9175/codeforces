#include <iostream>
 
 #include <vector>
 #include <algorithm>
using namespace std;
///#define int long long int
 
void solve()
{ 

 int n;
    cin>>n;
   int arr[n+1];
   arr[0]=0;
   for(int i=1;i<n+1;i++)
   {
   	cin>>arr[i];
   	
   }
   int ans=0;
   for(int i=1;i<n+1;i++)
   {
   	if(arr[i]>0&& arr[i-1]==0)
   	{
   		ans++;
	   }
   }
   
   cout<<min(ans,2)<<endl;

	
}
 
 
 
    
 
int32_t main() {
    int t;
    cin >>t;
    
   
    
    while (t--) {
    	solve();
        
      
       
    }
    
    return 0;
}
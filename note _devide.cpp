#include <iostream>
 
 #include <vector>
 #include <algorithm>
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
	if(arr[i]==1)
	{
		arr[i]=arr[i]+1;
	}

}
for(int i=0;i<n-1;i++)
{
	if(arr[i+1]%arr[i]==0)
	{
		arr[i+1]=arr[i+1]+1;
	}
}


for(int i=0;i<n;i++)
{
	cout<<arr[i];
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
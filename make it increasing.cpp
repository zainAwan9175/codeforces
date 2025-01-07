


#include <iostream>

 #include <cmath>

 
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

int count=0;
for(int i=n-1;i>=0;i--)
{
	while(arr[i]>=arr[i+1])
	{
		if(arr[i+1]==0)
		{
			cout<<-1<<endl;
			return;
		}
		arr[i]=floor(arr[i]/2);
		count++;
	}
}

cout<<count<<endl;
 

 	
 }

 
 
    
 
int32_t main() {
    int t;
    cin >>t;
    
   
    
    while (t--) {
    	solve();
        
      
       
    }
    
    return 0;
}
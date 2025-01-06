
#include <iostream>
#include <vector>
 
 #include <map>
  #include <cmath>
 #include <algorithm>
using namespace std;
//#define int long long int
 
void solve()
{ 
 
 
 
int n;
int q;
cin>>n>>q;
vector<int> arr(n+1,0);
vector<int> pre(n+1,0);
int sum=0;
for(int i=1;i<=n;i++)
{
	cin>>arr[i];
	pre[i]=pre[i-1]+arr[i];
	sum=sum+arr[i];
	
}
int starttol=0;
int ltor=0;
int rtoend=0;
 
 
while(q--)
{
	int l;
	int r;
	int k;
	
	cin>>l>>r>>k;
	starttol=pre[l-1];
	ltor=(r-l+1)*k;
	rtoend=sum-pre[r];
	int t=starttol+ltor+rtoend;
	if(t%2!=0)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	
	
	
	
	
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
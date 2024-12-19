#include <iostream>
 
 #include <vector>
 #include <algorithm>
using namespace std;
#define int long long int
 
void solve()
{  
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		int l=0;
		char ch=s[i];
		while(i<n&&s[i]==ch)
		{
			l++;
			i++;
			
		}
		i--;
		ans=max(ans,l);
	
	}
		cout<<ans+1<<endl;
	
}
 
 
 
    
 
int32_t main() {
    int t;
    cin >>t;
    
   
    
    while (t--) {
    	solve();
        
      
       
    }
    
    return 0;
}
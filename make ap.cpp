


#include <iostream>

 #include <cmath>

 
using namespace std;
#define int long long int
 
void solve()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(((2*b-c)>0&&(2*b-c)%a==0) ||( (c+a)%2==0 && ((c+a)/2)%b==0) || ((2*b-a)>0 )
	{
		
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
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
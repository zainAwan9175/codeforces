#include <iostream>
 
 #include <vector>
 #include <algorithm>
using namespace std;
//#define int long long int
 
void solve()
{ 

string s;
string t;
cin>>s>>t;
vector<int> vec(26,0);
for(auto it:t)
{
	vec[it-'A']++;
	
}
string temp="";
for(int i=s.size()-1;i>=0;i--)
{
	if(vec[s[i]-'A']>0)
	{
		vec[s[i]-'A']--;
		temp=temp+s[i];
		
	}
}

reverse(temp.begin(),temp.end());
if(temp==t)
{
	cout<<"YES"<<endl;
	
}else{
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
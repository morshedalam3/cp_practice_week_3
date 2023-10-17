#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        string str;
        cin>>str;
        int idx ;
        string s = "";
        for (int i = 0; i <20; i++)
         s+="Yes";
         if ( (idx = s.find(str,0))== string::npos)  
        cout<<"NO"<<endl;
        else cout<<"YES"<<endl;  
    }
      
    return 0;
}
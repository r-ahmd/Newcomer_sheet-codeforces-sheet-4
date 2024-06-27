#include <bits/stdc++.h>
using namespace std;
    
int main() 
{
    int n, q;
    cin>>n>>q;
    string x, y, z;
    cin>>x;
    
    int a, b, mx, mn;
    char s;
    while(q--)
    {
        cin>>y;
        if(y=="pop_back")
            x.pop_back();
        if(y=="front")
            cout<<x.front()<<endl;
        if(y=="back")
            cout<<x.back()<<endl;
        if(y=="sort")
        {
            cin>>a>>b;
            mx= max(a,b);
            mn= min(a,b);
            sort(x.begin()+mn-1, x.begin()+mx);
        }
        if(y=="reverse")
        {
            cin>>a>>b;
            mx= max(a,b);
            mn= min(a,b);
            reverse(x.begin()+mn-1, x.begin()+mx);
        }
        if(y=="substr")
        {
            cin>>a>>b;
            mx= max(a,b);
            mn= min(a,b);
            cout<<x.substr(mn-1, mx-mn+1)<<endl;
        }
        if(y=="push_back")
        {
            cin>>s;
            x.push_back(s);
        }
        if(y=="print")
        {
            cin>>a;
            cout<<x[a-1]<<endl;
        }
    }
 	return 0;
}

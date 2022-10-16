// f1 rule problem solution

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t!=0)
    {
        int a,b;
        cin>>a>>b;
        if(b<=floor(a*1.07)){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        t--;
    }   
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int f1(string a)
{
    return stoi(a);
}
main()
{
    int t,i,j,k,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        string s="";
        while(a>0)
        {
            s=s+to_string(a%10);
            a=a/10;
        }
        reverse(s.begin(),s.end());
        int l=s.length();
        int m=INT_MAX;
        for(i=0;i<l;i++)
        {
            string f="";
            for(j=0;j<l;j++)
            {
                if(j!=i)
                {
                    f=f+s[j];
                }
            }
            int g=f1(f);
            if(g<=m)
            m=g;
        }
        cout<<m<<endl;
    }
}
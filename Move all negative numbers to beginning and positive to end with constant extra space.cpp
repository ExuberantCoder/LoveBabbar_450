#include <bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int> v{1,2,3,5,77,6,-7,-55,-8,24,-3,12};
    int s=v.size()-1;
    int l=0;int m=0;
    while(m<=s)
    {
        if(v[m]<0)
        {
            swap(v[l],v[m]);
            l++;
            m++;
        }
        else 
        {
            m++;
        }
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }
}

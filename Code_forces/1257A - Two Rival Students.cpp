#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <cmath>
using namespace std;
int gv[10000];
string s[22],t[22];

int main()
{
    int x,y,z,i,j,k,a,b,c,d,e,f,g,h;
    cin>>x;
    while(x--)
    {
        cin>>a>>b>>c>>d;

        cout<<min(abs(c-d)+b,a-1)<<"\n";

    }

}

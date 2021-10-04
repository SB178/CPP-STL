#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>ar={1,3,7,1,6,4,2,3,4,5};
    map<int,int>map;
    for(auto e:ar)
    {
        map[e]++;
    }
    for(auto e:map)
    {
        cout<<e.first<<" "<<e.second<<endl;
    }

    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int>V;
int main()
{
    int N, tmp;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        cin>>tmp;
        V.push_back(tmp);
    }
    sort(V.begin(), V.end(), less<int>());
    cout<<V.front()<<endl;
    return 0;
}

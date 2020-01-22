#include <iostream>
using namespace std;

int main()
{
    int N, num, cnt=0;
    cin>>N;
    for(int i=1; i<N; i++)
    {
        num=i;
        while(num>0)
        {
            if(num%10==3 || num%10==6 || num%10==9)
                cnt++;
            num/=10;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

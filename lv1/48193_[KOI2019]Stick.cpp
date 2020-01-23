#include <iostream>
using namespace std;
int N, h[100001], MAXINDEX, cnt;
int main()
{
	cin>>N;
	MAXINDEX=N;
	for(int i=1; i<=N; i++)
	{
		cin>>h[i];
	}
	for(int i=N-1; i>0; i--)
	{
		if(h[i]<=h[N])
			continue;
		if(h[i]>h[MAXINDEX])
		{
			MAXINDEX=i;
			cnt++;
		}
	}
	cout<<cnt+1;
	return 0;
}

#include <stdio.h>
using namespace std;

int main()
{
	int N;
	long long cnt;
	cnt=0;
	scanf("%d", &N);
	for(int i=1; i<=N; i++)
	{
		cnt+=(long long)i*i;
	}
	printf("%lld", cnt);
}

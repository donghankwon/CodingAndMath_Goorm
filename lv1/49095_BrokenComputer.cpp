#include <stdio.h>
#include <algorithm>

using namespace std;

int N, c, NCount;
int time[100001];

int main()
{
	scanf("%d %d", &N, &c);
	
	for(int i=0; i<N; i++)
		scanf("%d", &time[i]);
		
	for(int i=N-1; i>=0; i--)
		time[i]=time[i]-time[i-1];
		
    for(int i=0; i<N; i++)
	{
		if(time[i]<=c)
			NCount++;
		else
			NCount=1;
	}
	printf("%d", NCount);
}

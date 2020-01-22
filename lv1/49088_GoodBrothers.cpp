#include <stdio.h>
using namespace std;
int main()
{
	int N=0;
	int a=0, b=0;
	scanf("%d %d", &a, &b);
	scanf("%d", &N);
	for(int i=1; i<=N; i++)
	{
		if(i%2==1) //진우->선우
		{
			if(a%2==0) //짝수
			{
				b+=a/2;
				a/=2;
			}
			else //홀수
			{
				b+=a/2+1;
				a/=2;
			}
		}
		else //선우->진우
		{
			if(b%2==0) //짝수
			{
				a+=b/2;
				b/=2;
			}
			else //홀수
			{
				a+=b/2+1;
				b/=2;
			}
		}
	}
	printf("%d %d", a, b);
	return 0;
}

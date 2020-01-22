#include <stdio.h>
using namespace std;

int main()
{
	long long int N;
	scanf("%lld", &N);
	long long int add=((N*(N+1)/2)%1000000007)*((N*(N+1)/2)%1000000007)%1000000007;
	printf("%lld", add);
	return 0;
}

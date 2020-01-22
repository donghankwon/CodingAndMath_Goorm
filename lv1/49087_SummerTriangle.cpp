#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	int x[3], y[3];
	for(int i=0; i<3; i++)
		scanf("%d %d", &x[i], &y[i]);
	int crossa, crossb;
	crossa=x[0] * y[1] + x[1] * y[2] + x[2] * y[0];
	crossb=x[1] * y[0] + x[2] * y[1] + x[0] * y[2];
	double cross;
	cross=abs(crossa-crossb)/2.0;
	printf("%.2lf", cross);
	return 0;
}

#include <stdio.h>

int main()
{
	int n, m, tmp;
	int _4[2], _3[2], _2[2], _1[2];
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		_4[0]=0; _4[1]=0;
		_3[0]=0; _3[1]=0;
		_2[0]=0; _2[1]=0;
		_1[0]=0; _1[1]=0;
		scanf("%d", &m);
		for(int j=0; j<m; j++)
		{
			scanf("%d", &tmp);
			if(tmp==4) _4[0]++;
			else if(tmp==3) _3[0]++;
			else if(tmp==2) _2[0]++;
			else if(tmp==1) _1[0]++;
		}
		scanf("%d", &m);
		for(int j=0; j<m; j++)
		{
			scanf("%d", &tmp);
			if(tmp==4) _4[1]++;
			else if(tmp==3) _3[1]++;
			else if(tmp==2) _2[1]++;
			else if(tmp==1) _1[1]++;
		}
		if(_4[0]>_4[1]) printf("A");
		else if(_4[0]<_4[1]) printf("B");
		else
		{
			if(_3[0]>_3[1]) printf("A");
			else if(_3[0]<_3[1]) printf("B");
			else
			{
				if(_2[0]>_2[1]) printf("A");
				else if(_2[0]<_2[1]) printf("B");
				else
				{
					if(_1[0]>_1[1]) printf("A");
					else if(_1[0]<_1[1]) printf("B");
					else printf("D");
				}
			}
		}
		printf("\n");
	}
	printf("\n");
}

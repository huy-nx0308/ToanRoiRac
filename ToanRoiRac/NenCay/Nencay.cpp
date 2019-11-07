#include<stdio.h>
int main()
{
	int edge, i, j;
	printf("so canh: ");
	scanf("%d", &edge);
	int vertex = edge + 1;
	int deg[vertex];
	for (i = 0; i < vertex; i++)
	{
		deg[i] = 0;
	}
	int a[edge][2];
	for (i = 0; i < edge; i++)
	{
		printf("canh thu %d: ", i + 1);
		scanf("%d%d", &a[i][0], &a[i][1]);
		deg[a[i][0]]++;
		deg[a[i][1]]++;
	}
	int count = 0;
	while (count < vertex - 2)
	{
		for (i = 1; i < vertex; i++)
		{
			if (deg[i] == 1) {
				deg[i]--;
				break;
			}
		}
		for (j = 0; j < edge; j++)
		{
			if (a[j][0] == i)
			{
				deg[a[j][1]]--;
				printf("%d\t", a[j][1]);
				count++;
				break;
			}
			else if (a[j][1] == i)
			{
				deg[a[j][0]]--;
				printf("%d\t", a[j][0]);
				count++;
				break;
			}
		}
	}
	return 0;
}

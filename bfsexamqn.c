#include<stdio.h>
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
void bfs(int v)
{
	for (i=0;i<n;i++)
	{
		if(a[v][i] && !visited[i])
		{
			q[++r]=i;
		}
	}
	if(f<=r)
	{
		visited[q[f]]=1;
		bfs(q[f++]);
	}
}
void main()
{
	int v;
	printf("\nEnter the number of vertices: ");
	scanf("%d",&n);
	printf("\nEnter the adjecency matrix\n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("\nEnter 1 if there exists an edge between %d and %d otherwise enter 0 instead: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Enter the starting vertex: ");
	scanf("%d",&v);
	for (i=0;i<n;i++) 
	{
		q[i]=0;
		visited[i]=0;
	}
	bfs(v);
	printf("\nThe node which can be reachable:\n");
	for (i=1;i<=n;i++)
	{
		if(visited[i])
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
}

#include<stdio.h>
void waitingtime(int wt[],int bt[],int n)
{
	int i,j;
	float avgwt=0;
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		//wt[i]=0;
		//for(j=0;j<i;j++)
		//{
			wt[i]=wt[i-1]+bt[i-1];
		//}
	}
	for(i=0;i<n;i++)
	{
		avgwt += wt[i];
	}
	printf("average waiting time is %d \n",(avgwt/n));
}
void turnaroundtime(int wt[],int bt[],int n)
{
	int i,tt[20];
	float avgtt=0;
	for(i=0;i<n;i++)
	{
		tt[i]=wt[i]+bt[i];
		avgtt=avgtt+tt[i];
	}
	printf("average tt %d\n", (avgtt/n));
}
void sortpriority(int bt[],int n,int p[])
{	
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;

				temp=bt[i];
				bt[i]=bt[j];
				bt[j]=temp;
			}
		}
	}
}
	
void sort(int bt[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(bt[i]>bt[j])
			{
				temp=bt[i];
				bt[i]=bt[j];
				bt[j]=temp;
			}
		}
	}
}
void fcfs(int wt[],int bt[],int n)
{
	waitingtime(wt,bt,n);
	turnaroundtime(wt,bt,n);
}
void sjf(int wt[],int bt[],int n)
{
	sort(bt,n);
	waitingtime(wt,bt,n);
	turnaroundtime(wt,bt,n);
}
void priority(int wt[],int bt[],int n,int p[])
{
	sortpriority(bt,n,p);
	waitingtime(wt,bt,n);
	turnaroundtime(wt,bt,n);
}



void main()
{
	int y=1,choice,bt[20],wt[20],n,i,tt[20],p[20];
	printf("enter the no of process");
	scanf("%d",&n);
	printf("enter the burst time and priority");
	for(i=0;i<n;i++)
	{
		printf("p[%d]:",i+1);
		scanf("%d",&bt[i]);
		scanf("%d",&p[i]);
	}
	
	

	while(y=1)
	{
		printf("1.fcfs");
		printf("2.sjf");
		printf("3.round robin");
		printf("4.priority");

		printf("enter the choice");
		scanf("%d",&choice);
		switch (choice){
			case 1: fcfs(wt,bt,n);
				break;
			case 2: sjf(wt,bt,n);
				break;
			//case 3: roundrobin();
				//break;
			case 4: priority(wt,bt,n,p);
				break;
			default: printf("enter the right choice");
				 break;
		}
	}
}


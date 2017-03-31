#include<iostream>
using namespace std;
main()
{
		
	int n,k=0;
	int pf=0;
	int block;
	cout<<"Number of memory blocks ? ";
	cin>>block;
	int *a = new int[block];
	for(int i=0;i<block;i++)
	{
		a[i]=0;
	}
	int l;
	cout<<"Total number of entries ? ";
	cin>>l;
	int *str = new int[l],flag;
	cout<<"Enter "<<l<<" string element one by one :\n";
	for(int i=0;i<l;i++)
	{
	flag=1;
	cout<<"Enter Element number "<<i+1<<" : ";
	cin>>str[i];
	for(int j=0;j<block;j++)
		{
			if(str[i]==a[j])
			{
	   			flag=0;
	   			break;
			}
		}
	if(flag==1)       //If element is not present in memory block then add it into memory block
	{
		if(k>=block)
		{
			k=0;
		}
	   a[k]=str[i];
	   k+=1;
	   pf+=1;
	}
	 cout<<"After "<<i+1<<" entrie(s) Memory Block Elements : "; //After each entry memory block will look like this 
	 for(int p=0;p<block;p++)
	 {
	 cout<<a[p]<<" ";
	 }
	 cout<<"Now pf is : "<<pf<<endl;
	 cout<<endl;
	}
	cout<<"\n Total Page Fault  : "<<pf<<endl; //answer
	return 0;
}

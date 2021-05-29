#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void NGL(int arr[],int n)
{
	stack<int> s;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		if(s.size() == 0)
			v.push_back(-1);
		else if(s.size()>0 && s.top()>arr[i])
			v.push_back(s.top());
		else if(s.size()>0 && s.top()<=arr[i])
			{
				while(!s.empty() || s.top()<=arr[i])
					s.pop();
				if(s.size() == 0)
					v.push_back(-1);
				else 
					v.push_back(s.top());
			}
		s.push(arr[i]);
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
}

int main()
{
	int arr[] = {11 ,23,13,29};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"The Original Array is: "<<"\n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	cout<<"The Nearest Greater Element to Left: "<<"\n";
	NGL(arr,n);
	return 0;
}
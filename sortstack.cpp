#include<iostream>
#include<bits/stdc++.h>
using namespace std;

stack<int> s;

void sortedstack(int x)
{
	if(s.size() == 0 || x>s.top())
		s.push(x);
	else 
	{
		int a = s.top();
		s.pop();
		sortedstack(x);
		s.push(a);
	}

}

void sortstack()
{
	if(s.size()>0)
	{
		int x = s.top();
		s.pop();
		sortstack();
		sortedstack(x);
	}
}

void displaystack()
{
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}

int main()
{
	s.push(30);
	s.push(-5);
	s.push(18);
	s.push(14);
	s.push(-3);
	sortstack();
	displaystack();
	return 0;
}


//  Convert this program to C++
//  change to C++ io
//  change to one line comments
//   change defines of constants to const
//  change array to vector<>
//  inline any short function

#include <iostream>
#include <vector>
const  int N=40;
void sum(int& p, int n, std::vector<int>& d)
{
		int i;
		p = 0;
		for(i = 0; i < n; ++i)
				p = p + d[i];
}
int main()
{
		int i;
		int accum = 0;
		//int data[N];
		std::vector<int> data;	
		for(i = 0; i < N; ++i)
				data.push_back(i);

		sum(accum, N, data);
		std::cout<<"sum is "<<accum<<"\n";
		return 0;
}

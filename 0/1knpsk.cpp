//0-1 Knapsack problem
#include <bits/stdc++.h> 
using namespace std; 

// A utility function that returns 
// maximum of two integers 
int max(int a, int b) 
{ 
	return (a > b) ? a : b; 
} 

// Returns the maximum value that 
// can be put in a knapsack of capacity W 
int knapSack(int W, int wt[], int val[], int n) 
{ 

	// Base Case 
	if (n == 0 || W == 0) 
		return 0; 

	// If weight of the nth item is more 
	// than Knapsack capacity W, then 
	// this item cannot be included 
	// in the optimal solution 
	if (wt[n - 1] > W) 
		return knapSack(W, wt, val, n - 1); 

	// Return the maximum of two cases: 
	// (1) nth item included 
	// (2) not included 
	else
		return max( 
			val[n - 1] 
				+ knapSack(W - wt[n - 1], 
						wt, val, n - 1), 
			knapSack(W, wt, val, n - 1)); 
} 

// Driver code 
int main() 
{ 
	int n;
	int val[20]; //= { 60, 100, 120 }; 
	int wt[20];// = { 10, 20, 30 }; 
	//int W = 50;
	int W;
	cout<<"Enter the value n: "<<endl;
	cin>>n;
	cout<<"Enter the values of objects with their profits: "<<endl;
	for(int j=0;j<n;j++)
	{
		cout<<"weight of object "<<j<<": "<<endl;
		cin>>wt[j];
		cout<<"Profit associated with object "<<j<<": "<<endl;
		cin>>val[j];
	} 
	cout<<"Enter the Max capacity of weight held by Knapsack: "<<endl;
	cin>>W;
	cout<<"Values"<<"\t"<<"Weights"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<val[i]<<"\t"<<wt[i]<<endl;
	}
	cout<<"Max capacity of the Knapsack: "<<W<<endl;
	
	cout <<"Max Profit: "<< knapSack(W, wt, val, n); 
	return 0; 
} 



#include <iostream>
using namespace std;

int g = 0;


void merge(int arr[], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;

	
	int L[n1], R[n2];

	
	for (int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	
	int i = 0;

	
	int j = 0;

	
	int k = l;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}


	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}


	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}


void mergeSort(int arr[],int l,int r){
	if(l>=r){
		return;
	}
	int m =l+ (r-l)/2;
	mergeSort(arr,l,m);
	mergeSort(arr,m+1,r);
	merge(arr,l,m,r);
}


void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
}


int main()
{
	int p[] = {10,20,30,25};
	int arr_size = sizeof(p) / sizeof(p[0]);

    int l, r, x;
    int count = 0, s = 0;

    cout<<"Enter the lower bound: "<<endl;
    cin>>l;
    cout<<"Enter the upper bound: "<<endl;
    cin>>r;
    cout<<"Enter the difference: "<<endl;
    cin>>x;

	cout << "Given array of complexities of problems is \n";
	printArray(p, arr_size);

	mergeSort(p, 0, arr_size - 1);

	cout << "\nSorted array of complexities of problems is \n";
	printArray(p, arr_size);
 
    for(int i = 0;i<arr_size; i++)
    {
        s += p[i];
        if((s>=l&&s<=r)&&(x<=p[i]-p[g]))
        {
            count+=1+arr_size-i;
            g++;
            i=g;
        }
    }

    cout<<"\nThe number of ways: "<<count<<endl;
	return 0;
}

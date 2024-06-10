#include<iostream>
using namespace std;



int partition(vector<int> &in, int start, int end)
{
	int pivot_val = in[end];
	int i = start;
	int j = end-1;
	while(i <= j)
	{
		if(in[i] <= pivot_val) i++;
		else if(in[j] > pivot_val) j--;
		else
		{
			swap(in[i], in[j]);
			i++;
			j--;

		}

	}
	swap(in[i], in[end]);
	return i;




}
void quickSort(vector<int> &in, int start, int end)
{
	if(start >= end)return;
	int part_key = partition(in, start, end);
	quickSort(in, start, part_key-1);
	quickSort(in, part_key+1, end);
	return;

}
void quick_sort(vector<int> &in)
{
	int start = 0;
	int end = in.size()-1;
	quickSort(in,start, end);
	return;


}
void displayArray(vector<int> &in)
{
	for(const auto &val:in)
		cout << val << " ";
	cout << endl;

	return ;
}
int main()
{
	cout << " Enter the size of array which need to be sorted by quick sort\n";
	int size;
	cin >> size;
	cout << "Enter the no of  " << size << " elements one by one " << endl;
	vector<int> in(size,0);
	for(int i = 0; i < size;i++)
		cin >> in[i];

	cout << " Array elements before sorting\n"; 
	displayArray(in);
	quick_sort(in);
	cout << " Array elements after sorting\n";
	displayArray(in);
	return 0;

}

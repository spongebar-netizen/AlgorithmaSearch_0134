#include <iostream>
using namespace std;

int arr[20];
int n;
int i;
void input()
{
	while (true)
	{
		cout << "Enter The number of element in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}
	cout << "\n----------------------\n";
	cout << "Enter Element Array\n";
	cout << "------------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];

	}
}
void linearsearch()
{
	char ch;
	int ctr;
	int item;

	do
	{
		cout << "\nEnter the element you want to search : ";
		cin >> item;



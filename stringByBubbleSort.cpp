#include <iostream>
#include <string>
using namespace std;

struct Name
{
    string first_name;
};

void bubbleSort(Name arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].first_name > arr[j + 1].first_name)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of names: ";
    cin >> n;
    Name arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name for person " << i + 1 << ": ";
        cin >> arr[i].first_name;
    }
    bubbleSort(arr, n);

    cout << "\nSorted Names:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].first_name << endl;
    }

    return 0;
}

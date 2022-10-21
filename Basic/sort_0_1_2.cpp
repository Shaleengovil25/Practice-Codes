#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void srt(int a[], int n)
{
    int i, z = 0, o = 0, t = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            z++;
        }
        else if (a[i] == 1)
        {
            o++;
        }
        else if (a[i] == 2)
        {
            t++;
        }
    }

    int k = 0;
    for (i = 0; i < z; i++)
    {
        a[k++] = 0;
    }
    for (i = 0; i < o; i++)
    {
        a[k++] = 1;
    }
    for (i = 0; i < t; i++)
    {
        a[k++] = 2;
    }
}

int main()
{

    int i, n, arr[n];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    srt(arr, n);
    cout << endl;
    
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}
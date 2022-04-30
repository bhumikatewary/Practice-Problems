/* You are given a list of n integers, and your task is to calculate the number of distinct values in the list. */ 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }

    sort(ans.begin(), ans.end());

    for (int i = 1; i <= n; i++)
    {
        if (ans[i] != ans[i - 1])
            count++;
    }
    cout << count << endl;
}

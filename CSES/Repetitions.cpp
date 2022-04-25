/*You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence.
This is a maximum-length substring containing only one type of character. */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    cin >> n;
    char current;
    int answer = 0, count = 0;

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] != current)
        {
            current = n[i];
            count = 0;
        }

        if (n[i] == current)
        {
            count++;
        }
        answer = max(answer, count);
    }

    cout << answer;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void print_search(string &txt, string &pat)
{
    cout<<txt.find(pat)<<" ";
}

int main()
{
    string txt;

    cin >> txt;

    string pat;

    cin >> pat;

    print_search(txt, pat);

    return 0;
}
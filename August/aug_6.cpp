#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> &a, pair<char, int> &b)
{
    return a.second > b.second;
}

int sort(unordered_map<char, int> &mp)
{
    vector<pair<char, int>> temp;
    for (auto &it : mp)
    {
        temp.push_back(it);
    }
    sort(temp.begin(), temp.end(), cmp);
    int count = 0;
    int alpha_count = 1;
    for (auto &it : temp)
    {
        if (alpha_count <= 8)
            count += it.second;
        else if (alpha_count <= 16)
            count += (2 * it.second);
        else if (alpha_count <= 24)
            count += (3 * it.second);
        else
            count += (4 * it.second);

        alpha_count++;
    }
    return count;
}

class Solution
{
public:
    int minimumPushes(string word)
    {
        unordered_map<char, int> mp;
        for (int i = 0; i < word.size(); i++)
        {
            mp[word[i]]++;
        }
        return sort(mp);
    }
};

int main()
{

    return 0;
}
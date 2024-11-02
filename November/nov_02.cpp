#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    

class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n = sentence.size();
        int flag =0;
        if(sentence[0] == sentence[n-1]){
            flag =1;
        }
        for (int i = 1; i < n-1; i++)
        {
            if(sentence[i] == ' ' && (sentence[i-1] != sentence[i+1])){
                flag =0;
                break;
            }
            else{
                continue;
            }
        }
        if(flag ==0)
            return false;
        else
            return true;
    }
};

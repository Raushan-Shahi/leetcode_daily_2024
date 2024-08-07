#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
class Solution {
public:
    string hundred_conversion (int num){
        string digits[10] ={"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        string tenth_place_end[10] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninty"};
        string tenth_and_once[10] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen,", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

        stack<string> ans;
        if(num/100 >0){
            ans.push("Hundred");
            ans.push(digits[num/100]);
        }

        string result;
        while (!ans.empty())
        {
            result.append(ans.top());
            if(ans.top() != "");
                result.append(" ");
            ans.pop();
        }
        result.pop_back();
        return result;

        if(num/100 > 0){
            result.append(digits[num/100]);
            result.append(" Hundred");
        }

        if(num%100 <20 && num%100 >9){
            result.append(" ");
            result.append(tenth_and_once[(num%100)%10]);
        }

        else if(num%100 !=0){
            ans.push(tenth_place_end[(num%100)/10]);
            ans.push(digits[(num%100)%10]);
        }
    }

    string numberToWords(int num) {
        string result;
        int num1 = num/1000000000, temp1 = num%1000000000,
        num2 = temp1/1000000, temp2 = temp1%1000000,
        num3 = temp2/1000, temp3 = temp2%1000;

        if(num1 !=0){
            string front = hundred_conversion(num1);
            result.append(front);
            result.append(" Billion ");
        }
        if(num2 !=0){
            string front = hundred_conversion(num2);
            result.append(front);
            result.append(" Million ");
        }
        if(num3 !=0){
            string front = hundred_conversion(num3);
            result.append(front);
            result.append(" Thousand ");
        }
        if(temp3 !=0){
            result.append(hundred_conversion(temp3));
        }
        else 
            result = "";

        return result;
    }
};

int main(){
    
return 0;
}
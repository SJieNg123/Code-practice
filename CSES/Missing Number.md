# Missing Number
## Description
You are given all numbers between 1,2,...,n except one. Your task is to find the missing number.
<br>[Question link](https://cses.fi/problemset/task/1083)
## Solution
Here is my solution in cpp
<br>Time complexity is O(n)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n + 1, 0);
    int num;
    for(int i = 1; i < n; i++)
    {
        cin >> num;
        nums[num] = 1;
    }
    for(int i = 1; i <= n; i++)
    {
        if(nums[i] == 0)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}

```

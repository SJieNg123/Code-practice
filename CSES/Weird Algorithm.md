# Weird Algorithm
## Description
Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1.
Your task is to simulate the execution of the algorithm for a given value of n.
<br>[Question link](https://cses.fi/problemset/task/1068/)
## Solution
Here is my solution in cpp
<br>Time complexity is O(n)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long num;
    cin >> num;
    cout << num << " ";
    while(num)
    {
        if(num == 1)
        {
            break;
        }
        if(num % 2 == 1) // odd case
        {
            num = num * 3 + 1;
            cout << num;
        }
        else
        {
            num = num / 2;
            cout << num;
        }
        cout << " ";
    }
    cout << endl;
    return 0;
}
```

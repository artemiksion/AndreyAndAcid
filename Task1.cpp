#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, num;
    vector<int> a;
    cin >> n;
    cin >> num;
    a.push_back(num);
    for (int i = 1; i < n; ++i)
    {
        cin >> num;
        a.push_back(num);
        if (a[i] < a[i - 1])
        {
            cout << -1;
            return 0;
        }
    }
    cout << a[n - 1] - a[0];
    return 0;
}

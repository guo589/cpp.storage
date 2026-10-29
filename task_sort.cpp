#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    vector<int> vec;
    int n;
    cin >> n;
    int num;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());
    cout << "排序输出：";
    for(auto v : vec)
    {
        cout << v << " ";
    }
    cout << endl;

    set<int> s(vec.begin(), vec.end());
    cout << "去重输出：";
    for(auto val : s)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

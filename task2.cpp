#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    string line;
    getline(cin, line);
    stringstream ss(line);

    vector<string> words;
    string word;
    while (ss >> word)
    {
        words.push_back(word);
    }

    cout << words.size() << endl;

    for (int i = words.size() - 1; i >= 0; i--)
    {
        if (i != words.size() - 1)
            cout << " ";
        cout << words[i];
    }
    cout << endl;

    return 0;
}
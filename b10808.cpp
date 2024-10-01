#include <string>
#include <vector>
#include <iostream>


using namespace std;

int main()
{
    string a;
    cin >> a;
    int b[26];
    
    for (int i = 0; i < 26; i++)
    {
        b[i] = 0;
    }

    for (int i = 0; i < a.size(); i++)
    {
        b[a[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << b[i] << " ";
    }
    

}

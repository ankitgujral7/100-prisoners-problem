#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    int i;
    map<int, int> gen;
    srand(time(0));
    while (gen.size() < 100)
    {

        number = rand() % 100;
        if (gen.find(number) != gen.end())
        {
        }
        else
        {
            gen[number] = 1;
            cout << number << " ";
        }
    }
}
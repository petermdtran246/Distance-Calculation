#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int u, v, a;
    cout << "Enter u, v, a: ";
    cin >> u >> v >> a;
    float distance;
    distance = (float)((v*v-u*u)%(2*a));
    cout << distance;
    return 0;
}

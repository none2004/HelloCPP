#include <iostream>
#include "polymorphisme.hpp"
#include <vector>

using namespace std;

int main()
{
    vector<Figure*> tableau;
    tableau.push_back(new Triangle(3,4));
    int tailleTableau = tableau.size();
    for (int i(0);i < tailleTableau;i++)
    {
        delete tableau[i];
        tableau[i] = NULL;
    }
    return 0;
}

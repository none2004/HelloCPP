#include <iostream>
using namespace std;

main()
{

    double* pointeur{nullptr};
    pointeur = new double;

    if (pointeur)
    {
        cout << pointeur << endl;
        *pointeur = 10.5;
        cout << *pointeur << endl;
        delete pointeur;
        pointeur = nullptr;
    }

}

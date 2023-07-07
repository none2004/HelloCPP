#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iterator>
#include <deque>
using namespace std;

class Moyenne
{
public:
    Moyenne()
        :m_somme(0),m_denominateur(0)
    {}

    void operator()(int n)
    {
        m_somme += n;
        ++m_denominateur;
    }

    int resultat() const
    {
        return m_somme/m_denominateur;
    }

private:
    int m_somme;
    int m_denominateur;

};

class Generer
{
public:
    int operator()()
    {
        return rand() % 10;
    }
};

int main()
{
    srand(time(0));
    deque<int> tab(100,-1); //Un tableau de 100 cases

    //On génère les nombres aléatoires
    generate(tab.begin(), tab.end(), Generer());
    //On trie le tableau
    sort(tab.begin(), tab.end());
    //Et on l'affiche
    copy(tab.begin(), tab.end(), ostream_iterator<int>(cout, "\n"));
    return 0;
}
/*
int main()
{
    srand(time(0));
    vector<int> tab(100, -1);
    generate(tab.begin(), tab.end(), Generer());  //On génère des nombres aléatoires

    Moyenne moyenne;

    //On somme les éléments et on récupère le foncteur utilisé
    moyenne = for_each(tab.begin(), tab.end(), moyenne);

    cout << "La moyenne des elements generes est : " << moyenne.resultat() << endl;

    return 0;
}
*/

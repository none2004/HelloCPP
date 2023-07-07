#define _USE_MATH_DEFINES

#include "polymorphisme.hpp"
#include <iostream>
#include <cmath>
using namespace std;

void Figure::afficher() const
{
    cout << "Je suis une figure" << endl;
}

Figure::~Figure()
{
    cout << "Delete" << endl;
}

Triangle::Triangle(double base, double hauteur): m_base(base),m_hauteur(hauteur)
{

}

void Triangle::afficher() const
{
    cout << "Je suis un triangle" << endl;
}

double Triangle::perimetre() const
{
    return m_base + m_hauteur + sqrt(pow(m_base,2)+pow(m_hauteur,2));
}

double Triangle::aire() const
{
    return m_base * m_hauteur / 2;
}

Carre::Carre(double longueur): m_longueur(longueur)
{

}

void Carre::afficher() const
{
    cout << "Je suis un carre" << endl;
}

double Carre::aire() const
{
    return pow(m_longueur,2);
}

double Carre::perimetre() const
{
    return m_longueur * 2;
}

Rectancle::Rectancle(double longueur, double largeur): m_longueur(longueur),m_largeur(largeur)
{

}

void Rectancle::afficher() const
{
    cout << "Je suis un rectancle" << endl;
}

double Rectancle::aire() const
{
    return m_longueur * m_largeur;
}

double Rectancle::perimetre() const
{
    return m_longueur + m_largeur;
}

Cercle::Cercle(double rayon):  m_rayon(rayon)
{

}

void Cercle::afficher() const
{
    cout << "Je suis un cercle" << endl;
}

double Cercle::aire() const
{
    return M_PI * pow(m_rayon,2);
}

double Cercle::perimetre() const
{
    return 2 * M_PI * m_rayon;
}

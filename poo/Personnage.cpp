#include <iostream>
#include <string>
#include "Personnage.hpp"

using namespace std;

Point::Point(int x, int y):m_x
{

}

void Point::afficher() const
{
    cout << m_x << "/" << m_y;
}

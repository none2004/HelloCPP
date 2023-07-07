#include "NombreRationnel.h"

NombreRationnel::NombreRationnel()
{
    //ctor
}

NombreRationnel::~NombreRationnel()
{
    //dtor
}

NombreRationnel::Fraction(int num, int den) : m_numerateur(num), m_denominateur(den) {}

NombreRationnel::Fraction(int entier) : m_numerateur(entier), m_denominateur(1) {}

NombreRationnel::Fraction() : m_numerateur(0), m_denominateur(1) {}

void NombreRationnel::affiche(std::ostream& flux) const

{

    if(m_denominateur == 1)

    {

        flux << m_numerateur;

    }

    else

    {

        flux << m_numerateur << '/' << m_denominateur;

    }

}

std::ostream& operator<<(std::ostream& flux, Fraction const& fraction)

{

    fraction.affiche(flux);

    return flux;

}

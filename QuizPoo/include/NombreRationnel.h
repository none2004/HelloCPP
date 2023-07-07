#ifndef NOMBRERATIONNEL_H
#define NOMBRERATIONNEL_H


class NombreRationnel
{
public:
    NombreRationnel();
    ~NombreRationnel();
    Fraction(int num, int den);
    Fraction(int num);
    Fraction();
    void affiche(std::ostream& flux) const
private:
    int m_numerateur;
    int m_denominateur;
};

#endif // NOMBRERATIONNEL_H

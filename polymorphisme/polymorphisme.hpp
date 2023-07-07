#ifndef POLYMORPHISME_HPP_INCLUDED
#define POLYMORPHISME_HPP_INCLUDED

class Figure
{
public:
    virtual void afficher() const;
    virtual double perimetre() const = 0;
    virtual double aire() const = 0;
    virtual ~Figure();
};

class Triangle:public Figure
{
public:
    Triangle(double base, double hauteur);
    virtual void afficher() const;
    virtual double perimetre() const;
    virtual double aire() const;
private:
   double m_base;
   double m_hauteur;
};

class Carre:public Figure
{
public:
    Carre(double longueur);
    virtual void afficher() const;
    virtual double perimetre() const;
    virtual double aire() const;
private:
    double m_longueur;
};

class Rectancle:public Figure
{
public:
    Rectancle(double longueur, double largeur);
    virtual void afficher() const;
    virtual double perimetre() const;
    virtual double aire() const;
private:
    double m_longueur;
    double m_largeur;
};

class Cercle:public Figure
{
public:
    Cercle(double rayon);
    virtual void afficher() const;
    virtual double perimetre() const;
    virtual double aire() const;
private:
    double m_rayon;
};

#endif // POLYMORPHISME_HPP_INCLUDED

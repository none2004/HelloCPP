#ifndef TEMPLATE_HPP_INCLUDED
#define TEMPLATE_HPP_INCLUDED

template<typename T>
T pluspetit(T a, T b)
{
    if (a < b)
    {
        return a;
    } else
    {
        return b;
    }
}

#endif // TEMPLATE_HPP_INCLUDED

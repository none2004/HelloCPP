#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int*> my_vector;
    my_vector.push_back(new int(0)));
    my_vector.push_back(new int(1));
    my_vector.push_back(new int(2));
    my_vector.push_back(new int(3)));
    unsigned short my_vector_size(my_vector.size());
    for(unsigned short my_vector_index(0); my_vector_index < my_vector_size; my_vector_index++)
    {
        cout << my_vector[my_vector_index] << endl;
    }
    return 0;
}


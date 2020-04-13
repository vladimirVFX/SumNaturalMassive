// SumNaturalMassive.cpp
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //Define_variable
    const int N = 10;
    int mass[N];
    double sum = 0, sume = 0, sumo = 0;

    //Main_cycle
    for (int i = 0; i < N; i++) {
        mass[i] = i;
        sum += mass[i];
        sume += mass[i] * 2;
        sumo += mass[i] * 2 + 1;
    }

    //Output_sums
    std::cout << "Sum_massive_element: " << sum << "\n";
    std::cout << "Sum_massive_even_element: " << sume << "\n";
    std::cout << "Sum_massive_odd_element: " << sumo << "\n";
    
    for (int i = 0; i < N; i++){
        std::cout << mass[i];
    }

    return 0;
}


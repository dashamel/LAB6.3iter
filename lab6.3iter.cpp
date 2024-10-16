#include <iostream>
#include <iomanip> 
#include <ctime>
using namespace std; 
 

void Mas(const int* mas, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << setw(3) << mas[i];  
    }
    cout << endl;
}

int Min(const int* mas, int size)
{
    int min = mas[0]; 
    for (int i = 1; i < size; ++i) 
    {
        if (mas[i] < min)
        {
            min = mas[i]; 
        }
    }
    return min;
} 

int main() {
    const int size = 5;
    srand(time(NULL)); 
    int mas[size] = { rand()%10, rand()%10, rand()%10, rand()%10, rand()%10}; 

    cout << "Array: "; 
    Mas(mas, size);      

    int minValue = Min(mas,size);   
    cout << "Minimal element: " << minValue << endl;

    return 0;
}

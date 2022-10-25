
#include <iostream>

using namespace std;

#define MIN(X, Y)  ((X) < (Y) ? (X) : (Y)) // нахождение меньшего числа
#define MAX(X, Y)  ((X) > (Y) ? (X) : (Y)) // нахождение большего числа
#define SQR(A) (A)*(A) // возведение числа в квадрат
#define STP(A, B) pow((A), (B)) // возведение числа в степень
#define EVEN_ODD(A) ((A)%2 ? "odd": "even") // проверка числа на четность и нечетность


int main()
{
    cout << MIN(10, 45) << endl;
    cout << MAX(10, 45) << endl;
    cout << SQR(6) << endl;
    cout << STP(3, 4) << endl;
    cout << EVEN_ODD(99) << std::endl;
}



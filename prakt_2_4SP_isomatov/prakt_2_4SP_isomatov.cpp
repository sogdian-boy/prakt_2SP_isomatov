//8. Создайте класс "Triangle" с приватными полями "side1" (вещественное число), "side2" (вещественное число) и "side3" (вещественное число) и публичным методом для нахождения площади.
#include <iostream>
#include <math.h>
class Triangle
{
private: double side1;
private: double side2;
private: double side3;
public:Triangle(double side1, double side2, double side3)
    : side1(side1), side2(side2), side3(side3)
{
}
public:double CalculateS()
{
    double p = (side1 + side2 + side3) / 2;
    double s = sqrt(p * (p - side1) * (p - side2) * (p - side3));
    return s;
}
};
int main()
{
    double s1;
    double s2;
    double s3;
    std::cout << "Enter side 1: ";
    std::cin >> s1;
    std::cout << "Enter side 2: ";
    std::cin >> s2;
    std::cout << "Enter side 3: ";
    std::cin >> s3;
    Triangle tr = { s1, s2, s3 };
    std::cout << "square: " << tr.CalculateS();


}
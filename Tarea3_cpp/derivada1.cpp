#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

double f(double x);
double derivadaForward(double x0, double h);
double derivadaCentral(double x0, double h);
double errorPorcentual(double derivada_aproximada, double derivada_exacta);

int main()
{

    fstream archivo("datos_error.txt", ios::out);
    double x = 4.321;
    double derivada_exacta = 4*sin(x)+4*x*cos(x);
    int contador = 1;

    for (double h = 1e-1; h >= 1e-10; h /= 10)
    {
        
        contador ++;

        if (contador != 10)
        {
            double derivadaFoward2 = derivadaForward(x, h);
            double derivadaCentral2 = derivadaCentral(x, h);

            double error_forward = errorPorcentual(derivadaFoward2, derivada_exacta);
            double error_central = errorPorcentual(derivadaCentral2, derivada_exacta);

            std::cout << h << " " << error_forward << " " << error_central << "\n";
            archivo << h << "," << error_forward << "," << error_central << endl;
        }
    }
    archivo.close();
    return 0;
}

double f(double x)
{
    return 4 * x * sin(x) + 7;
}

double derivadaForward(double x0, double h)
{
    return (f(x0 + h) - f(x0)) / h;
}

double derivadaCentral(double x0, double h)
{
    return (f(x0 + h / 2) - f(x0 - h / 2)) / h;
}

double errorPorcentual(double derivada_aproximada, double derivada_exacta)
{
    return abs((derivada_aproximada - derivada_exacta) / derivada_exacta);
}
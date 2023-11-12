/*
 * Defining a function template follows the same syntax as regular function, except
 * that it is preceded by the template keyword and a series of template parameters
 * enclosed in angle brackets < >
 *
 * example:
 *
 * template <template-parameters> function-declaration
 *
 * The template parameters are a series of parameters seperated by commas. These parameters
 * can be generic template types by specifying either the class or typename keyword followed
 * by an identifier. This identifier can then be used in the function declaration as if it was
 * a regular type.
 *
 * example:
 *
 * template <class SomeType>
 * SomeType sum(SomeType a, SomeType b) {
 *
 *      return a + b;
 * }
 *
 * It makes no difference whether the generic type is specified with keyword class or keyword
 * typename in the template argument list.
 *
 * Instantiating a template is applying the template to create a function using particular types
 * or values for its template parameters. This is done by calling the function template, with the
 * same syntax as calling a regular function, but specifying the template arguments enclosed in
 * angle brackets:
 *
 * example
 *
 * name <template-arguments> (function-arguments)
 *
 * x = sum<int>(10, 20);
 *
 *The compiler is even able to deduce the data type automatically without having to explicitly
 * specify it within angle brackets. Therefore, instead of explicitly specifying the template
 * arguments with:
 *
 * k = sum<int>(i, j);
 * h = sum<double>(f, g);
 *
 * it is possible to instead simply write:
 *
 * k = sum(i, j);
 * h = sum(f, g);
 *
 * Naturally, for that, the type shall be unambiguous. If sum is called with arguments of different
 * types, the compiler may not be able to deduce the type of T automatically.
 *
 * 
 */
#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b) {
    T result;
    result = a + b;
    return result;
}

int main() {
    int i = 5, j = 6, k;
    double f = 2.0, g = 0.5, h;

    k = sum<int>(i, j);
    h = sum<double>(f, g);

    cout << k << '\n';
    cout << h << '\n';

    return 0;
}
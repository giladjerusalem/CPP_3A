#include <iostream>
#include <vector>
#include "Matrix.hpp"

using namespace std;

namespace zich
{
    Matrix::Matrix(vector<double> arr, int length, int wide)    //constructor
    {
        mat = vector<vector<double>>((size_t)length, vector<double>((size_t)wide, 0.0));

    }

    Matrix Matrix::operator + (Matrix const &a)
    {
        vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
        return Matrix(arr, 3, 3);
    }
    Matrix Matrix::operator + ()
    {
        vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
        return Matrix(arr, 3, 3);
    }
    void Matrix::operator ++ ()  // ++x
    {
    }

    void Matrix::operator ++ (int)  //  x++
    {
    }

    void Matrix::operator -- ()  // --x
    {
    }

    void Matrix::operator -- (int)  //  x--
    {
    }


    Matrix Matrix::operator - (Matrix const &a)
    {
        vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
        return Matrix(arr, 3, 3);
    }
    Matrix Matrix::operator - ()
    {
        vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
        return Matrix(arr, 3, 3);
    }

    void Matrix::operator += (Matrix const &a)
    {
    }

    void Matrix::operator -= (Matrix const &a)
    {
    }

    bool Matrix::operator == (Matrix const &a)
    {
        return true;
    }
    bool Matrix::operator != (Matrix const &a)
    {
        return true;
    }
    bool Matrix::operator < (Matrix const &a)
    {
        return true;
    }
    bool Matrix::operator > (Matrix const &a)
    {
        return true;
    }bool Matrix::operator >= (Matrix const &a)
    {
        return true;
    }
    bool Matrix::operator <= (Matrix const &a)
    {
        return true;
    }



    Matrix operator * (Matrix const &a)
    {
        vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
        return Matrix(arr, 3, 3);
    }
    Matrix Matrix::operator * (double num)
    {
        vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
        return Matrix(arr, 3, 3);
    }
    void Matrix::operator *= (Matrix const &a)
    {
    }
    void Matrix::operator *= (double num)
    {
    }

    istream &operator >> (istream &input, const Matrix &a)
    {
        return input;    
    }    
    ostream &operator << (ostream &output, const Matrix &a)
    {
        output << "_test_ " << endl;
        return output;
    }

    Matrix operator * (double num, Matrix const &a)
    {
        vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
        return Matrix(arr, 3, 3);
    }
}
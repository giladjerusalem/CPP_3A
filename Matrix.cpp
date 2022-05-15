#include <iostream>
#include <vector>
#include "Matrix.hpp"

using namespace std;

namespace zich
{
    Matrix::Matrix(vector<double> arr, int length, int wide)    //constructor
    {
        if(length<=0 || wide<=0)
        {
            throw invalid_argument("arguments need to be positive");
        }
        if(arr.size() != length*wide)
        {
            throw invalid_argument("arr size is not in line with the length and width arguments");
        }
        mat = vector<vector<double>>((size_t)length, vector<double>((size_t)wide, 0.0));

    }

    Matrix Matrix::operator + (Matrix const &a)
    {
        if (mat.size() != a.mat.size() || mat[0].size() != a.mat[0].size()) //i could do function to check it, but i preferred like this.
        {
            throw invalid_argument("Both matrix must have same number of line and col");
        }
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
        if (mat.size() != a.mat.size() || mat[0].size() != a.mat[0].size())     //check if length and wide are same
        {
            throw invalid_argument("Both matrix must have same number of line and col");
        }
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
        if (this->mat.size() != a.mat.size() || this->mat.at(0).size() != a.mat.at(0).size ())  //used this just for being forma
        {
            throw invalid_argument("Both matritions must have same number of lines and col");
        }
    }

    void Matrix::operator -= (Matrix const &a)
    {
         if (this->mat.size() != a.mat.size() || this->mat.at(0).size() != a.mat.at(0).size ())
        {
            throw invalid_argument("Both matritions must have same number of lines and col");
        }
    }

    bool Matrix::operator == (Matrix const &a)
    {
        if (mat.size() != a.mat.size() || mat.at(0).size() != a.mat.at(0).size())
        {
            throw invalid_argument("Both matrix must have same number of line and col");
        }
        return true;
    }
    bool Matrix::operator != (Matrix const &a)
    {
        if (mat.size() != a.mat.size() || mat.at(0).size() != a.mat.at(0).size())
        {
            throw invalid_argument("Both matrix must have same number of line and col");
        }
        return true;
    }
    bool Matrix::operator < (Matrix const &a)
    {
        if (mat.size() != a.mat.size() || mat.at(0).size() != a.mat.at(0).size())
        {
            throw invalid_argument("Both matrix must have same number of line and col");
        }
        return true;
    }
    bool Matrix::operator > (Matrix const &a)
    {
        if (mat.size() != a.mat.size() || mat.at(0).size() != a.mat.at(0).size())
        {
            throw invalid_argument("Both matrix must have same number of line and col");
        }
        return true;
    }
    bool Matrix::operator >= (Matrix const &a)
    {
        if (mat.size() != a.mat.size() || mat.at(0).size() != a.mat.at(0).size())
        {
            throw invalid_argument("Both matrix must have same number of line and col");
        }
        return true;
    }
    bool Matrix::operator <= (Matrix const &a)
    {
        if (mat.size() != a.mat.size() || mat.at(0).size() != a.mat.at(0).size())
        {
            throw invalid_argument("Both matrix must have same number of line and col");
        }
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
        if (mat[0].size() != a.mat.size()) // if the mat-col != from a.mat-line its not possible to multyply.
        {
            throw invalid_argument("The col of the left mat must be equal to the line of right mat -> for example: 3x2 2x3");
        }
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
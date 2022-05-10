#include <iostream>
#include <vector>

using namespace std;

namespace zich
{
    class Matrix
    {
    public:
        vector<vector<double>> mat;

        Matrix(vector<double>, int, int);
        Matrix operator + (Matrix const &a); // A + B
        Matrix operator + (); // +A
        
        void operator ++ ();  // ++A
        void operator ++ (int);  //  A++ number
        void operator -- ();  // --A
        void operator -- (int);  //  A-- number
        
        Matrix operator - (Matrix const &a); // A - B
        Matrix operator - (); // -B

        void operator += (Matrix const &a); // A += B
        void operator -= (Matrix const &a); // A -= B

        bool operator == (Matrix const &a); // A == B
        bool operator != (Matrix const &a); // A != B
        bool operator < (Matrix const &a); // A < B
        bool operator > (Matrix const &a); // A > B
        bool operator >= (Matrix const &a); // A >= B
        bool operator <= (Matrix const &a); // A <= B

        Matrix operator * (Matrix const &a); // A * B
        Matrix operator * (double); // A * 5
        void operator *= (Matrix const &a); // A *= B
        void operator *= (double); // A *= 5
        
        friend istream &operator >> (istream &input, const Matrix &a);
        friend ostream &operator << (ostream &output, const Matrix &a);
    };
    
    Matrix operator * (double, Matrix const &a); // 3 * A
}
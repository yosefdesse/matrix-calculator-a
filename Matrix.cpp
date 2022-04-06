
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
# include "Matrix.hpp"



using namespace zich;
   
   

    Matrix :: Matrix(vector<double> &vec, int row , int col)
    {
        // this->row = row;
        // this->col = col;


    };
    Matrix :: ~Matrix(){}
    // void zich::Matrix::read_units(ifstream &units){  }

    Matrix zich::operator+(const Matrix &mtx1, const Matrix &mtx2){ return mtx1 ; }
    Matrix zich::operator+=(const Matrix &mtx1, const Matrix &mtx2){ return mtx1 ; }
    Matrix operator++(const Matrix &mtx1, int){ return mtx1 ; }
    Matrix zich::operator-(const Matrix &mtx1, const Matrix &mtx2){ return mtx1 ; }
    Matrix zich::operator-(const Matrix &mtx1){ return mtx1 ; }
    Matrix operator-=(const Matrix &mtx1, const Matrix &mtx2){ return mtx1 ; }
    Matrix operator--(const Matrix &mtx1, int){ return mtx1 ; }
    
    bool zich::operator>(const Matrix &mtx1, const Matrix &mtx2){ return true ; }
    bool zich::operator>=(const Matrix &mtx1, const Matrix &mtx2){ return true ; }
    bool operator<(const Matrix &mtx1, const Matrix &mtx2){ return true ; }
    bool zich::operator<=(const Matrix &mtx1, const Matrix &mtx2){ return true ; }
    bool zich::operator==(const Matrix &mtx1, const Matrix &mtx2){ return true ; }
    bool operator!=(const Matrix &mtx1, const Matrix &mtx2){ return true ; }

    Matrix operator++(const Matrix &mtx1){ return mtx1 ; }
    Matrix operator--(const Matrix &mtx1){ return mtx1 ; }

    Matrix zich::operator*(const Matrix &mtx1 , double num ){ return mtx1 ; }
    Matrix zich::operator*(double num , const Matrix &mtx1 ){ return mtx1 ; }
    Matrix zich::operator*=(const Matrix &mtx1 , double num){  return mtx1;  }
    Matrix zich::operator*=(double num , const Matrix &mtx1 ){  return mtx1;  }



    ostream& zich::operator<<(ostream &os , const Matrix &mtx1){ return os ;};
    istream& zich::operator>>(istream &is , const Matrix &mtx1){ return is ;};
    

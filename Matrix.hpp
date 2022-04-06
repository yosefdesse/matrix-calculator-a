#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <ostream>
#include <istream>
#include <vector>

using namespace std;


namespace zich
{
    class Matrix
    {
        private:



           

        public:
            unsigned int row;
            unsigned int col;
            vector<vector<double>> matrix;       
            Matrix(vector<double> &vec, int row , int col);
            ~Matrix();

            friend Matrix operator+(const Matrix &mtx1, const Matrix &mtx2);
            friend Matrix operator+=(const Matrix &mtx1, const Matrix &mtx2);
            friend Matrix operator++(const Matrix &mtx1, int);
            friend Matrix operator-(const Matrix &mtx1);
            friend Matrix operator-(const Matrix &mtx1 , const Matrix &mtx2);
            friend Matrix operator-=(const Matrix &mtx1, const Matrix &mtx2);
            friend Matrix operator--(const Matrix &mtx1, int);

            friend bool operator>(const Matrix &mtx1, const Matrix &mtx2);
            friend bool operator>=(const Matrix &mtx1, const Matrix &mtx2);
            friend bool operator<(const Matrix &mtx1, const Matrix &mtx2);
            friend bool operator<=(const Matrix &mtx1, const Matrix &mtx2);
            friend bool operator==(const Matrix &mtx1, const Matrix &mtx2);
            friend bool operator!=(const Matrix &mtx1, const Matrix &mtx2);
            
            friend Matrix operator++(const Matrix &mtx1);
            friend Matrix operator--(const Matrix &mtx1);

            friend ostream& operator<<(ostream &os , const Matrix &mtx1);
            friend istream& operator>>(istream &is , const Matrix &mtx1);
           


            friend Matrix operator*(const Matrix &mtx1 , double num );
            friend Matrix operator*(double num , const Matrix &mtx1 );
            friend Matrix operator*=(const Matrix &mtx1 , double num);
            friend Matrix operator*=(double num , const Matrix &mtx1 );

    };
}
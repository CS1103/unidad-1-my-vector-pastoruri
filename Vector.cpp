//
// Created by rudri on 3/29/2019.
//

#include "Vector.h"
#include <iostream>
using namespace std;
namespace UTEC {
    vector::vector() : _arr{nullptr}, _size(0) {}


    void vector::push_back(const int &value) {

        int* arr = new int[_size+1];
        for(int i=0; i<_size;i++) {
            arr[i] = _arr[i];
        }
        arr[_size]=value;
        _arr=arr;
        _size+=1;

    }

    void vector::pop_back() {
        int* arr = new int[_size-1];
        for(int i=0;i<_size-1;i++){
            arr[i]=_arr[i];
        }
        _arr=arr;
        _size-=1;
    }

    void vector::insert(int pos, const int &value) {

        int* arr = new int[_size+1];
        for(int i=0; i<pos;i++) {
            arr[i] = _arr[i];
        }
        arr[pos]=value;
        for(int i=pos+1; i<_size+1;i++) {
            arr[i] = _arr[i - 1];
        }
        _arr=arr;

    }


    vector::~vector() {
        delete[] _arr;
    }

    int vector::size() {return _size;}

    int vector::get_item(int i) {return _arr[i];}
}
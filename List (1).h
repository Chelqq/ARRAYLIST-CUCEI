#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <string>
#include <iostream>

#include "listException.h"

class List
{
    public:
        List();
        ~List();
        List(const List&);
        List& operator=(const List&);

        bool isEmpty();
        bool isFull();

        void insertData(const int&, const int&); ///pos, elem
        void deleteData(const int&); ///pos

        int getFirstPos();
        int getLastPos();
        int getPrevPos(const int&);
        int getNextPos(const int&);

        int retrieve(const int&);

        std::string toString();

        void print();
        void deleteAll();


    protected:

    private:
        int data[500];
        int last;

        bool isValidPos(const int&);

        void copyAll(const List&);

        };

#endif // LIST_H

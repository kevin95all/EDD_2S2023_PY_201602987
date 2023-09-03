#pragma once

#ifndef TDA_H
#define TDA_H

#include "Node.h"


using namespace std;


class Matriz_disperza {

public:

private:
    Node *head;

    Node *head_ver(int row);

    Node *head_hor(int col);
};

#endif
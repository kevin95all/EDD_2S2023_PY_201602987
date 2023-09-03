#pragma once

#ifndef Node_H
#define Node_H

class Node {

public:

    int row;
    int col;
    int val;
    Node *up;
    Node *dow;
    Node *left;
    Node *right;
};

#endif
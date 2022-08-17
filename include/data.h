//
// Created by siamakmirifar on 15.08.22.
//

#ifndef HANDWRITTINGDETECTION_DATA_H
#define HANDWRITTINGDETECTION_DATA_H

#include <vector>
#include <iostream>
#include "stdint.h"
#include "stdio.h"


class data {
    std::vector<uint8_t>* feature_vector;
    uint8_t label;
    int enum_label; // A -> 1, B -> 2
    double distance;

public:
    data();
    ~data();

    void set_feature_vector(std::vector<uint8_t> *);
    void append_to_feature_vector(uint8_t);
    void set_label(uint8_t);
    void set_enumerated_label(int);
    void set_distance(double val);
    // return functions
    int get_feature_vector_size();
    double get_distance();
    uint8_t get_label();
    uint8_t get_enumerated_label();

    std::vector<uint8_t>* get_feature_vector();

};


#endif //HANDWRITTINGDETECTION_DATA_H

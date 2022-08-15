//
// Created by siamakmirifar on 15.08.22.
//

#include "../include/data.h"

data::data(){}

void set_feature_vector(std::vector<uint8_t> *){}
void append_to_feature_vector(uint8_t){}
void set_label(uint8_t){}
void set_enumerated_label(int){}

// return functions
int get_feature_vector_size(){}
uint8_t get_label(){}
uint8_t get_enumerated_label(){}

std::vector<uint8_t>* get_feature_vector(){}

data::~data(){}
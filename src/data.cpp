//
// Created by siamakmirifar on 15.08.22.
//

#include "../include/data.h"

data::data(){
    // std::cout << "Data constructed" << std::endl;
    this->feature_vector = new std::vector<uint8_t>;
}

void data::set_feature_vector(std::vector<uint8_t> *vect)
{
    this->feature_vector = vect;
}

void data::append_to_feature_vector(uint8_t val)
{
    this->feature_vector->push_back(val);
}

void data::set_label(uint8_t val)
{
    this->label = val;
}

void data::set_enumerated_label(int label)
{
    this->enum_label = label;
}

void data::set_distance(double val)
{
    this->distance = val;
}

// return functions
int data::get_feature_vector_size()
{
    return this->feature_vector->size();
}

uint8_t data::get_label()
{
    return this->label;
}

double data::get_distance()
{
    return distance;
}

uint8_t data::get_enumerated_label()
{
    return this->enum_label;
}

std::vector<uint8_t>* data::get_feature_vector()
{
    return this->feature_vector;
}

data::~data()
{
    // std::cout << "data deconstructed" << std::endl;
}
//
// Created by siamakmirifar on 15.08.22.
//

#include "../include/data_handler.h"


data_handler::data_handler(){}

void read_feature_vector(std::string path){}
void read_feature_labels(std::string path){}
void split_data(){}
void count_classes(){}

// return functions
uint32_t convert_to_little_endian(const unsigned char* bytes){}

std::vector<data *> * get_training_data(){}
std::vector<data *> * get_test_data(){}
std::vector<data *> * get_validation_data(){}

data_handler::~data_handler(){}
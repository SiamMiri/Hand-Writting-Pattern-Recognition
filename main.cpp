#include <iostream>
#include "include/data_handler.h"
#include "KNN/include/knn.h"

int
main() {

    data_handler *dh = new data_handler();
    dh->read_feature_vector("/home/siamakmirifar/Documents/Programming/C++Training/MachineLearning/Hand-Writting-Pattern-Recognition/train-images.idx3-ubyte");
    dh->read_feature_labels("/home/siamakmirifar/Documents/Programming/C++Training/MachineLearning/Hand-Writting-Pattern-Recognition/train-labels.idx1-ubyte");
    dh->split_data();
    dh->count_classes();
    knn *knearest = new knn();
    knearest->set_training_data(dh->get_training_data());
    knearest->set_validation_data(dh->get_validation_data());
    knearest->set_test_data(dh->get_test_data());
    double performance = 0;
    double best_performance = 0;
    int best_k = 1;
    for(int i = 0 ; i <= 4; i++)
    {
        if(i == 1)
        {
            knearest->set_k(i);
            performance = knearest->validation_performance();
            best_performance = performance;
        }else
        {
            knearest->set_k(i);
            performance = knearest->validation_performance();
            if(performance > best_performance)
            {
                best_performance = performance;
                best_k = i;
            }
        }
    }
    knearest->set_k(best_k);
    knearest->test_performance();
    best_k = 0;
    return 0;
}

#pragma once
#include "Tableau.h"
namespace inter {
    class TableauBorne : public Tableau
    {
    private:
        double min;
        double max;
    public:
        TableauBorne(unsigned int t, double min, double max);
        double operator[](unsigned int i);
        void operator()(unsigned int i,double val);
    };
}

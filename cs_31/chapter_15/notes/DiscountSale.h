//
// Created by Thomas Pan on 6/11/18.
//

#ifndef NOTES_DISCOUNTSALE_H
#define NOTES_DISCOUNTSALE_H
#include "Sale.h"

namespace SavitchSale {
    class DiscountSale : public Sale {
    public:
        DiscountSale();
        DiscountSale(double thePrice, double theDiscount);
        double getDiscount() const;
        void setDiscount(double newDiscount);
        double bill() const;

    private:
        double discount;
    };
}


#endif //NOTES_DISCOUNTSALE_H

#include <iostream>

int main() {
    int productCost = 5000;
    int delivery = 200;
    int discount = 700;

    int fullCost = productCost + delivery - discount;

    std::cout << "The cost of your product is " << productCost << ", delivery will cost you " << delivery <<
                 ", your discount becomes " << discount << ". Taking this into account, the total cost of the product: "
                 << fullCost << std::endl;
}

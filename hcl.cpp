#include <iostream>
#include <cmath>

const double waterMol = 18;
const double hydrochloricAcid = 30.9;
const double beaker = 20;

int main() {
    double ratio1;
    double ratio2;
    std::cout << "Type ratio of water to HCl\n";
    std::cin >> ratio1;
    std::cin >> ratio2;
    std::cout << (ratio1 / (ratio1 + ratio2)) * (ratio2 / ratio1) << " concentration\n" << beaker / (waterMol * ratio1 + hydrochloricAcid * ratio2) * waterMol * ratio1 << " ml water\n" <<  beaker / (waterMol * ratio1 + hydrochloricAcid * ratio2) * hydrochloricAcid * ratio2 << " ml hydrochloric acid\n";
    system("pause");
    return 0;
}
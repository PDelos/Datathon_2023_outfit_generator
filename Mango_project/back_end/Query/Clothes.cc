#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include "Clothes.hh"
using namespace std;


Clothes::Clothes() {
    id = color = sex = age = cathegory = aggregatedFamily = ""; // Set everything to empty string as default
    kind.clear();
    kind.resize(3);
}

Clothes::Clothes(string idr, string colorr, string sexr, string ager, string cathegoryr, string aggregatedFamilyr, string prodFamilyr) {
    id = idr;
    color = colorr;
    sex = sexr;
    age = ager;
    cathegory = cathegoryr;
    aggregatedFamily = aggregatedFamilyr;
    prodFamily = prodFamilyr;

    kind.clear();
    kind.resize(3);

    // Set which kind is the new product
    if (cathegory == "Bottoms")   kind[0] = true;
    if (cathegory == "Tops")      kind[1] = true;
    if (cathegory == "Outerwear") kind[2] = true;
    if (cathegory == "Dresses, jumpsuits and Complete set") {
        kind[0] = kind[1] = kind[2] = true;
    }
}

// Simple methods

string Clothes::getId() {
    return id;
}

string Clothes::getColor() {
    return color;
}

string Clothes::getSex() {
    return sex;
}

string Clothes::getAge() {
    return age;
}

string Clothes::getCathegory() {
    return cathegory;
}

string Clothes::getAggregatedFamily() {
    return aggregatedFamily;
}

string Clothes::getProdFamily() {
    return prodFamily;
}

vector<bool> Clothes::getType() {
    return kind;
}

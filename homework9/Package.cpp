//
// Created by Lucas on 11/2/2019.
//

#include "Package.h"
#include <iostream>

using namespace std;

//Constructor
Package::Package(char *n1, char *a1, char *c1, char *z1, char *n2, char *a2, char *c2, char *z2, double w, double c)
        : senderName(n1), senderAddress(a1), senderCity(c1), senderZip(z1), receiverName(n2), receiverAddress(a2),
          receiverCity(c2), receiverZip(z2), Weight(w), Cost(c) {

}

//Calculate standard cost
double Package::calculateCost() const {
    return getWeight() * getCost();
}

//Print info for sender and receiver
void Package::print() const {
    cout << "Sender:" << endl;
    cout << getSendername() << endl;
    cout << getSenderaddress() << endl;
    cout << getSendercity() << " ," << getSenderzip() << endl;
    cout << "\nReceiver:" << endl;
    cout << getReceivername() << endl;
    cout << getReceiveraddress() << endl;
    cout << getReceivercity() << " ," << getReceiverzip() << endl;
}

//Print cost for each kind of package
void Package::printForcost() const {
    cout << "\nWeight of package: " << getWeight() << " ounces" << endl;
    cout << "Type of delivery: Regular Delivery" << endl;
    cout << "Cost of package: $" << calculateCost() << endl;
}

double Package::getWeight() const {
    return Weight;
}

void Package::setWeight(double weight) {
    Weight = weight >= 0.0 ? weight : 0.0;
}

double Package::getCost() const {
    return Cost;
}

void Package::setCost(double cost) {
    Cost = cost >= 0.0 ? cost : 0.0;
}

char *Package::getSendername() const {
    return senderName;
}

void Package::setSendername(char *name1) {
    senderName = name1;
}

char *Package::getSenderaddress() const {
    return senderAddress;
}

void Package::setSenderaddress(char *address1) {
    senderAddress = address1;
}

char *Package::getSendercity() const {
    return senderCity;
}

void Package::setSendercity(char *city1) {
    senderCity = city1;
}

char *Package::getSenderzip() const {
    return senderZip;
}

void Package::setSenderzip(char *zip1) {
    senderZip = zip1;
}

char *Package::getReceivername() const {
    return receiverName;
}

void Package::setReceivername(char *name2) {
    receiverName = name2;
}

char *Package::getReceiveraddress() const {
    return receiverAddress;
}

void Package::setReceiveraddress(char *address2) {
    receiverAddress = address2;
}

char *Package::getReceivercity() const {
    return receiverCity;
}

void Package::setReceivercity(char *city2) {
    receiverCity = city2;
}

char *Package::getReceiverzip() const {
    return receiverZip;
}

void Package::setReceiverzip(char *zip2) {
    receiverZip = zip2;
}
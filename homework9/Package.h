//
// Created by Lucas on 11/2/2019.
//

#ifndef HOMEWORK9_PACKAGE_H
#define HOMEWORK9_PACKAGE_H


class Package {
public:
    Package(char *, char *, char *, char *, char *, char *, char *, char *, double= 0.0, double= 0.0);

    virtual double calculateCost() const;

    void print() const;

    virtual void printForcost() const;

    double getWeight() const;

    void setWeight(double);

    double getCost() const;

    void setCost(double);

    char *getSendername() const;

    void setSendername(char *);

    char *getSenderaddress() const;

    void setSenderaddress(char *);

    char *getSendercity() const;

    void setSendercity(char *);

    char *getSenderzip() const;

    void setSenderzip(char *);

    char *getReceivername() const;

    void setReceivername(char *);

    char *getReceiveraddress() const;

    void setReceiveraddress(char *);

    char *getReceivercity() const;

    void setReceivercity(char *);

    char *getReceiverzip() const;

    void setReceiverzip(char *);

private:
    char *senderName;
    char *senderAddress;
    char *senderCity;
    char *senderZip;
    char *receiverName;
    char *receiverAddress;
    char *receiverCity;
    char *receiverZip;
    double Weight;
    double Cost;
};


#endif //HOMEWORK9_PACKAGE_H

//Haocong Wang 2019.10.19
//Header file for class IntegerSet

#ifndef INCLASS5_INTEGERSET_H
#define INCLASS5_INTEGERSET_H


class IntegerSet {
public:
    IntegerSet(); // constructor

    IntegerSet UnionOfSets(IntegerSet);

    IntegerSet IntersectionOfSets(IntegerSet);

    void inputSet(); // read values from user

    void printSet() const;

private:
    int set[101]; // range of 0 - 100

// determines a valid entry to the set
    int validEntry(int x) const {
        return (x >= 0 && x <= 100);
    } // end function validEntry

};


#endif //INCLASS5_INTEGERSET_H

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
public:
    virtual void callOut() const;
    virtual ~Animal() = default;
};

#endif // ANIMAL_H

#include "Wheel.h"

Wheel::Wheel(int sz, const string& tp) : size(sz), type(tp) {}

int Wheel::getSize() const { return size; }
void Wheel::setSize(int sz) { size = sz; }

string Wheel::getType() const { return type; }
void Wheel::setType(const string& tp) { type = tp; }

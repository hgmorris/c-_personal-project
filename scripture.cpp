#include "scripture.hpp"

Scripture::Scripture(const std::string& reference, const std::string& thoughts)
    : reference(reference), thoughts(thoughts) {}

const std::string& Scripture::getReference() const {
    return reference;
}

const std::string& Scripture::getThoughts() const {
    return thoughts;
}

bool Scripture::operator<(const Scripture& other) const {
    return reference < other.reference;
}

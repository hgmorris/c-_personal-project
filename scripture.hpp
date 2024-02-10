#ifndef SCRIPTURE_HPP
#define SCRIPTURE_HPP

#include <string>

class Scripture {
public:
    Scripture(const std::string& reference, const std::string& thoughts);

    const std::string& getReference() const;
    const std::string& getThoughts() const;

    bool operator<(const Scripture& other) const;

private:
    std::string reference;
    std::string thoughts;
};

#endif

#include <iostream>
#include <vector>
#include <algorithm>
#include "scripture.hpp"

int main() {
    std::vector<Scripture> scriptures;
    std::string reference, thoughts;

    // Read and store scriptures
    std::cout << "Enter your favorite scriptures (enter 'q' to quit):\n";
    while (true) {
        std::cout << "Scripture reference: ";
        std::getline(std::cin, reference);
        if (reference == "q")
            break;

        std::cout << "Spiritual thoughts: ";
        std::getline(std::cin, thoughts);

        scriptures.push_back(Scripture(reference, thoughts));
    }

    // Sort scriptures
    std::sort(scriptures.begin(), scriptures.end());

    // Print sorted list
    std::cout << "\nSorted list of scriptures:\n";
    for (const auto& scripture : scriptures) {
        std::cout << scripture.getReference() << " - " << scripture.getThoughts() << "\n";
    }

    // Search for a scripture
    std::cout << "\nEnter a scripture reference to search for: ";
    std::getline(std::cin, reference);

    auto it = std::find_if(scriptures.begin(), scriptures.end(),
                           [&reference](const Scripture& s) { return s.getReference() == reference; });

    if (it != scriptures.end()) {
        std::cout << "Scripture found: " << it->getReference() << " - " << it->getThoughts() << "\n";
    } else {
        std::cout << "Scripture not found.\n";
    }

    return 0;
}


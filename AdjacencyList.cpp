#include <iostream>

using namespace std;

template <typename T> class adjacencyList {
private:
  class Node {
  private:
    T city;
    Node *next;

  public:
    Node(T c) : city(c), next(nullptr) {}

    T get_city() { return city; }

    Node *get_next() { return next; }
  };

  class City {
  private:
    Node *connections;
    City *next;

  public:
    City() : connections(nullptr), next(nullptr) {}
  };

  City* first;
  City* last;
  unsigned int cityCount;

public:
  adjacencyList() : first(nullptr), cityCount(0) {}

  void add_city() {
    City* newCity = new City();
    if (first == nullptr) {
      first = newCity;
    } else {
      last->next = newCity;
    }
    cityCount++;
  }
};

int main() {
  return 0;
}

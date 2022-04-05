#include <iostream>
#include <vector>
#include <random>

template<typename T>
T random(std::vector<T> const &list) {
   std::random_device seed;
   // generator 
   std::mt19937 engine(seed());
   // number distribution
   std::uniform_int_distribution<int> choose(0, list.size() - 1) ;
   return list[choose(engine)];
}

int main() {
  std::vector<std::string> names = {"Robin", "Logan", "Vahan"};
  std::vector<std::string> words = {"adopté", "puceau", "pédophile", "juif", "coranique", "gay"};

  auto name = random(names);
  auto word = random(words);

  std::cout << name << " est " << word << std::endl;
  return 0;
}

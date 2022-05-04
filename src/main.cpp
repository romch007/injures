#include <iostream>
#include <vector>
#include <random>

template<typename T>
T random(std::vector<T> const &list) {
   std::random_device seed;
   std::mt19937 engine(seed());
   std::uniform_int_distribution<int> choose(0, list.size() - 1);
   return list[choose(engine)];
}

int main() {
  std::vector<std::string> names = {"Robin", "Logan", "Vahan"};
  std::vector<std::string> words = {"adopté", "puceau", "pédophile", "vraiment à chier en algèbre", "vraiment un connard", "le seul batard qui skip le leg day", "fan de python ce shlag", "est claqué sur Starbound"};

  auto name = random(names);
  auto word = random(words);

  std::cout << name << " est " << word << std::endl;
  return 0;
}

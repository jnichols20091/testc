#include <cstdio>

struct ClockOfTheLongNow {
  --snip--
};

struct Avout {
  Avout(const char* name, long year_of_apert) ➊
    :➋ name➌{ name }➍, apert➎{ year_of_apert }➏ {
  }
  void announce() const { ➐
    printf("My name is %s and my next apert is %d.\n", name, apert.get_year());
  }
  const char* name;
  ClockOfTheLongNow apert;
};

int main() {
  Avout raz{ "Erasmas", 3010 };
  Avout jad{ "Jad", 4000 };
  raz.announce();
  jad.announce();
}
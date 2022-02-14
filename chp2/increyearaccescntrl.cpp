struct ClockOfTheLongNow {
  void add_year() {
    year++;
  }
  bool set_year(int new_year) {  //setter
    if (new_year < 2019) return false; 
    year = new_year; //assaining year to another variable
    return true;
  }
  int get_year() {  //getter
    return year;
  }
private:
  int year; //keeps user from accesing year outside of ClockOfTheLongNow
};
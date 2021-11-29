#include <iostream>
#include<vector>
using namespace std;
class Name_value{
   public: string String;
   public :int value;
};
void print(vector<Name_value> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        cout << input.at(i).String<<' '<<input.at(i).value << ' ';
    }
}
int main() {
  vector<Name_value> vec;
  Name_value newNameVal;
  string newString;
  int newVal;
  while(newString != "NoName"||newVal!=0){
    if(newString == "NoName"&&newVal == 0){

    }
    cin >> newString;
    cin >> newVal;
    newNameVal.String = newString;
    newNameVal.value = newVal;
    vec.push_back(newNameVal);
  }
  vec.pop_back();
  print(vec);

}
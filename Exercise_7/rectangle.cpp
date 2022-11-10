#include <iostream>
using namespace std;

class Rectangle {
    private:
        float length;
        float width;
        
    public:
        // 2 arg constructor
        Rectangle(float len, float wid) {
            length = len;
            width = wid;
        }
        
        // 0 arg constructor
        Rectangle() {
        }
        
        // getter method for length
        float getLength() {
            return length;
        }
        
        // getter method for width
        float getWidth() {
            return width;
        }
        
        // setter method for length
        void setLength(float len) {
            length = len;
        }
        
        // setter method for width
        void setWidth(float wid) {
            width = wid;
        }
        
        // perimeter calculator
        float perimeter() {
            return (length * 2) + (width * 2);
        }
        
        // area calculator
        float area() {
            return length * width;
        }
        
        // toString method
        void show() {
            cout << "Length: " << length << "\n";
            cout << "Width: " << width << "\n";
        }
        
        // compares two rectangle's area and checks if they are the same
        int sameArea(Rectangle rec) {
            if (area() == rec.area()) { // same area
                return 1;
            }
            else { // different area
                return 0;
            }
        }
};

int main() {
  Rectangle rec1;
  Rectangle rec2;
  
  rec1.setLength(5);
  rec1.setWidth(2.5);
  rec2.setLength(5);
  rec2.setWidth(18.9);
  
  cout << "Rectangle1 Perimeter: " << rec1.perimeter() << "\n";
  cout << "Rectangle1 Area: " << rec1.area() << "\n";
  cout << "Rectangle2 Perimeter: " << rec2.perimeter() << "\n";
  cout << "Rectangle2 Area: " << rec2.area() << "\n";
  if (rec1.sameArea(rec2) == 1) {
      cout << "Rectangle 1 and Rectangle 2 have the same area" << "\n";
  }
  else {
      cout << "Rectangle 1 and Rectangle 2 do not have the same area" << "\n";
  }
  
  rec1.setLength(15);
  rec1.setWidth(6.3);
  cout << "\n";
  cout << "Rectangle1 Perimeter: " << rec1.perimeter() << "\n";
  cout << "Rectangle1 Area: " << rec1.area() << "\n";
  cout << "Rectangle2 Perimeter: " << rec2.perimeter() << "\n";
  cout << "Rectangle2 Area: " << rec2.area() << "\n";
  if (rec1.sameArea(rec2) == 1) {
      cout << "Rectangle 1 and Rectangle 2 have the same area" << "\n";
  }
  else {
      cout << "Rectangle 1 and Rectangle 2 do not have the same area" << "\n";
  }
  return 0;
}
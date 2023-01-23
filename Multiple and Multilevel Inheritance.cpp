#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class electronics {
    protected:
      int serialNum;
    public: 
      string Type;
      string brandname;
      int price;
      int yearManuf;
      void setSerialNum(int m){
          serialNum = m;
      }
      int getSerialNum(){
          return serialNum;
      }
};

class inHouse: public electronics{  // inherit from electronics
    public:
      void myCond(){
          cout << "In perfect condition.";
      }        
};

class inKitchen{
    private:
      int yearPurchased;
    public:
      void setyearPurchased(int y){
          yearPurchased = y;
      }
      int getyearPurchased(){
          return yearPurchased;
      }
};

class appliance: public electronics, public inHouse, public inKitchen{
    // Multiple inheritance
};
int main(){
    inHouse myHouse;
      myHouse.setSerialNum(26645);
      
    cout << myHouse.getSerialNum() << endl << endl;
    
    appliance myAppliance;
      myAppliance.setyearPurchased(1999);
    cout << myAppliance.getyearPurchased() << endl;
    return 0;
}


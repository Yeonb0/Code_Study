#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS{
  enum {CLERK, SENIOR, ASSIST, MANAGER};
  void ShowPositionInfo(int pos){
    switch(pos){
      case CLERK:
        cout<<"사원"<<endl;
        break;
      case SENIOR:
        cout<<"주임"<<endl;
        break;
      case ASSIST:
        cout<<"대리"<<endl;
        break;
      case MANAGER:
        cout<<"과장"<<endl;
        break;
    }
  }
}

class NameCard{
  private:
    char *name;
    char *company;
    char *phone;
    int position;
  public:
    NameCard(char *myname, char *mycompany, char *myphone, int mypos){
      int len1=strlen(myname)+1;
      name=new char[len1];
      strcpy(name, myname);
      int len2=strlen(mycompany)+1;
      company=new char[len2];
      strcpy(company, mycompany);
      int len3=strlen(myphone)+1;
      phone=new char[len3];
      strcpy(phone, myphone);
      position=mypos;
    }
  
    void ShowNameCardInfo(){
      cout<<"이름: "<<name<<endl;
      cout<<"회사: "<<company<<endl;
      cout<<"전화번호: "<<phone<<endl;
      cout<<"직급: ";
      COMP_POS::ShowPositionInfo(position);
      cout<<endl;
    }
};

int main(){
  const char* nameClerk = "Lee";
  const char* companyClerk = "ABCEng";
  const char* phoneClerk = "010-1111-2222";
  NameCard manClerk(const_cast<char*>(nameClerk), const_cast<char*>(companyClerk), const_cast<char*>(phoneClerk), COMP_POS::CLERK);
  
  const char* nameSenior = "Hong";
  const char* companySenior = "OrangeEng";
  const char* phoneSenior = "010-3333-4444";
  NameCard manSenior(const_cast<char*>(nameSenior), const_cast<char*>(companySenior), const_cast<char*>(phoneSenior), COMP_POS::SENIOR);
  
  const char* nameAssist = "Kim";
  const char* companyAssist = "SoGoodComp";
  const char* phoneAssist = "010-5555-6666";
  NameCard manAssist(const_cast<char*>(nameAssist), const_cast<char*>(companyAssist), const_cast<char*>(phoneAssist), COMP_POS::ASSIST);
  manClerk.ShowNameCardInfo();
  manSenior.ShowNameCardInfo();
  manAssist.ShowNameCardInfo();
  return 0;
}
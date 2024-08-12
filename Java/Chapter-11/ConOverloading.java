class Person{
  private int regiNum;  // 주민등록 번호
  private int passNum;  // 여권 번호

  Person(int rnum, int pnum){
    regiNum = rnum;
    passNum = pnum;
  }
  Person(int rnum){
    regiNum = rnum;
    passNum = 0;
  }
  void showPersonalInfo(){
    System.out.println("주민등록 번호: " + regiNum);
    if(passNum != 0)
      System.out.println("여권 번호: " + passNum + '\n');
    else
      System.out.println("여권을 가지고 있지 않습니다.\n");
  }
}

public class ConOverloading {
  public static void main(String[] args) {
    // 여권 있는 사람
    Person jung = new Person(123456, 654321);

    // 여권 없는 사람
    Person hong = new Person(987654);

    jung.showPersonalInfo();
    hong.showPersonalInfo();
  }
}

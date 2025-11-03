class Logic {
    void FindMax(int a, int b) {
        if (a > b) {
            System.out.println(a + "  is Greater");
        } else if (b > a) {
            System.out.println(b + "  is Greater");
  
        } else {
            System.out.println("Both are Equal");

        }
    }
}

class program17_3 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.FindMax(20, 15);
    }
}

class Logic {
    void CheckEvenOdd(int n)
    {
       if (n%2==0)
       {
        System.out.println("It is a Even Number...");
       }
       else
       {
        System.out.println("It is A Odd Number..");
       }
    }
}

class program16_2 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.CheckEvenOdd(7);
    }
}

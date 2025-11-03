class Logic {
    int iCnt = 0;
    int power = 1;

    void CalculatePower(int base, int exp)

    {
        for (iCnt = 1; iCnt <= exp; iCnt++) {
            power = power * base;
        }
        System.out.println(power);
    }
}

class Program19_5 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.CalculatePower(2, 5);
    }
}

class Logic {
    void checkPrime(int n) {
        int iCnt = 0;
        int Counter = 0;

        for (iCnt = 2; iCnt <= n / 2; iCnt++) {
            if (n % iCnt == 0) {
                Counter++;
            }

        }
        if (Counter == 0) {
            System.out.println("It is A Prime Number..");
        } else {
            System.out.println("It is  Not a Prime Number..");

        }

    }
}

class program18_1 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.checkPrime(11);
    }
}

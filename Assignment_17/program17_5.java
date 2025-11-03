class Logic {
    void PrintTalble(int n)
    {
        int iCnt = 0;
        int Num = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            Num=iCnt*n;
            System.out.println(Num);
        }

        
    }
}

class program17_5 {
    public static void main(String[] args) {
        Logic lobj = new Logic();
        lobj.PrintTalble(5);
    }
}

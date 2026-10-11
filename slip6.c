//Q1

class Account {
    String custname;
    int accno;

    Account() {
        custname = "Unknown";
        accno = 0;
    }

    Account(String custname, int accno) {
        this.custname = custname;
        this.accno = accno;
    }
}

class SavingAccount extends Account {
    double savingbal;
    double minbal;

    SavingAccount(String custname, int accno, double savingbal, double minbal) {
        super(custname, accno);
        this.savingbal = savingbal;
        this.minbal = minbal;
    }
}

class AccountDetail extends SavingAccount {
    double depositamt;
    double withdrawamt;

    AccountDetail(String custname, int accno, double savingbal,
                  double minbal, double depositamt, double withdrawamt) {

        super(custname, accno, savingbal, minbal);

        this.depositamt = depositamt;
        this.withdrawamt = withdrawamt;
    }

    void display() {
        double finalBalance = savingbal + depositamt - withdrawamt;

        System.out.println("----- Customer Account Details -----");
        System.out.println("Customer Name  : " + custname);
        System.out.println("Account Number : " + accno);
        System.out.println("Saving Balance : " + savingbal);
        System.out.println("Minimum Balance: " + minbal);
        System.out.println("Deposit Amount : " + depositamt);
        System.out.println("Withdraw Amount: " + withdrawamt);
        System.out.println("Final Balance  : " + finalBalance);
    }
}

public class Main {
    public static void main(String[] args) {

        AccountDetail obj = new AccountDetail(
            "Rahul",
            101,
            5000,
            1000,
            2000,
            500
        );

        obj.display();
    }
}



//Q2

<!DOCTYPE html>
<html>
<head>
    <title>Hover Effect</title>

    <style>
        body
         {
            text-align: center;
            font-family: Arial, sans-serif;
            margin-top: 100px;
        }

        button 
        {
            background-color: blue;
            color: white;
            padding: 12px 25px;
            border: none;
            border-radius: 5px;
            font-size: 18px;
            cursor: pointer;
        }

        
        button:hover
         {
            background-color: green;
            transform: scale(1.1);
        }

        
        a {
            display: inline-block;
            margin-top: 30px;
            color: blue;
            font-size: 20px;
            text-decoration: none;
        }

        
        a:hover
         {
            color: red;
            text-decoration: underline;
            font-size: 25px;
        }
    </style>
</head>

<body>

    <h1>Mouse Hover Example</h1>

    <button>Click Me</button>

    <br>

    <a href="https://www.google.com">Visit Google</a>

</body>
</html>
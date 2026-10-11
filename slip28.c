//Q1
import java.util.Scanner;

class InvalidDateException extends Exception 
{
    InvalidDateException(String s)
     {
        super(s);
    }
}

class MyDate
 {
    int day, month, year;

    void accept() throws InvalidDateException 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter day, month, year: ");
        day = sc.nextInt();
        month = sc.nextInt();
        year = sc.nextInt();

        if (day < 1 || day > 31 ||
            month < 1 || month > 12 || year < 1) 
            {
            throw new InvalidDateException("Invalid Date Exception");
             }
    }

    void display()
     {
        System.out.println(day + "/" + month + "/" + year);
    }

    public static void main(String[] args)
     {
        MyDate d = new MyDate();

        try 
        {
            d.accept();
            d.display();
        }
         catch (InvalidDateException e)
          {
            System.out.println(e.getMessage());
        }
    }
}


//Q2


const fs = require('fs');
const path = require('path');

fs.readdir('./', (err, files) => {
    if (err)
     {
        console.log("Error reading files");
        return;
    }

    files.forEach(file => {
        let ext = path.extname(file);

        if (ext == '.txt' || ext == '.json' || ext == '.js')
         {
            console.log(file);
        }
    });
});

/**a.txt
data.json
app.js */

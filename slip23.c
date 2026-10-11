//Q1

class Continent
 {
    String continent = "Asia";
}

class Country extends Continent
 {
    String country = "India";
}

class State extends Country
 {
    String state = "Maharashtra";
}

class Place extends State
 {
    String place = "Nashik";

    void display()
     {
        System.out.println("Place: " + place);
        System.out.println("State: " + state);
        System.out.println("Country: " + country);
        System.out.println("Continent: " + continent);
    }
}

public class Multilevel 
{
    public static void main(String[] args)
     {
        Place p = new Place();
        p.display();
    }
}



//Q2

const fs = require('fs');
fs.writeFile('data.txt', 'Hello Node.js!', (err) => {
  if (err) throw err;
  console.log('File created and written successfully.');

  fs.readFile('data.txt', 'utf8', (err, data) => {
    if (err) throw err;
    console.log('File content:', data);

    fs.appendFile('data.txt', '\nAppended text.', (err) => {
      if (err) throw err;
      console.log('Data appended successfully.');
    });
  });
});

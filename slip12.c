//Q1
//main.java
import game.*;

class Main {
    public static void main(String[] args) {
        Indoor i1 = new Indoor();
        Indoor i2 = new Indoor("Carrom");

        Outdoor o1 = new Outdoor();
        Outdoor o2 = new Outdoor("Football");

        i1.display();
        i2.display();
        o1.display();
        o2.display();
    }
}

// game folder
// indoor.java
package game;

class Indoor {
    String game;

    Indoor() {
        game = "Chess";
    }

    Indoor(String g) {
        game = g;
    }

    void display() {
        System.out.println("Indoor Game: " + game);
        System.out.println("Players: 2");
    }
}

// outdoor.java

package game;

class Outdoor {
    String game;

    Outdoor() {
        game = "Cricket";
    }

    Outdoor(String g) {
        game = g;
    }

    void display() {
        System.out.println("Outdoor Game: " + game);
        System.out.println("Players: 11");
    }
}




//q2

<html>
<body>
<script>
let name = "Pen";
let price = 10;
let quantity = 5;

let total = (p, q) => p * q;

let bill = total(price, quantity);

document.write(`<h3>Product Bill</h3>`);
document.write(`Product: ${name}<br>`);
document.write(`Price: ₹${price}<br>`);
document.write(`Quantity: ${quantity}<br>`);
document.write(`Total Price: ₹${bill}`);
</script>
</body>
</html>

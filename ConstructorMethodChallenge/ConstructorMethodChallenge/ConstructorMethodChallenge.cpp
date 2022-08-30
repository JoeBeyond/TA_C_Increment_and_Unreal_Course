
          // Include the Header.h file

#include "Header.h"

          // Include Input and Output Stream Library

#include <iostream>
    
          // Include String Library

#include <string>



    // Contructor with Parameters
    //.;.;...;.;..;.;.;;...;;.;

Fruit::Fruit(string a, string b, string c)
{
    // Defining Attributes
    //.;.;...;.;..;.;.;;...;;.;

    shape = a;
    description = b;
    flavor = c;
}

//++:+<++>++++.++<++++.+++/+++<+.+>+++/+++.++++>++.++++<++>+:++
// 
//        The Main() Program where execution takes place --v
// 
//++:+<++>++++.++<++++.+++/+++<+.+>+++/+++.++++>++.++++<++>+:++

int main()
{

    //++:+<++>++++.++<++++.+++/+++<+.+>+++/+++.++++>++.++++<++>+:++
    //
    //    Defining a Constructor Outside the Class ( Header.h ) --v
    // 
    //       Object Creation and Defining Objects Section --v

    Fruit apple("Round but Top Heavy and Pointy Butt", "Different Colors for Skin and Pale Off-White Meat", "Sweet and Wood/Nutty"), orange("Spherical", "585-620 nm Leather-Like Peel with Juice Filled-Capsules", "Tart/Acidic and Sweet"), watermelon("Oval", "Jungle-Camo and Red Gritty Sponge-Meat", "Refreshing");

    //              v1 Fruits that are Familiar --^
    // 
    //++:+<++>++++.++<++++.+++/+++<+.+>+++/+++.++++>++.++++<++>+:++
    // 
    //              v2 Exotic Fruits that are Cool --v

    Fruit salak("Pointy Fig", "Scaly Brown Exterior and Inside looks like Garlic", "Honey and Pineapple"), akebi("Sausage-Shaped", "Purple", "Pear-Like"), jackfruit("Roughly Oblong and Big", "Green Skin and Brown Rough Studs", "Sweet and Pineapple/Mango");

    //          Object Creation and Defining Objects Section --^
    // 
    //++:+<++>++++.++<++++.+++/+++<+.+>+++/+++.++++>++.++++<++>+:++
    //
    //              Implementation of Objects Section --v
    // 
    //                       INTRODUCTION
    // 
    //                  v1 Implementation --v

    cout << "\n" << "HELLO! Welcome to the Fruit Characteristics Catalog of the World!" << "\n" << "Below is a list of fruits from all around the world and each has a description." << "\n" << "\n" << "++:+<++>++++.++<++++.+++/+++<+.+>+++/+++.++++>++.++++<++>+:++" << '\n' << "\n";

    //                   END OF INTRODUCTION
    //
    //++:+<++>++++.++<++++.+++/+++<+.+>+++/+++.++++>++.++++<++>+:++

    cout << ",.:[APPLE]:^'" << "\n" << "SHAPE: " << apple.shape << "\n" << "COLOR: " << apple.description << "\n" << "FLAVOR: " << apple.flavor << "\n" << "\n";


    cout << ",.:[ORANGE]:^'" << "\n" << "SHAPE: " << orange.shape << "\n" << "COLOR: " << orange.description << "\n" << "FLAVOR: " << orange.flavor << "\n" << "\n";


    cout << ",.:[WATERMELON]:^'" << "\n" << "SHAPE: " << watermelon.shape << "\n" << "COLOR: " << watermelon.description << "\n" << "FLAVOR: " << watermelon.flavor << "\n" << "\n";

    //                  v1 Implementation--^
    // 
    //++:+<++>++++.++<++++.+++/+++<+.+>+++/+++.++++>++.++++<++>+:++
    // 
    //                  v2 Implementation --v

    cout << ",.:[SALEK]:^'"<< "\n" << "SHAPE: " << salak.shape << "\n" << "COLOR: " << salak.description << "\n" << "FLAVOR: " << salak.flavor << "\n" << "\n";


    cout << ",.:[AKEBI]:^'" << "\n" << "SHAPE: " << akebi.shape << "\n" << "COLOR: " << akebi.description << "\n" << "FLAVOR: " << akebi.flavor << "\n" << "\n";


    cout << ",.:[JACKFRUIT]:^'" << "\n" << "SHAPE: " << jackfruit.shape << "\n" << "COLOR: " << jackfruit.description << "\n" << "FLAVOR: " << jackfruit.flavor << "\n" << "\n";

    //                   v2 Implementation --^
    //
    //++:+<++>++++.++<++++.+++/+++<+.+>+++/+++.++++>++.++++<++>+:++
    //
    //                      EXIT STATEMENT

    cout << "I HOPE you enjoyed this list! There are so many fruits; some on this list are familiar." << "\n" << "Consider eating different exotic fruits because many of them have great nutrition besides what people are used too. " << "\n" << "Consider expanding your options when it comes to food in general. So be open to new things that seem \"Funky\"." << "\n" << "\n" << "++:+<++>++++.++<++++.+++/+++<+.+>+++/+++.++++>++.++++<++>+:++" << '\n';
    
    //                      EXIT STATEMENT
    //
    //          Implementation of Objects Section --^
    //
    //++:+<++>++++.++<++++.+++/+++<+.+>+++/+++.++++>++.++++<++>+:++
}

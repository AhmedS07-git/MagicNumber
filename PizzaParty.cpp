#include <iostream>
using namespace std;

int main(){
    int people;
    int slicesPerPizza;
    int slicesPerPerson;

    cout << "How many people are attending the party? ";
    cin >> people;

    cout << "How many slices are in a pizza? ";
    cin >> slicesPerPerson;

    int totalSlices = people * slicesPerPerson;

    int pizzas = totalSlices / slicesPerPizza;
    int remainder = totalSlices % slicesPerPizza;

    if (remainder != 0){
        pizzas++;
    }

    int totalSlicesOrdered = pizzas * slicesPerPizza;

    int leftoverSlices = totalSlicesOrdered - totalSlices;

    cout << "\n You will need to order " << pizzas << " pizzas." << endl;
    cout << "Thre will be " << leftoverSlices << " leftover slices. " << endl;

    int fullPizzasEaten = totalSlices / slicesPerPizza;
    int extraSlices = totalSlices % slicesPerPizza;

    cout << "\nFull pizzas eaten: " << fullPizzasEaten << endl;
    cout << "Additional slices needed from last pizza: " << extraSlices << endl;

    return 0;
}
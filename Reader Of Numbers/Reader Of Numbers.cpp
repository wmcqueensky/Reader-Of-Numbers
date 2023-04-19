#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int How_many_digits(int number);

int First_and_Last_digit(int number);

void bubble_sort(int arr[], int num);

int main()
{
    string line;
    string word;
    string input_name, output_name;
    cout << "Insert the name for the input file: " << endl;
    getline(cin, input_name);
    cout << "Insert the name for the output file: " << endl;
    getline(cin, output_name);
    cout << endl;

    fstream input;
    fstream output;
    input.open(input_name, ios_base::in);
    output.open(output_name, ios_base::out);

    if (input.good() == true && output.good() == true) {
        cout << "You have access to the files" << endl;
    }
    else {
        cout << "You do not have access to the files" << endl;
    }
    cout << endl;

    int pomoc = 0;
    int* tab = new int[pomoc];
    int liczba;

    while (!input.eof()) {
        input >> liczba;
        tab[pomoc] = liczba;
        pomoc++;
    }
    cout << "Numbers: " << endl;
    for (int i = 0; i < pomoc; i++) {
        cout << tab[i] << " ";
    }
    cout << endl << endl;

    int help = 0;
    int* help_tab = new int[help];

    for (int i = 0; i < pomoc; i++) {
        if ((How_many_digits(tab[i]) == 3) && (First_and_Last_digit(tab[i]) == 1)) {
            help_tab[help] = tab[i];
            help++;
        }
        else if ((How_many_digits(tab[i]) == 4) && (First_and_Last_digit(tab[i]) == 2)) {
            help_tab[help] = tab[i];
            help++;
        }
        else if ((How_many_digits(tab[i]) == 3) && (First_and_Last_digit(tab[i]) == 3)) {
            help_tab[help] = tab[i];
            help++;
        }
        else {
            continue;
        }
    }

    cout << "Good numbers: " << endl;
    for (int i = 0; i < help; i++) {
        cout << help_tab[i] << " ";
    }
    cout << endl << endl;

    cout << "Good numbers, but sorted: " << endl;
    bubble_sort(help_tab, help);

    for (int i = 0; i < help; i++) {
        cout << help_tab[i] << " ";
    }
    cout << endl << endl;

    for (int i = 0; i < help; i++) {
        output << help_tab[i] << endl;
    }

    delete[] help_tab;
    delete[] tab;

    input.close();
    output.close();
    return 0;
}

int How_many_digits(int number) {

    if (number == 0) {
        return 1;
    }
    int COUNTER = 0;

    while (number != 0) {
        number = number / 10;
        ++COUNTER;
    }

    return COUNTER;
}

int First_and_Last_digit(int number) {
    int Last = number % 10;
    int First;

    while (number > 10) {
        number /= 10;
    }
    First = number;

    if (First > Last) {
        return 1;
    }
    else if (First == Last) {
        return 2;
    }
    else if (First < Last) {
        return 3;
    }
    else {
        return 4;
    }
}

void bubble_sort(int arr[], int num) {
    int pom;

    for (int i = 0; i < num; i++)
        for (int j = 0; j < num; j++) {
            if (arr[i] < arr[j]) {
                pom = arr[i];
                arr[i] = arr[j];
                arr[j] = pom;
            }
        }
}

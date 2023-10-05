#include <iostream>
using namespace std;

void numberToText(int num) {
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    if (num < 10) {
        cout << ones[num];
    } else if (num < 20) {
        cout << teens[num - 10];
    } else {
        int tensDigit = num / 10;
        int onesDigit = num % 10;
        cout << tens[tensDigit] << "" << ones[onesDigit];
    }
}

int main() {
    int num;
    cout << "Enter a number (1-99): ";
    cin >> num;

    numberToText(num);

    return 0;
}

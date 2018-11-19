#include <iostream>

using namespace std;
enum curnency { UAH = '1', EUR = '2', DOL = '3' };
struct account
{

	unsigned int number;
	long long cash;
	curnency valuta;

public:
	int l;

	void input_card()
	{

		cout << "Number ? : ";
		cin >> number;
		cout << "Cash ? : ";
		cin >> cash;
		cout << "Curnency ? : ";
		cin >> l;
		switch (l)
		{
		case 1:
			valuta = UAH;
			break;
		case 2:
			valuta = EUR;
			break;
		case 3:
			valuta = DOL;
			break;
		default:
			valuta = UAH;
			break;

		}
	}

	void print_curnency(int l)
	{

		switch (l)
		{
		case 1:
			cout << "UAH";
			break;
		case 2:
			cout << "EUR";
			break;
		case 3:
			cout << "DOL";
			break;
		default:
			cout << "UAH";
			break;

		}

	}

	void cart_option()
	{
		int n;
		int menu;
		cin >> menu;
		switch (menu)
		{

		case 1:
			system("cls");
			cout << "Number Account " << number << endl;
			cout << "Cash " << cash << ' '; print_curnency(l); cout << endl;
			break;

		case 2:
			system("cls");
			cout << "Count cash ? : ";
			cin >> n;
			cash -= n;
			break;

		case 3:
			system("cls");
			cout << "Count cash ? : ";
			cin >> n;
			cash += n;
			break;
		case 0:
			exit(0);
			break;

		}

	}

	curnency get_curnency()
	{

		return valuta;

	}



};


int main()
{
	account card;
	card.input_card();
	while (1 != 0)
		card.cart_option();

	system("pause");

}
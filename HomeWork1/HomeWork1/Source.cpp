#include <iostream>

using namespace std;
enum currency { UAH = '1', EUR = '2', DOL = '3', JPY = '4' };
struct account
{

	unsigned int number;
	double cash;
	currency valuta;

public:
	int currency_IP;

	void input_card()
	{

		cout << char(178) << "Number ? : ";
		cin >> number;
		cout << char(178) << "Cash ? : ";
		cin >> cash;
		cout << char(178) << "Curnency ? : ";
		cin >> currency_IP;
		switch (currency_IP)
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
		case 4:
			valuta = JPY;
			break;
		default:
			valuta = UAH;
			break;

		}
	}

	void currency_conversion(int currency_IP, double &amount_of_money)
	{

		int currency_IP_old = currency_IP;

		cout << char(178) << "What is the currency? " << endl;
		cout << char(178) << " UAH[1], EUR[2], DOL[3], JPY[4] " << endl;
		cout << char(178) << " : ";
		cin >> currency_IP;

		switch (currency_IP)
		{
		case 1:
			if (currency_IP_old == 1)
			{
				amount_of_money *= 1;

			}
			if (currency_IP_old == 2)
			{
				amount_of_money *= 0.032;
			}
			if (currency_IP_old == 3)
			{
				amount_of_money *= 0.036;

			}
			if (currency_IP_old == 4)
			{
				amount_of_money *= 4.08;

			}
			
			break;
		case 2:
			if (currency_IP_old == 1)
			{
				amount_of_money *= 31.57;

			}
			if (currency_IP_old == 2)
			{
				amount_of_money *= 1;
			}
			if (currency_IP_old == 3)
			{
				amount_of_money *= 1.15;

			}
			if (currency_IP_old == 4)
			{
				amount_of_money *= 128.87;

			}
			
			break;
		case 3:
			if (currency_IP_old == 1)
			{
				amount_of_money *= 27.57;

			}
			if (currency_IP_old == 2)
			{
				amount_of_money *= 0.87;
			}
			if (currency_IP_old == 3)
			{
				amount_of_money *= 1;

			}
			if (currency_IP_old == 4)
			{
				amount_of_money *= 112.55;

			}
			
			break;
		case 4:
			if (currency_IP_old == 1)
			{
				amount_of_money *= 0.24;

			}
			if (currency_IP_old == 2)
			{
				amount_of_money *= 0.0078;
			}
			if (currency_IP_old == 3)
			{
				amount_of_money *= 0.0089;

			}
			if (currency_IP_old == 4)
			{
				amount_of_money *= 1;

			}
			
			break;
		}
	}
	
	void print_currency(const int l)const
	{

		switch (currency_IP)
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
		case 4:
			cout << "JPY";
			break;
		default:
			cout << "UAH";
			break;

		}

	}

	void cart_option()
	{
		double amount_of_money;
		int menu;
		cout << char(178) << " : ";
		cin >> menu;
		switch (menu)
		{

		case 1:
			system("cls");
			cout << char(178) << "Number Account " << number << endl;
			cout << char(178) << "Cash " << cash << ' '; print_currency(currency_IP); cout << endl;
			cout << char(178); system("pause");
			break;

		case 2:
			system("cls");
			cout << char(178) << "Count cash ? : ";
			cin >> amount_of_money;

			currency_conversion(currency_IP, amount_of_money);
			
			cash -= amount_of_money;
			cout << char(178); system("pause");
			break;

		case 3:
			system("cls");
			cout << char(178) << "Count cash ? : ";
			cin >> amount_of_money;

			currency_conversion(currency_IP, amount_of_money);
		
			cash += amount_of_money;
			cout << char(178); system("pause");
			break;
		case 0:
			exit(0);
			break;

		}

	}



};


int main()
{
	account card;
	card.input_card();
	cout << char(178) << " Create another one besides the main one?[1]Yes [0]No " << endl;
	cout << char(178) << " : ";
	int YN;
	cin >> YN;
	if (YN == 1)
	{
		account card2;
		card2.input_card();
	}
	while (1 != 0)
	{
		system("cls");
		cout << char(178) << "1 Open an account " << "2 Withdraw money from the account    " << char(178) << endl;
		cout << char(178) << "3 Put money on the account "  << "4  " << char(178) << endl;
		cout << char(178) << "0 Exit";for(int i=0;i<7;i++)cout << "\t"; cout << char(178) << endl;
		card.cart_option();
	}
	cout << char(178); system("pause");

}
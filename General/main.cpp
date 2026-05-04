#include <iostream>
#include <string>
using namespace std;
// First Step N9ad Fucntions . . Second ndir switch . . Third ndir back
class Machin {
public:
	void calculator();
	void cash();
	void whenestart();
	void enterCash(int &enitialCash);
	void checCash(int enitialCash);
};

void Machin::whenestart() {
	int enitialCash;
	int STOperator;
	cout << "Hello To My Simple Project !"<<endl;
	cout << "chose The Operator you need !"<<endl;
	cout << "For calculat Number chose : '1'"<<endl;
	cout << "For EnterYour Balance Cash chose : '2'"<<endl;
	cout << "For Check your Cash Balcence chose '3'"<<endl;
	cin >> STOperator ;

	switch (STOperator) {
	case 1:
		calculator();
		break;
	case 2:
		enterCash(enitialCash);
		break;
	case 3:
		checCash(enitialCash);
	}

}
void Machin::enterCash(int& enitialCash) {
	int newCash;
	char newBallace;
	cout << "Enter initial Cash ! " <<endl;
	cin >> enitialCash ;
	cout << "If you need to Enter new  balance Enter '2' "<<endl;
	cout << "If you want to go back to the main menu Enter '3'"<<endl;
	cin >> newBallace ;
	char x;
	switch (newBallace) {
	case '2':
		cout << "This is initial ballance !" << enitialCash <<endl;
		cout << "How much you need to add ?"<<endl;
		cin >> newCash ;
		enitialCash += newCash ;
		cout << "The New Ballonce is " << enitialCash <<endl<<endl<<endl ;
		break;
	case '3':
		whenestart();
		break;
	}
	char f;
	cout << "If you need to Enter new  balance Enter '2' "<<endl;
	cout << "IF You want to go back to the main menu Enter '3'";
	cin >> f;
	switch (f) {
	case '2':
		cout << "This is initial ballance !" << enitialCash <<endl;
		cout << "How much you need to add ?"<<endl;
		cin >> newCash ;
		enitialCash += newCash ;
		cout << "The New Ballonce is " << enitialCash <<endl<<endl<<endl ;
		break;
	case '3':
		whenestart();
		break;
	}
	cout << "Enter 5 to Go Back to the menu !"<<endl;
	cin >> x ;
	switch (x) {
	case '5':
		whenestart();
		break ;
	}
}

void Machin::checCash(int enitialCash) {
	char a ;

    cout << "Your Cash ballance is !"<< enitialCash <<endl;
	cout << "Enter '4' To Go Back to main menu !"<<endl;
	cin >> a;
	switch (a) {
	case '4':
		whenestart();
    break;
	}

	}
	void Machin::calculator() {
		cout << "Welcome To Calculator !"<<endl<<"Here You Can Solve any probleme you have !"<<endl;
		char Operator;
		int Num1, Num2;
		cout << "Enter First Number !"<<endl;
		cin >> Num1 ;
		cout << "Enter Second Number !"<<endl;
		cin >> Num2 ;
		cout << "Enter Operator !  ['+'  or '-'  or '*'  or '/' ] "<<endl;
		cin >> Operator ;

		switch (Operator) {
		case '*' :
			cout << "Result : "<< Num1 * Num2<<endl<<endl ;
			break;
		case '/':
			cout << "Result : " <<Num1 / Num2<<endl<<endl ;
			break;
		case '+':
			cout << "Result : " <<Num1 + Num2<<endl<<endl ;
			break;
		case '-':
			cout << "Result : " <<Num1 - Num2<<endl<<endl ;
			break;
		default:
			cout << "Invalid Operator !"<<endl<<endl<<endl;
			calculator();
			break;
		}
	    char t;
		cout << "Enter 5 to Go back to the main menu !"<<endl;
		cin >> t;
		switch (t){
		    case '5':
		    whenestart();
		    break;
		}
	}
	int main()
	{
		Machin machin;

		machin.whenestart();


		return 0;
	}

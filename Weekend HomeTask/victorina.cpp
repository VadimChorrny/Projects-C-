//Потрібно створити додаток для вікторин
//1)Користувач може додавати нову вікторину, при дованні він має вказати її назву, і вказати 10 запитань і по 3 правильних відповідей, коли користувач буде вказувати відповіді до питання він має вказати яка саме відповідь є правильною
//Приклад додаванні одного питань і відповідей до нього :
//Введіть питання : 5 * 5 = ?
//Введіть першу відповідь : 10
//Це правильна відповіть(n - НІ, y - ТАК) : n
//
//2)Користувач може вибрати в меню Виведення всіх вікторин(Список з назвами вікторин)
//3)Коли користувачу було виведено список вікторин йому буде запропоновано вибрати одну для проходження
//4)Коли користувач проходить вікторину і дає вибирає відповіді до запитання і в разі не правильно вибору йому підкреслюються червоним кольором не правильна відповідь і зеленим правильна
//
//Питання 1: 5 * 5 = ?
//a)10 < -- - red
//	b)5 < -- - red
//	c)25 < -- - green
//	Виберіть відповідь : c
//	Відповіді стають кольоровими тільки після того як користувач вибрав відповідь з списку
//	5)Після того як користувач пройшов усі 10 запитання йому каже скільки було правильно відповідй з 10
//	Приклад:
//Ваш результат 7 / 10
//
//
//Програма маэ бути реалызована до 100 рядочків
#include<iostream>
#include<string>
#include"windows.h"

using namespace std;

string victorine[100][10][6] = { { {"Ancient Greece. Myths","How did Hera thank Cancer, who helped the Lerneian Hydra in the duel with Hercules?","She gave him a river","Made him a constellation","Made him immortal","Made him a constellation"},{"Ancient Greece. Myths","This king ordered the daughters to kill their brides, for which they were doomed by the gods to carry water in a bottomless amphora without ceasing in the gloomy kingdom of Hades.","Oedipus","Danai","Egypt","Danai"},{"Ancient Greece. Myths","Who sympathized with the suffering of Prometheus, chained to the Caucasus Mountains?","Moiri","Oceanids","Eat","Oceanids"},{"Ancient Greece. Myths","Daughter of King Colchis Eeta, who helped Jason steal the golden fleece.","Hestia","Iris","Medea","Medea"},{"Ancient Greece. Myths","What did Odysseus call himself Cyclops Polyphemus?","No one","Nothing","Someone","No one"},{"Ancient Greece. Myths","6. What ordered Hercules to get the Amazon insignificant Eurystheus?","3 pieces of Melanippus","Horse of Antioch","Hippolyta's belt","Hippolyta's belt"},{"Ancient Greece. Myths","This impudent son of 3evs not only stole ragweed and nectar from the gods, but also decided to treat them to an unheard of dish - baked from his own son Pelops. For this he was punished with eternal torment from hunger, thirst and fear.","Antey","Sisyphus","Tantalum","Tantalum"},{"Ancient Greece. Myths","Rebellious and proud Theban queen, daughter of Tantalus, who offended the goddess Leto. She was punished by her children Apollo and Artemis - they killed all her children.","Given","Pasiphae","Niobe","Niobe"},{"Ancient Greece. Myths","The unsurpassed master weaver, who challenged Athena Pallas herself, despised the gods. Athena turned her into a spider.","Arachna","Ariadne","Medea","Arachna"},{"Ancient Greece. Myths","The son of Danai, who defeated Medusa the Gorgon and saved Andromeda, the daughter of King Cepheus and Cassiopeia, from imminent death.","Odysseus","Perseus","Phineas","Perseus"} } };

int win = 0, newVictorins = 0, choiseVictorins = 0, choiseVariants = 0, victorines = 0;

void output() {

	for (int i = 0; i < 10; i++) {
		for (int j = 1; j < 5; j++) {
			cout << victorine[choiseVictorins][i][j] << endl;
		}
		cout << "Enter number variants-> ";
		cin >> choiseVariants;
		system("cls");
		for (int j = 1; j < 5; j++) {
			if (victorine[choiseVictorins][i][j] == victorine[choiseVictorins][i][5]) {
				cout << victorine[choiseVictorins][i][j] << endl;
			}
			else if (victorine[choiseVictorins][i][j] == victorine[choiseVictorins][i][1]) {
				cout << victorine[choiseVictorins][i][j] << endl;
			}
			else {
				cout << victorine[choiseVictorins][i][j] << endl;
			}
		}
		if (victorine[choiseVictorins][i][choiseVariants++] == victorine[choiseVictorins][i][5]) {
			win++;
		}

	}
	cout << "Correct answers:" << win << " out of 10" << endl;
}
void addNewVictirines() {
	victorines + 1;
	cout << "Enter name your victorines" << endl;
	getline(cin, victorine[victorines][0][0]);
	getline(cin, victorine[victorines][0][0]);
	for (int i = 0; i < 10; i++) {
		victorine[victorines][i][0] = victorine[victorines][0][0];;
	}
	for (int i = 0; i < 10; i++) {
		cout << "Enter question";
		cin >> victorine[victorines][i][1];
		for (int j = 2; j < 5; j++) {
			cout << "Enter variants ";
			cin >> victorine[victorines][i][j];
			int  trueVar = 0;
			cout << "This varians true ";
			cin >> trueVar;
			system("cls");
			if (trueVar == 1) {
				victorine[victorines][i][5] = victorine[victorines][i][j];
			}
		}
	}
}
int main() {
	int acshion = 0;
	do {
		cout << "Add new victorines" << endl;
		cout << "Print all victorines" << endl;
		cout << "Exit" << endl;
		cin >> acshion;
		system("cls");
		if (acshion == 1) {
			addNewVictirines();
		}
		else if (acshion == 2) {
			for (int i = 0; i < victorines + 1; i++) {
				cout << victorine[i][0][0] << endl;
				cout << "Choise victorines enter number ->";
				cin >> choiseVictorins;
				choiseVictorins--;
				system("cls");
				output();
			}
		}

	} while (acshion != 3);
}

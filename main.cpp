#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int start_game = 0;
	do
	{
		setlocale(LC_ALL, "rus");
		srand(time(NULL));
		const int size = 1;
		int num[size] = {};
		int q = 0;
		cout << "Я загадал число оно либо [< 50] или [> 50]\n Напиши 1 если [< 50] или 2 [> 50] : \n";
		cin >> q;
		for (int s = 0; ; s++)
		{
			for (int i = 0; i < 1; i++)
			{
				num[i] = rand() % 100;
			}
			switch (q)
			{
			case 1:
			{
				if (num[0] < 50)
				{
					cout << "Угадал загаданное число было " << num[0];
				}
				else
				{
					cout << "Не угадал! загаданное число было " << num[0];
				}
				cout << "Игр сыгранно " << s << " \n";
				cout << "Нажмите: \n\t1. Чтобы продолжить\n\t2. Для выхода из игры: ";
				cin >> start_game;
				break;
			}
			case 2:
			{
				if (num[0] > 50)
				{
					cout << "Угадал загаданное число было " << num[0];
				}
				else
				{
					cout << "Не угадал! загаданное число было " << num[0];
				}
				cout << "Игр сыгранно " << s << " \n";
				cout << "Нажмите: \n\t1. Чтобы продолжить\n\t2. Для выхода из игры: ";
				cin >> start_game;
				break;
			}

			}
		}
	} while (start_game == 1);
}

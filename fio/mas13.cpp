cout << "Введите данные о себе ФИ и дату рождения! ";
string fio,mas,birt;
cin >> mas;
birt.append(mas, 23,6);
fio.append(mas, 0,17);
int lstday = stoi(birt);
int day;
cout << "Введите сегодняшнию дату! ";
cin >> day;
if(lstday < day)cout << endl << "Для" << fio << "день рождения прошел! ";
else cout << endl << "Для" << fio << "день рождения будет позже! ";
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	/*int n;
	string s;
	cout << "Input n";
	cin >> n;
	cout << endl;
	cout << "Input s";
	cin>> s;
	if (s.length() > n)
	{
		s.erase(0, s.length() - n);
		cout << s << endl;
	}
	else if (s.length() < n)
	{
		s.insert(s.begin(), n - s.length(), '.');
	}
	cout << s << endl;*/

	/*int a = 0;
	int b = 0;
	string s1;
	string s2;
	cout << "Введите целое число ";
	cin >> a;
	cout << "Введите строку ";
	cin >> s1;
	cout << "Введите целое число ";
	cin >> b;
	cout << "Введите строку";
	cin >> s2;
	string result = s1.substr(0,a) + s2.substr(s2.length() - b);


	cout << result << endl;*/
	/*char c;
	string s;
	cout << "введите с ";
	cin >> c;
	cout << "введите с ";
	cin.ignore();
	getline(cin, s);
	for (size_t i = 0; i < s.length(); i++)
	{
		if (s[i] == c)
		{
			s.insert(i, 1, c);
			i++;
		}
	}
	cout << s << endl;*/
	

	/*char c;
	string s;
	string s1;
	cout << "введите с ";
	cin >> c;
	cout << "введите s ";
	cin.ignore();
	getline(cin, s);
	cout << "введите s1 ";

	cin >> s1;
	for (size_t i = 0; i < s.length(); i++)
	{
		if (s[i] == c)
		{
			s.insert(i,s1);
			i+= s1.length() + 1;
		}
	}
	cout << s << endl;*/

	/*string s;
	cout << "Введите имя файла ";
	getline(cin, s);


	if (s.find("*") == -1)
	{
		ofstream a(s + ".txt");
		if (a.is_open())
		{
			a << "Hello world" << endl;
			a.close();
		}
		cout << "True" << endl;

	}
	else
	{
		cout << "False" << endl;
	}*/
	/*string s;
	getline(cin, s);
	int n;
	cin >> n;
	if (s.find("*") == -1) {
		ofstream a(s + ".txt");
		if (a.is_open()) {
			for (int i = 1; i <= n; i++)
			{
				a << " " << 2 * i;
			}
			a << endl;
			a.close();
		}
	}
	else {
		cout << "Unacceptable name";
	}*/

	/*string s;
	ifstream a("ff.txt");
	ofstream fday("fday.txt");
	ofstream fmon("fmon.txt");
	if (a.is_open())
	{
		while (!a.eof())
		{
			getline(a, s);
			cout << s << endl;

			fday << s.substr(0, 2) << " ";
			fmon << s.substr(3, 2) << " ";

		}
		a.close();
		fday.close();
		fmon.close();
	}
*/
//string inputString;
//getline(cin, inputString);
//
//int lastIndexes[32] = { 0 }; 
//string outputString = ""; 
//for (int i = 0; i < inputString.size(); i++) {
//	if (inputString[i] == ' ') {
//		outputString += ' '; 
//		continue;
//	}
//	int lastIndex = lastIndexes[inputString[i] - 'А']; 
//	if (lastIndex > 0) {
//		outputString += '.'; 
//	}
//	lastIndexes[inputString[i] - 'А'] = i; 
//	outputString += inputString[i]; 
//}
//
//cout << outputString << endl;
//
//string inputString;
//getline(cin, inputString); 
//
//string encodedString = ""; 
//for (int i = 0; i < inputString.size(); i += 2) {
//	encodedString += inputString[i]; 
//}
//for (int i = inputString.size() - 1; i >= 0; i -= 2) {
//	encodedString += inputString[i]; 
//}
//
//cout << encodedString << endl;
//string encodedString;
//getline(cin, encodedString); 
//
//string decodedString = ""; 
//
//int n = encodedString.size();
//int mid = (n % 2 == 0) ? n / 2 : n / 2 + 1; 
//
//for (int i = 0; i < mid; i++) {
//	decodedString += encodedString[i * 2]; 
//}
//
//for (int i = n - 1; i >= mid; i--) {
//	decodedString += encodedString[(n - i - 1) * 2 + 1]; 
//}
//
//cout << decodedString << endl;

//string filename;
//int N;
//cout << "Введите имя файла: ";
//cin >> filename;
//cout << "Введите количество чисел: ";
//cin >> N;
//
//ofstream f(filename, ios::out);
//
//for (int i = 1; i <= N; i++) {
//	f << i * 2 << " ";
//}
//
//f.close();

	
}
/*15.	Дана строка S.Если S является допустимым именем файла, 
то создать пустой файл с этим именем и вывести True.Если файл с именем S создать нельзя, то вывести False.*/
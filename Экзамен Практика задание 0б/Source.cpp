#include<iostream>
#include<map>
#include<string>
#include<fstream>
#include<vector>
#include <algorithm>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	string Slovo;
	string tempSlovo;
	string FileName;
	vector<int> Chastota;
	int tempChastota;
	int ChastotaVproc;
	int count = 0;
	int k = 0;
	int t;
	int maxChact;
	int flag = 1;
	int maxSlov = 0;
	int i = 0 , j;
	cout << "\n¬ведите путь к файлу(например: D:\\*.txt )\n";
	getline(cin, FileName);
	ifstream file(FileName, ios::out | ios::binary | ios::app);

	if (file.is_open())
	{
		for (; file; ++maxSlov)
			(istream_iterator<string>(file), istream_iterator<string>());
		cout << "Number of words: " << maxSlov << "\n";
	}


	ifstream filet(FileName, ios::out | ios::binary | ios::app);
	for (; i < maxSlov; i++)
	{
		filet >> tempSlovo;
		for (j = 0; j < maxSlov; j++)
		{
			filet >> Slovo;
			if (Slovo == tempSlovo)
			{
				k++;
				Chastota.push_back(k);
				maxChact = 0;
				for (int i = 0; i < Chastota.size(); i++)
				{
					if (maxChact < Chastota[i])
					{
						maxChact = Chastota[i];
						cout << Slovo;
					}
				}
			}

		}
	}
	

	return 0;
}
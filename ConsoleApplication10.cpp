
#include "pch.h"
#include <iostream>
#include <vector>

void wypisz(std::vector<int>tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		std::cout << "Element nr." << i + 1 << " - " << tab[i] << ", \n";

	}


}
bool czynalezy(std::vector<int>tab, int element)
{
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] == element)
		{
			return true;
		}

	}
	return false;
}






int main()
{
	int a;
	std::vector<int>tab;
	tab.push_back(7);
	tab.push_back(1);
	tab.push_back(3);
	tab.push_back(11);
	wypisz(tab);
	std::cin >> a;
	czynalezy(tab,a);

}



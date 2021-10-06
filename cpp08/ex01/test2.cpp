/* 	TEST TO SEE IF LIST1 = LIST2 COPIES IT OR IF THEY ARE THE SAME ADDRESS AFTER 
 	FOR ASSIGNATION OPERATION !!!

	RESULT: deep copy of the content as expected
*/

#include <list>
#include <iostream>
#include <memory>

int main(void)
{
	std::list<int>	ls;

	ls.push_back(10);
	ls.push_back(20);
	ls.push_back(30);
	std::cout << std::addressof(ls) << std::endl;

	std::list<int>	ls2;
	ls2 = ls;

	std::cout << std::addressof(ls2) << std::endl;

	std::list<int>::iterator	it = ls2.begin();
	std::list<int>::iterator	ite = ls2.end();

	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "===" << std::endl;
	std::cout << INT_MAX << std::endl;
}

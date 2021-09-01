#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
	public:

		Contact(void);
		~Contact(void);
		void	add();
		void	print_columns();
		void	print_details();

		std::string	get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_darkest_secret();
		int			get_index();

	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
		int			_index;

		static int	_nb_contacts;
};

#endif
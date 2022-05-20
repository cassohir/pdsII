#include "google_password.hpp"

#include <iostream>
#include <vector>

#include <map>

void GooglePassword::remove(const std::string &url)
{
	// Pegar o objeto e apagar atraves do erase.
	this->m_passwords.erase(url);
}

void GooglePassword::insert(
		const std::string &url,
		const std::string &login,
		const std::string &password)
{
	// Criar um objeto usuario e adicionar no map.
	auto location = this->m_passwords.find(url);

	if (location == this->m_passwords.end() && this->checkPassword(password))
	{

		this->m_passwords[url] = Usuario(login, password);
	}
}

void GooglePassword::update(
		const std::string &url,
		const std::string &login,
		const std::string &old_password,

		const std::string &password)
{
	auto location = this->m_passwords.find(url);
	if (
			location != this->m_passwords.end() && location->second.getPassword() == old_password &&
			this->checkPassword(password))
	{
		location->second.setPassword(password);

		location->second.setLogin(login);
	}
}

void GooglePassword::printPasswords()
{
	// iterar no objeto e depois printar isso.

	std::cout << this->m_passwords.size() << '\n';
	for (const auto &data : this->m_passwords)
	{
		// PRECISO LEMBRAR DE TESTAR se só vai funcionar com o "and" no moodle
		std::cout << data.first << ": " << data.second.getLogin() << " and " << data.second.getPassword() << '\n';
	}
}
// Criar alguma condicional verificando oq o vpl colocou como requisito. (bora testar com varios if primeiro hehe)

bool GooglePassword::checkPassword(const std::string &password) const
{
	std::string testPasswords = "";
	for (const auto &data : this->m_passwords)
		testPasswords += data.second.getPassword();
	// return testPasswords.find(password) != std::string::npos;

	if (password.find("123456") != std::string::npos)
	{

		return false;
	}

	if (50 < password.length())
	{

		return false;
	}

	if (password.length() < 6)
	{

		return false;
	}

	if (password.find(' ') != std::string::npos)
	{

		return false;
	}

	return true;
}

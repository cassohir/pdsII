#include "usuario.hpp"
#include <vector>
#include <map>
#include <string>

Usuario::Usuario(const std::string &login, const std::string &password) : login(login), password(password) {}

const std::string &Usuario::getLogin() const
{
	return this->login;
}

const std::string &Usuario::getPassword() const
{
	return this->password;
}

void Usuario::setPassword(const std::string &password)
{
	this->password = password;
}

void Usuario::setLogin(const std::string &login)
{
	this->login = login;
}

#include "AScalarConverter.hpp"

// ============================================================================|
// Init // Interaction fonctions 1
// ============================================================================|

void AScalarConverter::setStr(std::string str) {
	this->_str = str;
	this->setType();
	if (getType() == NONE) {
		throw AScalarConverter::AScalarConverterException();
	}
}

void	AScalarConverter::setType( void ) {
	if (isChar()) {
		_type = CHAR;
	} else if (isInt()) {
		_type = INT;
	} else if (isFloat()) {
		_type = FLOAT;
	} else if (isDouble()) {
		_type = DOUBLE;
	} else if (isLiterals()) {
		_type = LITERALS;
	} else {
		_type = NONE;
	}
}

// ============================================================================|
// Detect type // Interaction fonctions 2
// ============================================================================|

bool	AScalarConverter::isChar() const {
	return _str.length() == 1 && std::isalpha( _str[0] ) && std::isprint( _str[0] );
}

bool	AScalarConverter::isInt() const {
	int j = 0;
	if (_str[j] == '-' || _str[j] == '+')
		j++;
	for (int i(j); i < (int) _str.length(); i++) {
		if (!std::isdigit(_str[i]))
			return false;
	}
	return true;
}

bool	AScalarConverter::isFloat () const {
	if (_str.find('.') == std::string::npos || _str.back() != 'f'
		 || _str.find('.') == 0 || _str.find('.') == _str.length() - 2)
		return false;
	int found = 0;
	int j = 0;
	if (_str[j] == '-' || _str[j] == '+')
		j++;
	for (int i(j); i < (int) _str.length() - 1; i++) {
		if (_str[i] == '.')
			found++;
		if ((!std::isdigit(_str[i]) && _str[i] != '.' ) || found > 1)
			return false;
	}
	return true;
}

bool	AScalarConverter::isDouble() const {
	if (_str.find('.') == std::string::npos || _str.find('.') == 0
		 || _str.find('.') == _str.length() - 1)
		return false;
	int j = 0;
	int found = 0;
	if (_str[j] == '-' || _str[j] == '+')
		j++;
	for (int i(j); i < (int) _str.length(); i++) {
		if ( _str[i] == '.')
			found++;
		if ((!std::isdigit(_str[i]) && _str[i] != '.') || found > 1 )
			return false;
	}
	return true;
}

bool	AScalarConverter::isLiterals() const {
	if ((_impossible) || (_str.compare("nan") == 0 ) || (_str.compare( "nanf" ) == 0)
		 || (_str.compare("+inf") == 0 ) || (_str.compare("+inff") == 0)
		 || (_str.compare("-inf") == 0 ) || (_str.compare("-inff") == 0)
		 || (_str.compare("-inff") == 0 ) || (_str.compare("-inff") == 0)
		 || (_str.compare("+inff") == 0 ) || (_str.compare("+inff") == 0)) {
		return true;
	}
	return false;
}

// ============================================================================|
// Hardwork // Interaction fonctions 3
// ============================================================================|

void	AScalarConverter::convert() {
	if (isImpossible())
		return;
	switch (_type) {
		case CHAR:
			_c = _str[0];
			_n = static_cast< int >(_c);
			_f = static_cast< float >(_c);
			_d = static_cast< double >(_c);
			break;
		case INT:
			_n = std::stoi(_str);
			_f = static_cast< float >(_n);
			_d = static_cast< double >(_n);
			_c = static_cast< char >(_n);
			break;
		case FLOAT:
			_f = std::stof(_str);
			_n = static_cast< int >(_f);
			_d = static_cast< double >(_f);
			_c = static_cast< char >(_f);
			break;
		case DOUBLE:
			_d = std::stod(_str);
			_n = static_cast< int >(_d);
			_f = static_cast< float >(_d);
			_c = static_cast< char >(_d);
			break;
		default:
			break;
	}
}

bool	AScalarConverter::isImpossible() {
	std::locale::global(std::locale::classic()); // Set global locale to "C"
	try {
		if (_type == INT) {
			_n = std::stoi(_str);
		} else if (_type == FLOAT) {
			_f = std::stof(_str);
		} else if (_type == DOUBLE) {
			_d = std::stod(_str);
		}
	}
	catch (std::exception& e) {
		_impossible = true;
		return true;
	}
	_impossible = false;
	return false;
}

// ============================================================================|
// Printer // Interaction fonctions 4
// ============================================================================|

void	AScalarConverter::printChar() const {
	if (this->isLiterals() || (!std::isprint(_n) && (_n >= 127))) {
		std::cout << "Impossible";
	} else if (!std::isprint(this->_n)) {
		std::cout << "None displayable";
	} else {
		std::cout << "'" << getC() << "'";
	}
	std::cout << std::endl;
}

void	AScalarConverter::printInt() const {
	if (this->isLiterals() || (!std::isprint(_n) && (_n >= 127))) {
		std::cout << "Impossible";
	} else {
		std::cout << getI();
	}
	std::cout << std::endl;
}

void	AScalarConverter::printFloat() const {
	if (_str.compare("nan") == 0 || _str.compare("nanf") == 0) {
		std::cout << "nanf";
	} else if (_str.compare("+inff") == 0 || _str.compare("+inf") == 0) {
		std::cout << "+inff";
	} else if (_str.compare("-inff") == 0 || _str.compare("-inf") == 0) {
		std::cout << "-inff";
	} else if (_impossible) {
		std::cout << "Impossible";
	} else {
		if (_f - static_cast< int > (_f) == 0 ) {
			std::cout << _f << ".0f";
		} else {
			std::cout << getF() << "f";
		}
	}
	std::cout << std::endl;
}

void	AScalarConverter::printDouble() const {
	if (_str.compare("nan") == 0 || _str.compare("nanf") == 0) {
		std::cout << "nan";
	} else if (_str.compare("+inff") == 0 || _str.compare("+inf") == 0) {
		std::cout << "+inf";
	} else if (_str.compare("-inff") == 0 || _str.compare("-inf") == 0) {
		std::cout << "-inf";
	} else if (_impossible) {
		std::cout << "Impossible";
	} else {
		if (_d - static_cast< int > (_d) == 0 ) {
			std::cout << _d << ".0";
		} else {
			std::cout << getD();
		}
	}
	std::cout << std::endl;
}

// ============================================================================|
// Getters / Setter
// ============================================================================|

char	AScalarConverter::getC() const {
	return this->_c;
}

void	AScalarConverter::setC(char c) {
	this->_c = c;
}

int		AScalarConverter::getI() const {
	return this->_n;
}

void	AScalarConverter::setI(int n) {
	this->_n = n;
}

float	AScalarConverter::getF() const {
	return this->_f;
}

void	AScalarConverter::setF(float f) {
	this->_f = f;
}

double	AScalarConverter::getD() const {
	return this->_d;
}

void	AScalarConverter::setD(double d) {
	this->_d = d;
}

std::string	AScalarConverter::getStr() const {
	return this->_str;
}

e_type		AScalarConverter::getType() const {
	return this->_type;
}

// ============================================================================|
// Construction & destruction
// ============================================================================|

AScalarConverter::AScalarConverter() {
	this->_c = '\0';
	this->_n = 0;
	this->_f = 0.0f;
	this->_d = 0.0;
}

AScalarConverter::AScalarConverter(const AScalarConverter &src) {
	*this = src;
}

AScalarConverter::~AScalarConverter( void ) {}

// ============================================================================|
// Operator overload
// ============================================================================|

AScalarConverter &AScalarConverter::operator=(const AScalarConverter &rhs) {
	if ( this != &rhs ) {
		this->_n = rhs.getI();
		this->_f = rhs.getF();
		this->_c = rhs.getC();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &out, const AScalarConverter &rhs) {
	out << "char: "; rhs.printChar();
	out << "int: "; rhs.printInt();
	out << "float: "; rhs.printFloat();
	out << "double: "; rhs.printDouble();
	return out;
}

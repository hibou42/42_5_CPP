#ifndef Contact_CLASS_HPP
# define Contact_CLASS_HPP

class Contact
{
private:

	int	_privateVar;

public:

	int	publicVar;

	Contact(void);							// Constructeur
	Contact(const Contact& other);			// Constructeur de copie (1)
	~Contact(void);							// Destructeur
	Contact& operator=(const Contact& rhs);	// Opérateur d'affectation (2)

};

#endif

/*
1 : Constructeur de copie : Il sert à créer une nouvelle instance en
copiant une instance existante.

2 : Opérateur d'affectation (operator=) : Il sert à copier les valeurs
d'une instance existante dans une autre déjà existante.
*/
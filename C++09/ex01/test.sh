#!/bin/bash

# Chemin vers l'exécutable de votre programme
executable="./RPN"

# Couleurs pour le terminal
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Liste des tests valides avec les résultats attendus
valid_tests=(
	"3 4 + (res: 7)"
	"5 1 2 + 4 * + 3 - (res: 14)"
	"7 2 3 * - (res: 1)"
	"9 5 2 7 + * - (res: -36)"
	"8 9 * 9 - 9 - 9 - 4 - 1 + (res: 42)"
)

# Liste des tests invalides avec les erreurs attendues
invalid_tests=(
	"3 0 / (res: division by zero)"
	"2 + (res: invalid expression)"
	"10 20 30 (res: invalid expression)"
	"2 3 4 * + + (res: invalid expression)"
	"3 + + 2 (res: invalid expression)"
	"abc 2 + (res: invalid operand)"
)

# Tester les cas valides
echo -e "${BLUE}=== TESTS VALIDES ===${NC}"
for test in "${valid_tests[@]}"; do
	# Extraire la commande et le résultat attendu
	command=$(echo "$test" | awk -F'(' '{print $1}')
	result=$(echo "$test" | awk -F'(' '{print $2}' | sed 's/)//')

	echo -e "${YELLOW}Test: $command${NC} (${GREEN}$result${NC})"
	$executable "$command"
	echo -e "${BLUE}--------------------${NC}"
done

# Tester les cas invalides
echo -e "${RED}=== TESTS INVALIDES ===${NC}"
for test in "${invalid_tests[@]}"; do
	# Extraire la commande et l'erreur attendue
	command=$(echo "$test" | awk -F'(' '{print $1}')
	result=$(echo "$test" | awk -F'(' '{print $2}' | sed 's/)//')

	echo -e "${YELLOW}Test: $command${NC} (${RED}$result${NC})"
	$executable "$command"
	echo -e "${BLUE}--------------------${NC}"
done

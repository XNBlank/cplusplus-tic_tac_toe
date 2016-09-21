#include <iostream>
using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

int checkWin();
void board();
void clear();

int main()
{
  int player = 1,i,choice;

  char mark;
  do
  {
    board();
    player=(player%2)?1:2;

    cout << "Player " << player << ", Enter a number: ";
    cin >> choice;

    mark=(player == 1) ? 'X' : 'O';

switch(choice){
  case 1:
    if(square[1] == '1')
      square[1] = mark;
    else{
      cout << "Invalid move!";
      player--;
      cin.ignore();
      cin.get();
    }
    break;
  case 2:
    if(square[2] == '2')
      square[2] = mark;
    else{
      cout << "Invalid move!";
      player--;
      cin.ignore();
      cin.get();
    }
    break;
  case 3:
    if(square[3] == '3')
      square[3] = mark;
    else{
      cout << "Invalid move!";
      player--;
      cin.ignore();
      cin.get();
    }
    break;
  case 4:
    if(square[4] == '4')
      square[4] = mark;
    else{
      cout << "Invalid move!";
      player--;
      cin.ignore();
      cin.get();
    }
    break;
  case 5:
    if(square[5] == '5')
      square[5] = mark;
    else{
      cout << "Invalid move!";
      player--;
      cin.ignore();
      cin.get();
    }
    break;
  case 6:
    if(square[6] == '6')
      square[6] = mark;
    else{
      cout << "Invalid move!";
      player--;
      cin.ignore();
      cin.get();
    }
    break;
  case 7:
    if(square[7] == '7')
      square[7] = mark;
    else{
      cout << "Invalid move!";
      player--;
      cin.ignore();
      cin.get();
    }
    break;
  case 8:
    if(square[8] == '8')
      square[8] = mark;
    else{
      cout << "Invalid move!";
      player--;
      cin.ignore();
      cin.get();
    }
    break;
  case 9:
    if(square[9] == '9')
      square[9] = mark;
    else{
      cout << "Invalid move!";
      player--;
      cin.ignore();
      cin.get();
    }
    break;
  default:
    cout << "Invalid move!";

    player--;
    cin.ignore();
    cin.get();


    break;
}

    i = checkWin();

    player++;

    clear();

  }while(i == -1);

  board();

  if (i == 1){
    cout << "==>\aPlayer " <<--player << " wins!";
    return 0;
  } else {
    cout << "==>\aGame Draw!";
    return 0;
  }
  cin.ignore();
  cin.get();
  return 0;

}

void clear() {
    // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
    std::cout << "\x1B[2J\x1B[H";
}

int checkWin()
{
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}

void board()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "     |     |     " << endl << endl;
}

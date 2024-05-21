import std;


class Player
{
public:
	int x{ 0 };
	int y{ 0 };
	int speed{ 1 };

	void Move(int xd, int yd)
	{
		x += xd * speed;
		y += yd * speed;
	}

	void PrintPlayer() const
	{
		std::cout << "Player: "
			<< "\nx = " << x
			<< "\ny = " << y
			<< "\nspeed = " << speed
			<< "\n\n";
	}

};

int main()
{
	Player player;
	player.PrintPlayer();

	player.x = 5;
	player.PrintPlayer();

	player.Move(1, -2);
	player.PrintPlayer();
}
/*
import std;

class Player
{
public:
	int x{ 0 };
	int y{ 0 };
	int speed{ 1 };
};

void Move(Player& player, int xd, int yd)
{
	player.x += xd * player.speed;
	player.y += yd * player.speed;
}

void PrintPlayer(Player& player)
{
	std::cout << "Player: "
		<< "\nx = " << player.x
		<< "\ny = " << player.y
		<< "\nspeed = " << player.speed
		<< "\n\n";
}

int main()
{
	Player player;
	PrintPlayer(player);

	player.x = 5;
	PrintPlayer(player);

	Move(player, 1, -2);
	PrintPlayer(player);
}
*/
#include "Part.h"
#include "ConsoleMath.h"
#include "ConsoleScreen.h"
#include "ConsoleObject.h"
Part::Part()
{
}

Part::~Part()
{
}


void Snack(void)
{
	int i = 0;
	int food_crush = 0;
	int random = 0;//난수 생성 변수

	int food_x = 0;
	int	food_y = 0;

	while (true)
	{
		food_crush = 0;
		srand((unsigned)time(NULL) + random); //난수생성
		//food_x = (rand()%( ))+1;		//생성값을 넣어주기
		//food_x = (rand() % ())+1;
		// 
		//food_y = (rand() % ())+1;
	}

}

void Move(void)
{
	int i;

	//if (x[0] == food_x)//Snack 과 충돌했을떄
	//{
	//	length++;

	//}
}
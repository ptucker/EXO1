
#ifndef FAN_H_
#define FAN_H_

//PT -- 19/20

class Fan
{
private:		//The book asked for "accessor and mutator functions for all data fields" but only Speed was given any parameters so I decided to do the following
	int Speed;
public:
	bool On;	//did not include private bool because there are only two possible values already
	double Radius;	//did not inlude a private Radius because it seemed that there was no set limit to it
	//PT -- I think a negative value for radius would be bad.
	//PT -- In general, put member variables in private
	int GetSpeed=Speed;

	Fan()
	{
		Speed = 1;
		Radius = 5;
		//PT -- On = false;
		//PT -- -1
	}

	void TurnOn()
	{
		On = true;
	}

	void TurnOff()
	{
		On = false;
	}

	void SetRadius(int NewRadius)
	{
		Radius = NewRadius;
	}

	void SetSpeed(int NewSpeed)
	{
		if (NewSpeed >= 1 && NewSpeed <= 3)	//book example included "On" in all 'if statements' but problem 9.2 did wanted the fan to be off and have a speed of 2
			Speed = NewSpeed;
		GetSpeed = Speed;
	}
	
	//PT -- int getSpeed() { return speed; }
	//PT -- the member variable GetSpeed works, but you need to make sure you maintain it, and you don't in Fan().
};

#endif

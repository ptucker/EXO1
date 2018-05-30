#include "EvenNumber.h"
//PT -- 19/20

EvenNumber::EvenNumber()
{
	Even = 0;
}
EvenNumber::EvenNumber(int NewEven)
{
	//PT -- check to be sure newEven is actually even. If not, set Even to 0, or NewEven+1/NewEven-1 (your choice).
	// -1
	Even = NewEven;
}
int EvenNumber::GetValue()
{
	return Even;
}
int EvenNumber::GetNext()
{
	return (Even + 2);
}
int EvenNumber::GetPrevious()
{
	return (Even - 2);
}

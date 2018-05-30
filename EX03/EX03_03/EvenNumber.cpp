#include "EvenNumber.h"
EvenNumber::EvenNumber()
{
	Even = 0;
}
EvenNumber::EvenNumber(int NewEven)
{
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
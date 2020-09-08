#include <iostream>
#include <assert.h>
#include "Color.h"

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}
void ToString()
{
    //int Total_number_of_combinations = TelCoColorCoder::numberOfMajorColors * TelCoColorCoder::numberOfMinorColors;
    int i,j,count = 0;
    for (i = 0; i < TelCoColorCoder::numberOfMajorColors; i++)
    {
        for (j = 0; j < TelCoColorCoder::numberOfMinorColors; j++)

        {
            std::cout << "Pair Number : " << ++count <<" ::";
            std::cout << " Color Pair : " << TelCoColorCoder::MajorColorNames[i] << TelCoColorCoder::MinorColorNames[j] << std::endl;
        }

    }

}
int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
    ToString();
    return 0;
}

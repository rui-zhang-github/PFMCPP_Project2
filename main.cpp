#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int  bool
 char
 double
 float
 unsigned int
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    //integers:
    int numberOfLaptops = 1;
    int numberOfMonitors = 2;
    int numberOfApplications = 10;

    //float:
    float averageHeightInFloat = 1.53f;
    float averageLengthInFloat = 12.56f;
    float averageWidthInFloat = 556.789f;

    //double:
    double averageHeightInDouble = 1.11111111;
    double averageLengthInDouble = 12.5666666;
    double averageWidthInDouble = 556.78999999;

    //bool:
    bool isProgrammer = true;
    bool isSmart = false;
    bool isSuperHero = false; 

    //char:
    char intialOfFirstName = 'R';
    char intialOfMiddleName = 'R';
    char intialOfLastName = 'Z';

    //unsigned int
    unsigned int x = 0;
    unsigned int y = 1;
    unsigned int z = 2;


    

    
    ignoreUnused(number, numberOfLaptops, numberOfMonitors, numberOfApplications, averageHeightInFloat, averageLengthInFloat, averageWidthInFloat, averageHeightInDouble, averageLengthInDouble, averageWidthInDouble, isProgrammer, isSmart, isSuperHero, intialOfFirstName, intialOfMiddleName, intialOfLastName, x, y, z); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
char firstLetterOfWord(std::string word)
{
    ignoreUnused(word);
    return {};
}

/*
 2)
 */
char luckyLetterOfDate(int date = 1)
{
    ignoreUnused(date);
    return {};
}

/*
 3)
 */
bool isOddNumber(int number = 0)
{
    ignoreUnused(number);
    return {};
}

/*
 4)
 */
bool doWeHaveAllTheTools(int numberOfScrews, int numberOfScrewDrivers = 1, int numberOfDrillBits = 1)
{
    ignoreUnused(numberOfScrews, numberOfScrewDrivers, numberOfDrillBits);
    return {};
}

/*
 5)
 */
int numberOfDaysUntil(int targetDate, int currentDate)
{
    ignoreUnused(targetDate, currentDate);
    return {};
}

/*
 6)
 */
int totalNumberOfAnimals(int numberOfMonkeys, int numberOfWolves, int numberOfTigers, int numberOfCats)
{
    ignoreUnused(numberOfMonkeys, numberOfWolves, numberOfTigers, numberOfCats);
    return {};
}

/*
 7)
 */
double averageOfThreeDoubles(double x, double y, double z = 0.0)
{
    ignoreUnused(x, y, z);
    return {};
}

/*
 8)
 */
double areaOfCircle(double radius = 0.0)
{
    ignoreUnused(radius);
    return {};
}

/*
 9)
 */
void assembleLego(int numberOfLegoPieces, bool isThereAnyInstructions = true)
{
    ignoreUnused(numberOfLegoPieces, isThereAnyInstructions); 
}

/*
 10)
 */
void userLogIn(std::string password, std::string username = "1111")
{
    ignoreUnused(password, username);
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto firstLetter = firstLetterOfWord("hello");
    
    //2)
    auto luckyLetter = luckyLetterOfDate(1234567);
    
    //3)
    auto isOdd = isOddNumber(3);
    
    //4)
    auto haveAllTheTools = doWeHaveAllTheTools(10, 2, 2);
    
    //5)
    auto numberOfDaysUntilChristmas = numberOfDaysUntil(475869, 472334);
    
    //6)
    auto numberOfAnimals = totalNumberOfAnimals(2, 0, 2, 2);

    //7)
    auto average = averageOfThreeDoubles(2.0, 2.0, 2.0);
    
    //8)
    auto area = areaOfCircle(2.0);
    
    //9)
    assembleLego(1000, false);
    
    //10)
    userLogIn("asdf1234", "qewr@zxcv.com");
    
    
    ignoreUnused(carRented, firstLetter, luckyLetter, isOdd, haveAllTheTools, numberOfDaysUntilChristmas, numberOfAnimals, average, area);
    std::cout << "good to go!" << std::endl;
    return 0;    
}

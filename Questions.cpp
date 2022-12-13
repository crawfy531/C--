#include <string>
#include <ctime>
#include <cstdlib>

#include "Math.cpp"

namespace Questions{
    class GenerateQuestions{
        private:
        // this is how high the numbers can get for the questions
        const int NUMBERLIMIT = 10;

        string question;
        double answer;

        int first;
        int second;

        Math::Geometry geometry;
        Math::GeneralMath math;
        // this gets the random numbers for the questions
        void SetFirstSecond(){
            first = RandomNumber(NUMBERLIMIT);
            second = RandomNumber(NUMBERLIMIT);
        }
        public:
        
        GenerateQuestions(){
            // this generates a random seed
            srand(time(0));

        }
        // this chooses a random type of question through generating a random number
        void SetQuestionAnswer(){
            SetFirstSecond();
            int choice = RandomNumber(11);
            //int choice = 1;
            switch (choice)
            {
            case 1:
                AddQuestion();
                break;
            case 2:
                SubtractQuestion();
                break;
            case 3:
                MultiplyQuestion();
                break;
            case 4:
                DivideQuestion();
                break;
            case 5:
                PowerQuestion();
                break;
            case 6:
                ModulusQuestion();
                break;
            case 7:
                FactorialQuestion();
                break;
            case 8:
                SquareAreaQuestion();
                break;
            case 9:
                RectangleAreaQuestion();
                break;
            case 10:
                CircleAreaQuestion();
                break;
            case 11:
                TriangleAreaQuestion();
                break;
            default:

                break;
            }
        }


        //all of these initialize the question and answer
        void AddQuestion(){
            question = "Add the following: " + to_string(first) + " + " + to_string(second);
            answer = math.Add(first,second);
        }
        void SubtractQuestion(){
            question = "Subract the following: " + to_string(first) + " - " + to_string(second);
            answer = math.Subtract(first,second);

        }
        void MultiplyQuestion(){
            question = "Multiply the following: " + to_string(first) + " * " + to_string(second);
            answer = math.Multiply(first,second);
        }
        void DivideQuestion(){
            question = "Divide the following: " + to_string(first) + " / " + to_string(second);
            answer = math.Divide(first,second);
        }
        void PowerQuestion(){
            question = "Solve the power function: " + to_string(first) + " ^ " + to_string(second);
            answer = math.Power(first,second);
        }
        void ModulusQuestion(){
            question = "Solve the modulus function: " + to_string(first) + " % " + to_string(second);
            answer = math.Modulus(first,second);
        }
        void FactorialQuestion(){
            question = "Find the factorial: " + to_string(first) + "!";
            answer = math.Factorial(first);
        }
        void SquareAreaQuestion(){
            question = "What is the area of the square with a side length of " + to_string(first) + "?";
            answer = geometry.SquareArea(first);
        }
        void RectangleAreaQuestion(){
            question = "What is the area of the rectangle with length of " + to_string(first) + " and a height of " + to_string(second) + "?";
            answer = geometry.RectangleArea(first,second);
        }
        void CircleAreaQuestion(){
            question = "Find the area of a circle with a radius of " + to_string(first) + ".";
            answer = geometry.CircleArea(first);
        }
        void TriangleAreaQuestion(){
            question = "Find the area of a triangle with a height of " + to_string(first) + " and a base of " + to_string(second) + ".";
            answer = geometry.TriangleArea(first,second);
        }

        //this will generate a random number within a limit
        int RandomNumber(int limit){

            return rand()%limit+1;

        }

        string GetQuestion(){
            return question;
        }
        string GetAnswer(){
            return to_string(answer);
            
        }

        int GetFirst(){
            return first;
        }
        int GetSecond(){
            return second;
        }

    };
}
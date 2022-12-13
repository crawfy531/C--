#include <iostream>
#include "Interface.cpp"
#include "Questions.cpp"
#include <deque>
#include <stack>

//template<class T,class Container = std::deque<T>> class stack;


using namespace std;



int main(int argc, char const *argv[])
{
    Questions::GenerateQuestions question;
    UserCommunication::Interface interface;

    string input;
    bool gameOver = false;
    int score = 0;
    stack<string> allQuestions;

    while (gameOver == false)
    {
        //generates a new question
        question.SetQuestionAnswer();
        //saves the question being asked
        allQuestions.push(question.GetQuestion());
        // shows the user the question
        interface.OutputMessage(question.GetQuestion());
        //collects input form user
        input = interface.InputResponse();
        // if right adds to score and continue loop
        if (input == question.GetAnswer() )
        {
            interface.OutputMessage("That is right! Next Question: \n");
            score ++;
        }
        // if wrong shows answer and score and breaks the loop
        else{
            interface.OutputMessage("Sorry... that is wrong... the right answer was: ");
            interface.OutputMessage(question.GetAnswer() + "\n");
            interface.OutputMessage("Here is your score: ");
            interface.OutputMessage(std::to_string(score));
            gameOver = true;
        }
    }
    interface.OutputMessage("\n \n");
    interface.OutputMessage("Here is a history from last to first of all the questions you saw: \n \n");
    // shows the history of all the questions asked
    while (!allQuestions.empty()) {
        interface.OutputMessage(allQuestions.top());
        allQuestions.pop();
        interface.OutputMessage("\n");
    }
    




}




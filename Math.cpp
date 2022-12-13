using namespace std;

namespace Math{
    
    //this  class has the functions that include addition, subtraction, division, modulus, power, and factorial

    class GeneralMath
    {
    private:
        double result;
    public:
        double Add(double first, double second){
            return first + second;
        }
        double Subtract(double first, double second){
            return first - second;
        }
        double Multiply(double first, double second){
            return first * second;
        }

        double Divide(double first, double second){
            if(second == 0){
                cout << "ERROR: division by 0 \n";
                return 0;
            }
            else{
                return first / second;
            }

        }
        
        int Modulus(int first, int second){

            return first % second;
        }

        double Power(double first, int second){
            result = 1;

            for (int i = 0; i < second; i++)
            {
                result = Multiply(result,first);
            }
            return result;
            
        }

        double Factorial(int first){
            result = 1;
            for (int i = first; i > 0; i--)
            {
                result = Multiply(result,i);
            }
            return result;
        }
    };
//-------------------------------------------------------------------------------------------------------------------------------------
// this class has functions for calculating the area of a square, area of a rectangle, area of a circle, and the area of a triangle
    class Geometry: public GeneralMath
    {
    private:
    const double PI = 3.14159265358979323846;

    public:
    
    double SquareArea(double sideLength){
        return Power(sideLength,2);
    }
    double RectangleArea(double length, double height){
        return Multiply(length,height);
    }
    double CircleArea(double radius){
        return Multiply(PI,Power(radius,2));
    }
    double TriangleArea(double height, double base){
        return Divide(Multiply(height,base),2);
    }

    };
}




namespace Calculator
{
    class Calculator {         
        static void Main(string[] args)
        {
                   
            Console.WriteLine("Enter 1st input");  
            int input_1 = Convert.ToInt32(Console.ReadLine());  
            Console.WriteLine("Enter 2nd input");  
            int input_2 = Convert.ToInt32(Console.ReadLine());  
            Console.WriteLine("Operator: ");  
              char action  = Convert.ToChar(Console.ReadLine());  
              string description = "";
            int result = 0;  
            switch (action) {  
                case '+': {  
                    result = input_1 + input_2;
                    description = "added by";
                    break;  
                }  
                case '-': {  
                    result = input_1 - input_2;
                    description = "subtracted by";
                    break;  
                }  
                case '*': {  
                    result = input_1 * input_2;
                    description = "multiplied by";  
                    break;  
                }  
                case '/': {  
                    result = input_1 / input_2;
                    description = "divided by";
                    break;  
                } 
                case '^': {  
                    result = (int)Math.Pow(input_1, input_2); 
                    description = "raised to the power of";
                    break;  
                }  
                default:  
                    Console.WriteLine("Wrong action!! try again");  
                    break;  
            }  
            Console.WriteLine("{3} is the result of {0} {1} {2}", input_1, description, input_2, result); 
            Console.ReadKey();  
        }
    }
}


namespace Numbers
{
    class Numbers {         
        static void Main(string[] args)
        {
            while(true)
            {
                Console.WriteLine("[FOOD ORDER] Press any key to quit, press Y to continue");
                string input = Console.ReadLine();
                if (input == "Y" || input == "y")
                {
                    firstActivity();
                }
                else
                {
                    break;
                }            
            }
        
            while(true)
            {
                Console.WriteLine("[SPORTS] Press any key to quit, press Y to continue");
                string input = Console.ReadLine();
                if (input == "Y" || input == "y")
                {
                    secondActivity();
                }
                else
                {
                    break;
                }            
            }


        }  

        static void secondActivity(){
            // get the scores for the 2 teams for first quarter
            // score array for the 2 teams
            // Team HOME
            // Team AWAY
            int [] home = new int[4];
            int [] away = new int[4];
            // FIRST QUARTER
            Console.WriteLine("1st Quarter");
            // get the score of home team for first quarter
            Console.WriteLine("HOME: ");
            home[0] = Convert.ToInt32(Console.ReadLine());
            // get the score of away team for first quarter
            Console.WriteLine("AWAY: ");
            away[0] = Convert.ToInt32(Console.ReadLine());
            // SECOND QUARTER
            Console.WriteLine("2nd Quarter");
            // get the score of home team for second quarter
            Console.WriteLine("HOME: ");
            home[1] = Convert.ToInt32(Console.ReadLine());
            // get the score of away team for second quarter
            Console.WriteLine("AWAY: ");
            away[1] = Convert.ToInt32(Console.ReadLine());
            // THIRD QUARTER
            Console.WriteLine("3rd Quarter");
            // get the score of home team for third quarter
            Console.WriteLine("HOME: ");
            home[2] = Convert.ToInt32(Console.ReadLine());
            // get the score of away team for third quarter
            Console.WriteLine("AWAY: ");
            away[2] = Convert.ToInt32(Console.ReadLine());
            // FOURTH QUARTER
            Console.WriteLine("4th Quarter");
            // get the score of home team for fourth quarter
            Console.WriteLine("HOME: ");
            home[3] = Convert.ToInt32(Console.ReadLine());
            // get the score of away team for fourth quarter
            Console.WriteLine("AWAY: ");
            away[3] = Convert.ToInt32(Console.ReadLine());

            // get the total each team scored for the game
            int homeTotal = 0;
            int awayTotal = 0;
            for (int i = 0; i < home.Length; i++){
            homeTotal += home[i];
            awayTotal += away[i];
            }
            // display the total for each team
            Console.WriteLine("HOME: " + homeTotal);
            Console.WriteLine("AWAY: " + awayTotal);
            // determine the winner of the game
            if (homeTotal > awayTotal){
            Console.WriteLine("Overall winning Team: HOME");
            }
            else if (homeTotal < awayTotal){
            Console.WriteLine("Overall winning Team: AWAY");
            }
            else {
            Console.WriteLine("TIE");
            }

            
        }

        static void firstActivity(){
                string[] appetizer = { "Onion Ring", "Bread Stickk", "Corn Coupon" };
                string[] main_course = { "Roasted Chicken", "Pork BBQ", "Fish Fillet", "Beef Menudo" };
                string[] dessert = { "Salad", "Cake", "Leche Plan" };
                string[] drinks = { "Botted Water", "Soda in Can", "Fruit Juice", "Hot Coffee" };

                // Prices 
                int[] appetizer_price = { 80, 50, 40 };
                int[] main_course_price = { 190, 200, 180, 210 };
                int[] dessert_price = { 50, 60, 40 };
                int[] drinks_price = { 20, 456, 60, 50 };

                // Display Menu
                // For example:
                // === Appetizer ===
                // [0] Onion Ring - PHP. 80
                Console.WriteLine("=== Appetizer ===");
                for (int i = 0; i < appetizer.Length; i++)
                {

                Console.WriteLine("[{0}] {1} - PHP. {2}", i, appetizer[i], appetizer_price[i]);
                }

                Console.WriteLine("=== Main Course ===");
                for (int i = 0; i < main_course.Length; i++)
                {

                Console.WriteLine("[{0}] {1} - PHP. {2}", i, main_course[i], main_course_price[i]);
                }
                Console.WriteLine("=== Dessert ===");
                for (int i = 0; i < dessert.Length; i++)
                {

                Console.WriteLine("[{0}] {1} - PHP. {2}", i, dessert[i], dessert_price[i]);
                }
                Console.WriteLine("=== Drinks ===");
                for (int i = 0; i < drinks.Length; i++)
                {

                Console.WriteLine("[{0}] {1} - PHP. {2}", i, drinks[i], drinks_price[i]);
                }



                // ordering food 
                // 1. ask the customer name 
                string customer_name = "";
                Console.WriteLine("Customer Name: ");
                customer_name = Console.ReadLine();
                // 2. ask the customer what they want to order
                // 2.1 display the entered number of the food ordered with the price
                // 2.2 if out of number length display NOT AVALIABLE then the price is 0
                Console.WriteLine("Main Course:");
                int main_course_choice = int.Parse(Console.ReadLine());
                checkIfAvailable(main_course, main_course_price, main_course_choice);
                Console.WriteLine("Dessert:");
                int dessert_choice = int.Parse(Console.ReadLine());
                checkIfAvailable(dessert, dessert_price, dessert_choice);
                Console.WriteLine("Drinks:");
                int drinks_choice = int.Parse(Console.ReadLine());
                checkIfAvailable(drinks, drinks_price, drinks_choice);
                Console.WriteLine("Appetizer:");
                int appetizer_choice = int.Parse(Console.ReadLine());
                checkIfAvailable(appetizer, appetizer_price, appetizer_choice);
                // 3. display the order summary with the price each item cost
                Console.WriteLine("=== Order Summary ===");
                Console.WriteLine("Customer Name: {0}", customer_name);
                Console.WriteLine("Main Course: {0} - PHP. {1}", main_course[main_course_choice], main_course_price[main_course_choice]);
                Console.WriteLine("Dessert: {0} - PHP. {1}", dessert[dessert_choice], dessert_price[dessert_choice]);
                Console.WriteLine("Drinks: {0} - PHP. {1}", drinks[drinks_choice], drinks_price[drinks_choice]);
                Console.WriteLine("Appetizer: {0} - PHP. {1}", appetizer[appetizer_choice], appetizer_price[appetizer_choice]);


                // 4. calculate the total price
                int total_price = main_course_price[main_course_choice] + dessert_price[dessert_choice] + drinks_price[drinks_choice] + appetizer_price[appetizer_choice];
                Console.WriteLine("Total Price: {0}", total_price);
                // 5. get the payment if payment is not enough, ask the customer to pay more in a loop until the payment is enough
                Console.WriteLine("Payment: ");
                int payment = int.Parse(Console.ReadLine());
                while (payment < total_price)
                {
                Console.WriteLine("Payment: ");
                payment = int.Parse(Console.ReadLine());
                }
                // 6. display the change
                Console.WriteLine("Change: {0}", payment - total_price);
                // thank you
                Console.WriteLine("Thank you for your order!");

                static void checkIfAvailable(string[] main_course, int[] main_course_price, int main_course_choice)
                {
                if (main_course_choice < main_course.Length)
                {
                Console.WriteLine("{0} - PHP. {1}", main_course[main_course_choice], main_course_price[main_course_choice]);
                }
                else
                {
                Console.WriteLine("NOT AVAILABLE");
                }
                }


        }
    }
}

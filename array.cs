
namespace Numbers
{
    class Numbers {         
        static void Main(string[] args)
        {
          
        Console.WriteLine("Choose an option: 1, 2, or 3");
        int option = Convert.ToInt32(Console.ReadLine());
        switch (option)
        {
            case 1:
                Activity1();
                break;
            case 2:
                Activity2();
                break;
            case 3:
                Activity3();
                break;
            default:
                Console.WriteLine("Invalid option");
                break;
        }


        }
    static void Activity2(){        
            string [,] students =  {
                {"1","Tiger Forrest","TG@Gmail.com",},
                {"2","Snake Tree","Snke@Yahoo.com" },
                {"3","Dog Barker","Barker@hotmail.com"},
                {"4","Catty Pussin","Catty@Gmail.com"},
                {"5","Mousey Brat","Brat@Yahoo.com"}};

            // input id then print the name and email address
            Console.WriteLine("Enter student ID: ");
            string id = Console.ReadLine();
            for (int i = 0; i < students.GetLength(0); i++)
            {
                if (id == students[i, 0])
                {
                    Console.WriteLine("Student Name: " + students[i, 1]);
                    Console.WriteLine("Email Address: " + students[i, 2]);
                }
            }
    }  
    
    static void Activity3(){
    // an array can store string  
        string[] names =new string[5];
    // ask user to enter 5 names
        for(int i=0;i<5;i++)
        {
            Console.Write("Enter name: ");
            names[i]=Console.ReadLine();
        }
    // print the names  
        for(int i=0;i<5;i++)
        {
            
            Console.WriteLine("Name {0}: {1}",i+1,names[i]);
        }
    }

    static void Activity1(){   
           
            string [,] students =  {
                {"1","Tiger Forrest","TG@Gmail.com",},
                {"2","Snake Tree","Snke@Yahoo.com" },
                {"3","Dog Barker","Barker@hotmail.com"},
                {"4","Catty Pussin","Catty@Gmail.com"},
                {"5","Mousey Brat","Brat@Yahoo.com"}};

            // input id then print the name and email address
            Console.WriteLine("Enter student ID: ");
            string id = Console.ReadLine();
            for (int i = 0; i < students.GetLength(0); i++)
            {
                if (id == students[i, 0])
                {
                    Console.WriteLine("Student Name: " + students[i, 1]);
                    Console.WriteLine("Email Address: " + students[i, 2]);
                }
            }
    }
    }
}  
    


    


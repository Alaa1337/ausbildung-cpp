#include <iostream>
#include <thread>
using namespace std;

/*int get_random_function(int min, int max){

}*/

void thread_function(){
    while(true){
        std::cout << "Hey are you still here?\n" << std::endl;
    }
}

int get_random_function ()
{
     return rand() % 10 + 1;
}

int game_round ( int overall_points )
{
    int round_points = 0;
    int input_number = 0;

    cout << "bitte eine Zahl von 1 - 10 eingeben: ";
    cin >> input_number;
    cout << "\n";

    if ( input_number > 10 || input_number < 1 ) {
        cout << "Are you trying to cheat? \n\n-1 Point \n\n ";
        return -1;
    }

    if ( input_number != get_random_function() 
    ) {
        cout << " +1 Point\n\n";
        round_points = 1;
    }

    if ( (overall_points + round_points) % 10  == 0 ) {
        cout << "\nWow youre lucky here have two extra Points. \n\n+2 Point \n\n ";
        round_points += 2;
    }

    return round_points;

}

// Ein Spiel bei dem man nicht die richtige zahl die zwischen eins und zehn sein kann erraten soll.
int main()

{

{     

    //std::thread t(&thread_function);
    //_sleep(400000);
   // t.join();
}


     int game_points = 0;


    // Der Ort zu dem das Spiel zurückspringt wenn man einen Punkt bekommt

   
    bool continued = true;

    //if Statement um bei Zahlen über Zehn das Spiel zu beenden
    while(continued && !cin.eof()){
        int round_win = game_round( game_points );
        game_points += round_win;
        if(round_win == 0){
            continued = false;
        }
        cout <<"\nStand bisher: " + std::to_string(game_points) + "\n";
    }


   
    cout <<  "GAME OVER! You have " << game_points << " Points\n" ;
    cout << "\n";
    system("pause");
    //cout << "Press Enter to quit\n";
    //system("pause");
    return 0;
}


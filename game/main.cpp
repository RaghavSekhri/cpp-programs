#include <iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

 class Game{

  public :
   int userinput ;

      int random;
      void run();

       void gameLogic();

       void conti();

       void stop();
 };

  void Game::run(){


   cout<<"Welcome to the Guess game \n Guess any number between 0 to 5 :";

    cin>>userinput;

       gameLogic();


  }

  void Game::gameLogic()
{
   srand(time(0));
    random = rand()%5+1;

     if(random==userinput){

        cout<<"Congo you won its :"<<random<<endl;
         conti();
     }else{

       cout<<"sorry you loose its :"<<random<<endl;
      //conti();
     }

}

 /*void Game:: conti(){

   char u ;

  cout<<"Do you wish to play again y or n :";
   cin>>u;

   if(u=='y') {

      run();

   }else {

    stop();
   }

 }*/

 void Game:: stop() {

  cout<<"Thanks for playing please come back";
 }

int main()
{


    Game obj ;

    obj.run();




    return 0;
}

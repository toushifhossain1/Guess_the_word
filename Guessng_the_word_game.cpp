#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;


int main(){




    string words[15] = { "award","await","attend","bubble", "coding", "class", "decode", "encryption", "file", "husstle",
"spring", "mango", "night","orange", "reward"};

//Print the words
cout<<"The available words are:" <<endl;
for(int i=0; i<15;i++)
{
  cout << words[i] <<" ";
}
cout <<endl;

  int random;
  srand(time(0));
  random=(rand()%15);
  //cout << random;
    string selectName=words[random];
    char guessName[selectName.size()];

    for(int i=0;i<selectName.size();i++){
        guessName[i]='_';
    }

    int chances=selectName.size()+2;
    cout <<"\nYou have " <<chances << " chances " <<endl;
    //cout <<selectName;
    char guess;

     while(chances--){ //for(int i=0;i<chances; i++)

      for(int i=0;i<selectName.size();i++){
          cout<< guessName[i]<<" ";
      }
        cout<<"\nguess a letter: ";
        cin>>guess;





        for (int i = 0; i < selectName.size(); i++)
  {
      //cout<< selectName[i];
      if(selectName[i] ==guess)
      {
        guessName[i]=guess;
        //cout <<guessName[i];
      }
  }

        //cout << guessName;

        if(guessName==selectName){
            cout << endl <<selectName << "\nCorrect guess\n";
            return 0;
        }

    }
    cout<<"\nYou failed" << " \nThe Correct word is: " << selectName;


}

#include <iostream>
using namespace std;
class Music_player 
{
private:
    bool mOn;
    bool isOn;
    int volume;

public:
    Music_player() 
    {
        mOn = false;
        isOn = false;
        volume = 0;
    }

    void TurnOn()
    {
       
        isOn = true;
        cout << "Music player is now on." << endl;
    }
    void musicOn()
    {
        mOn = true;
        cout << "Music is playing   " << endl;
    }
    void musicOff()
    {
        mOn = false;
        cout << "Music is not playing " << endl;
    }

    void TurnOff()
    {
        isOn = false;
        cout << "Music player is now off." << endl;
    }

    void SetVolume(int newvolume) 
    {
        this->volume = newvolume;
        if (volume > 100)
        {
            isOn = false;
            cout << "Unavailable volume" << isOn << endl;
        }
        else
            cout << "Volume set to " << volume << endl;
    }
    int GetVolume()
    {
        return volume;
    }

};
int main()
{
    Music_player mp;
    int w = 1, nextMove;
    int vol;
    while (w == 1)
    {
        cout << "Press <1> to switch on the player or <2> to switch off it ! " << endl;
        cin >> nextMove;
        if (nextMove == 1)
        {
            mp.TurnOn();                      
                mp.musicOn();
                cout << "Enter volume :";
                cin >> vol;
                mp.SetVolume(vol);
                cout << "Volume is : " << mp.GetVolume() << endl;         
                mp.musicOff();
                mp.TurnOff();
                break;
            
        }
        else if (nextMove == 2)
        {
            mp.TurnOff();
            break;
        }
    }


    return 0;
}
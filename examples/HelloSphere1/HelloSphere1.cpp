#include <QHHeadersWin32.h>

//WinMain creates a Microsoft Windows application. Its parameters
//specify instance, previous instance, command line parameters, and
//window show state, respectively.

int WINAPI WinMain(HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow)
{

    QHWin32* DisplayObject = new QHWin32; //Create a display window
    DeviceSpace* Omni = new DeviceSpace; //Open the default Touch
    DisplayObject->tell(Omni); //Tell Display that omni exists
    Sphere* SimpleSphere = new Sphere; //Create a default sphere
    DisplayObject->tell(SimpleSphere); //Tell Display the sphere exists
    Cursor* OmniCursor = new Cursor; //Create a default cursor
    DisplayObject->tell(OmniCursor); //Tell Display that a cursor exists
    qhStart(); //Set everything in motion
}
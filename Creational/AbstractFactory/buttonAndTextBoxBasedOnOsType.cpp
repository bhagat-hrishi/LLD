#include <iostream>
using namespace std;

class IButton//Interface
{
    public:
    virtual void press()=0;
};

class MacButton : public IButton
{
    public:
    void press()
    {
        cout<<"Mac button Pressed"<<endl;
    }
};

class WinButton : public IButton
{
    public:
    void press()
    {
        cout<<"Win button Pressed"<<endl;
    }
};

class ITextBox // interface
{
    public:
        virtual void showText()=0;
};

class MacTextBox : public ITextBox
{
    public:
        void showText()
        {
            cout<<"Mac TextBox"<<endl;
        }
};

class WinTextBox : public ITextBox
{
    public:
        void showText()
        {
            cout<<"Win TextBox"<<endl;
        }
};

class IFactory // interface
{
    public:
    virtual IButton* createButton()=0;
    virtual ITextBox* createTextBox()=0;
};

class MacFactory : public IFactory
{
    public:
        IButton* createButton(){
            return new MacButton();
        }
        ITextBox* createTextBox(){
            return new MacTextBox();
        }
};

class WinFactory : public IFactory
{
    public:
        IButton* createButton(){
            return new WinButton();
        }
        ITextBox* createTextBox(){
            return new WinTextBox();
        }
};

class GUIAbstractFactory
{
    public:
    static IFactory* createFactory(const std::string& osType)
    {
        if(osType == "mac") 
            return new MacFactory();
        else if(osType == "win")
            return new WinFactory();
        return nullptr;
    }
};

int main(){
    cout<<"Enter your machine os (win or mac)"<<endl;
    string osType;
    cin>>osType;

    IFactory* fact=GUIAbstractFactory::createFactory(osType);
    
    if(fact==nullptr)
        cout<<"Invalid Input";
    else 
    {
        IButton* button  = fact->createButton();
        button->press();

        ITextBox* textBox = fact->createTextBox();
        textBox->showText();
    }
    return 0;
}
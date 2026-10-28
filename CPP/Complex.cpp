class complex
{
    private:
        double real;
        double imag;
    
    public:
        complex(double r = 0, double i = 0) : real(r), imag(i){}
    
    ~complex() {}

    void display() const{
        cout << real;
        if(imag>=0)
        cout << " + "<< imag << "i"<<endl;
        else
        cout << " - "<< -imag <<"i"<<endl;
    }

};
class String
{
private:
    char* m_ptr; // buffer
    int m_len;   // buffer length

public:
    // c'tors and d'tor
    String ();
    String (char*);
    String (const String&);
    ~String ();

    // public methods
    int Length () const;
    bool Insert (const String&, int);
    bool Remove (int, int);
    void Append (const String&);
    String SubString (int, int) const;
    int Find (const String&) const;
    void ToUpper ();
    void ToLower ();
    String Left (int) const;
    String Right (int) const;

    // assignment operator
    String& operator= (const String&);

    // subscript operator
    char& operator[] (int index);

    // string concatenation
    friend String operator+ (const String&, const String&);
    friend const String& operator+= (String&, const String&);

    // comparison operators
    friend bool operator== (const String&, const String&);
    friend bool operator!= (const String&, const String&);

    // input/output
    friend ostream& operator<< (ostream&, const String&);
    friend istream& operator>> (istream&, String&);
};

class Example {
public:
   Example(double value);

   void setValue(double value);
   double getValue();

private:
   double* ptrValue;
};
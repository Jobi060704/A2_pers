class ImmutableMatrix : public Matrix {
public:
   ImmutableMatrix();
   ImmutableMatrix(ImmutableMatrix& other);
   virtual ~ImmutableMatrix();
   
   // Once called, this matrix may no longer be modified
   virtual void makeImmutable();
   
   //virtual double get(int row, int col) const;
   //virtual void set(int row, int col, double value);
   //virtual void add(const Matrix& other);
   //virtual bool operator==(const Matrix& other) const;
};

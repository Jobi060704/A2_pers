class Matrix {
public:
   Matrix();
   Matrix(Matrix& other);
   virtual ~Matrix();
   
   // Getter
   virtual double get(int row, int col) const;
   
   // Setter
   virtual void set(int row, int col, double value);
   
   // Add another matrix to this one - modifying this matrix
   virtual void add(const Matrix& other);
   
   // Compare this matrix against another for equality
   virtual bool operator==(const Matrix& other) const;

private:
   double mat[10][10];
};

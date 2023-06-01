template<typename T>
class Matrix {
public:
   Matrix();
   Matrix(Matrix<T>& other);
   virtual ~Matrix();
   
   // Getter
   virtual T get(int row, int col) const;
   
   // Setter
   virtual void set(int row, int col, T value);
   
   // Add another matrix to this one - modifying this matrix
   virtual void add(const Matrix<T>& other);
   
   // Compare this matrix against another for equality
   virtual bool operator==(const Matrix<T>& other) const;

private:
   T mat[10][10];
};

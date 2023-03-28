class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
         if (pow(b, 2) < (4 * a * c))
        {
            vector<int> imaginary;
            imaginary.push_back(-1);
            return imaginary;
        }
        vector<int> roots;
        double D = pow(b, 2) - (4 * a * c);
        double sqrt_d = sqrt(D);
        double root1 = ((-b) + sqrt_d) / (2 * a);
        double root2 = ((-b) - sqrt_d) / (2 * a);
        if (root1 > root2)
        {
            roots.push_back(floor(root1));
            roots.push_back(floor(root2));
        }
        else
        {
            roots.push_back(floor(root2));
            roots.push_back(floor(root1));
        }
        return roots;
    }
};
#ifndef __BlackScholesForwardMethod__
#define __BlackScholesForwardMethod__
#include <vector>
class BlackScholesForwardMethod {
public:
  BlackScholesForwardMethod(double expiration, double maxPrice, double strike, double intRate);
  BlackScholesForwardMethod(const BlackScholesForwardMethod &p);
  ~BlackScholesForwardMethod();
  
  BlackScholesForwardMethod &operator=(const BlackScholesForwardMethod &p);
  std::vector<double> solve(double volatility, int nx, int timeSteps);

private:
  double m_expiration;
  double m_maxPrice;
  double m_strike;
  double m_intRate;
};

#endif /* defined(__BlackScholesForwardMethod__) */


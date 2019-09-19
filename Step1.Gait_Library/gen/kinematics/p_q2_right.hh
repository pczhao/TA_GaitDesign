/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:16:46 GMT-04:00
 */

#ifndef P_Q2_RIGHT_HH
#define P_Q2_RIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void p_q2_right_raw(double *p_output1, const double *var1);

  inline void p_q2_right(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    p_q2_right_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // P_Q2_RIGHT_HH

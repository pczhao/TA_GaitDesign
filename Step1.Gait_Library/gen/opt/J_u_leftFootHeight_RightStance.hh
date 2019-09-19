/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:50 GMT-04:00
 */

#ifndef J_U_LEFTFOOTHEIGHT_RIGHTSTANCE_HH
#define J_U_LEFTFOOTHEIGHT_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

  void J_u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1);

  inline void J_u_leftFootHeight_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_u_leftFootHeight_RightStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_U_LEFTFOOTHEIGHT_RIGHTSTANCE_HH

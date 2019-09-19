/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:11 GMT-04:00
 */

#ifndef U_MAP_FIVE_LINK_WALKER_HH
#define U_MAP_FIVE_LINK_WALKER_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void u_map_five_link_walker_raw(double *p_output1, const double *var1);

  inline void u_map_five_link_walker(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 7, 4);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    u_map_five_link_walker_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // U_MAP_FIVE_LINK_WALKER_HH

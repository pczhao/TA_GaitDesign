/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:19 GMT-04:00
 */

#ifndef JS_CE2_VEC3_FIVE_LINK_WALKER_HH
#define JS_CE2_VEC3_FIVE_LINK_WALKER_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

  void Js_Ce2_vec3_five_link_walker_raw(double *p_output1, const double *var1);

  inline void Js_Ce2_vec3_five_link_walker(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 56, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_Ce2_vec3_five_link_walker_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_CE2_VEC3_FIVE_LINK_WALKER_HH

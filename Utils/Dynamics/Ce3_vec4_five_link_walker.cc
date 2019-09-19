/*
 * Automatically Generated from Mathematica.
 * Thu 1 Nov 2018 20:47:03 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t5046;
  double t5090;
  double t3524;
  double t4929;
  double t3220;
  double t4921;
  double t5049;
  double t5052;
  double t5065;
  double t5079;
  double t5081;
  double t8636;
  double t12273;
  double t12275;
  double t12425;
  double t12468;
  double t12470;
  double t12471;
  double t12475;
  double t12476;
  double t12477;
  double t5094;
  double t5176;
  double t5217;
  double t5224;
  double t5226;
  double t8137;
  double t12490;
  double t12522;
  double t12527;
  double t12530;
  double t12542;
  double t12478;
  double t12493;
  double t12547;
  double t3526;
  double t5007;
  double t5016;
  double t5027;
  double t12286;
  double t12587;
  double t12588;
  double t12589;
  double t12621;
  double t12622;
  double t12623;
  double t12613;
  double t12614;
  double t12615;
  double t12617;
  double t12618;
  double t12619;
  double t12665;
  double t12669;
  double t12676;
  double t12678;
  double t12679;
  double t12680;
  double t8270;
  double t12320;
  double t12586;
  double t12590;
  double t12591;
  double t12592;
  double t12602;
  double t12603;
  double t12604;
  double t12605;
  double t12606;
  double t12607;
  double t12620;
  double t12624;
  double t12714;
  double t12715;
  double t12629;
  double t12717;
  double t12718;
  double t12643;
  t5046 = Cos(var1[4]);
  t5090 = Sin(var1[4]);
  t3524 = Sin(var1[2]);
  t4929 = Sin(var1[3]);
  t3220 = Cos(var1[3]);
  t4921 = Cos(var1[2]);
  t5049 = -1.*t5046;
  t5052 = 1. + t5049;
  t5065 = 0.4*t5052;
  t5079 = 0.64*t5046;
  t5081 = t5065 + t5079;
  t8636 = t3220*t5046;
  t12273 = -1.*t4929*t5090;
  t12275 = t8636 + t12273;
  t12425 = t5081*t5046;
  t12468 = Power(t5090,2);
  t12470 = 0.24*t12468;
  t12471 = t12425 + t12470;
  t12475 = -1.*t5046*t4929;
  t12476 = -1.*t3220*t5090;
  t12477 = t12475 + t12476;
  t5094 = t5081*t5090;
  t5176 = -0.24*t5046*t5090;
  t5217 = t5094 + t5176;
  t5224 = t5046*t4929;
  t5226 = t3220*t5090;
  t8137 = t5224 + t5226;
  t12490 = -1.*t3524*t12275;
  t12522 = -1.*t4921*t3220;
  t12527 = t3524*t4929;
  t12530 = t12522 + t12527;
  t12542 = -0.748*t12530;
  t12478 = t4921*t12477;
  t12493 = t12478 + t12490;
  t12547 = -1.*t3524*t12477;
  t3526 = -1.*t3220*t3524;
  t5007 = -1.*t4921*t4929;
  t5016 = t3526 + t5007;
  t5027 = -0.748*t5016;
  t12286 = t4921*t12275;
  t12587 = -1.*t3220*t5046;
  t12588 = t4929*t5090;
  t12589 = t12587 + t12588;
  t12621 = t3220*t5081;
  t12622 = -0.24*t4929*t5090;
  t12623 = t12621 + t12622;
  t12613 = -1.*t5081*t4929;
  t12614 = -0.24*t3220*t5090;
  t12615 = t12613 + t12614;
  t12617 = t5081*t4929;
  t12618 = 0.24*t3220*t5090;
  t12619 = t12617 + t12618;
  t12665 = -1.*t5081*t5090;
  t12669 = 0.24*t5046*t5090;
  t12676 = t12665 + t12669;
  t12678 = Power(t5046,2);
  t12679 = -0.24*t12678;
  t12680 = t12425 + t12679;
  t8270 = -1.*t3524*t8137;
  t12320 = t8270 + t12286;
  t12586 = -3.2*t5217*t12493;
  t12590 = t4921*t12589;
  t12591 = t12547 + t12590;
  t12592 = -3.2*t12471*t12591;
  t12602 = t3524*t12477;
  t12603 = t12602 + t12286;
  t12604 = -3.2*t5217*t12603;
  t12605 = t3524*t12589;
  t12606 = t12478 + t12605;
  t12607 = -3.2*t12471*t12606;
  t12620 = t12619*t12275;
  t12624 = t12477*t12623;
  t12714 = -0.24*t5046*t4929;
  t12715 = t12714 + t12614;
  t12629 = -1.*t12477*t12619;
  t12717 = 0.24*t3220*t5046;
  t12718 = t12717 + t12622;
  t12643 = -1.*t12623*t12589;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(-3.2*t12471*t12493 + t5027 - 3.2*t12320*t5217)*var2[0] - 0.5*(t12542 - 3.2*t12471*(t12547 - 1.*t12275*t4921) - 3.2*t5217*(t12490 - 1.*t4921*t8137))*var2[1])*var2[3];
  p_output1[3]=(-0.5*(t12604 + t12607 + t5027)*var2[0] - 0.5*(t12542 + t12586 + t12592)*var2[1] - 0.5*(-3.2*(-1.*t12477*t12615 - 1.*t12275*t12623 + t12629 + t12643)*t5217 - 3.2*t12471*(t12275*t12615 + t12620 + t12624 + t12623*t8137))*var2[2])*var2[3];
  p_output1[4]=var2[3]*(-0.5*(t12604 + t12607 - 3.2*t12603*t12676 - 3.2*t12680*(t12275*t3524 + t4921*t8137))*var2[0] - 0.5*(t12586 + t12592 - 3.2*t12493*t12676 - 3.2*t12320*t12680)*var2[1] - 0.5*(-3.2*(-1.*t12275*t12619 - 1.*t12477*t12623)*t12680 - 3.2*(t12629 + t12643 - 1.*t12477*t12715 - 1.*t12275*t12718)*t5217 - 3.2*t12676*(t12275*t12623 + t12619*t8137) - 3.2*t12471*(t12620 + t12624 + t12275*t12715 + t12718*t8137))*var2[2] - 0.5*(-6.4*t12471*t12676 - 6.4*t12680*t5217)*var2[3] + 0.384*t12676*var2[4]);
  p_output1[5]=0;
  p_output1[6]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce3_vec4_five_link_walker.hh"

namespace SymFunction
{

void Ce3_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

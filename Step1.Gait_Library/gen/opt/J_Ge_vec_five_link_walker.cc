/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:30 GMT-04:00
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
  double t8400;
  double t8816;
  double t8828;
  double t9279;
  double t9280;
  double t9427;
  double t10158;
  double t11430;
  double t12473;
  double t12484;
  double t12485;
  double t15504;
  double t15546;
  double t15547;
  double t15630;
  double t15631;
  double t15635;
  double t15639;
  double t15648;
  double t15649;
  double t15650;
  double t15654;
  double t11423;
  double t12058;
  double t12432;
  double t12436;
  double t15518;
  double t15532;
  double t15537;
  double t15539;
  double t15541;
  double t15543;
  double t15545;
  double t15679;
  double t15680;
  double t15681;
  double t15636;
  double t15642;
  double t15646;
  double t15647;
  double t15655;
  double t15656;
  double t15660;
  double t15667;
  double t15673;
  double t15674;
  double t15675;
  double t15690;
  double t15691;
  double t15692;
  double t15677;
  double t15678;
  double t15682;
  double t15683;
  double t15684;
  double t15685;
  double t15686;
  double t15687;
  double t15699;
  double t15700;
  double t15701;
  double t15688;
  double t15689;
  double t15693;
  double t15694;
  double t15695;
  double t15696;
  double t15697;
  double t15698;
  double t15708;
  double t15709;
  double t15710;
  t8400 = Cos(var1[2]);
  t8816 = Cos(var1[3]);
  t8828 = -1.*t8400*t8816;
  t9279 = Sin(var1[2]);
  t9280 = Sin(var1[3]);
  t9427 = t9279*t9280;
  t10158 = t8828 + t9427;
  t11430 = Cos(var1[4]);
  t12473 = t8816*t9279;
  t12484 = t8400*t9280;
  t12485 = t12473 + t12484;
  t15504 = Sin(var1[4]);
  t15546 = Cos(var1[5]);
  t15547 = -1.*t8400*t15546;
  t15630 = Sin(var1[5]);
  t15631 = t9279*t15630;
  t15635 = t15547 + t15631;
  t15639 = Cos(var1[6]);
  t15648 = t15546*t9279;
  t15649 = t8400*t15630;
  t15650 = t15648 + t15649;
  t15654 = Sin(var1[6]);
  t11423 = -7.33788*t10158;
  t12058 = -1.*t11430;
  t12432 = 1. + t12058;
  t12436 = 0.4*t12432*t10158;
  t15518 = -0.4*t12485*t15504;
  t15532 = t11430*t10158;
  t15537 = t12485*t15504;
  t15539 = t15532 + t15537;
  t15541 = 0.64*t15539;
  t15543 = t12436 + t15518 + t15541;
  t15545 = -31.392000000000003*t15543;
  t15679 = -1.*t8816*t9279;
  t15680 = -1.*t8400*t9280;
  t15681 = t15679 + t15680;
  t15636 = -7.33788*t15635;
  t15642 = -1.*t15639;
  t15646 = 1. + t15642;
  t15647 = 0.4*t15646*t15635;
  t15655 = -0.4*t15650*t15654;
  t15656 = t15639*t15635;
  t15660 = t15650*t15654;
  t15667 = t15656 + t15660;
  t15673 = 0.64*t15667;
  t15674 = t15647 + t15655 + t15673;
  t15675 = -31.392000000000003*t15674;
  t15690 = -1.*t15546*t9279;
  t15691 = -1.*t8400*t15630;
  t15692 = t15690 + t15691;
  t15677 = t11423 + t15545;
  t15678 = -0.4*t11430*t10158;
  t15682 = 0.4*t15681*t15504;
  t15683 = -1.*t15681*t15504;
  t15684 = t15532 + t15683;
  t15685 = 0.64*t15684;
  t15686 = t15678 + t15682 + t15685;
  t15687 = -31.392000000000003*t15686;
  t15699 = t8400*t8816;
  t15700 = -1.*t9279*t9280;
  t15701 = t15699 + t15700;
  t15688 = t15636 + t15675;
  t15689 = -0.4*t15639*t15635;
  t15693 = 0.4*t15692*t15654;
  t15694 = -1.*t15692*t15654;
  t15695 = t15656 + t15694;
  t15696 = 0.64*t15695;
  t15697 = t15689 + t15693 + t15696;
  t15698 = -31.392000000000003*t15697;
  t15708 = t8400*t15546;
  t15709 = -1.*t9279*t15630;
  t15710 = t15708 + t15709;
  p_output1[0]=t11423 + t15545 + t15636 + t15675 + 28.252799999999997*t8400;
  p_output1[1]=t15677;
  p_output1[2]=t15687;
  p_output1[3]=t15688;
  p_output1[4]=t15698;
  p_output1[5]=t15677;
  p_output1[6]=t15677;
  p_output1[7]=t15687;
  p_output1[8]=t15687;
  p_output1[9]=t15687;
  p_output1[10]=-31.392000000000003*(t15682 + 0.4*t11430*t15701 + 0.64*(t15683 - 1.*t11430*t15701));
  p_output1[11]=t15688;
  p_output1[12]=t15688;
  p_output1[13]=t15698;
  p_output1[14]=t15698;
  p_output1[15]=t15698;
  p_output1[16]=-31.392000000000003*(t15693 + 0.4*t15639*t15710 + 0.64*(t15694 - 1.*t15639*t15710));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ge_vec_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

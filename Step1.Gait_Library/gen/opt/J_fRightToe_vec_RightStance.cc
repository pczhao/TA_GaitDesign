/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:32 GMT-04:00
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
  double t11423;
  double t12484;
  double t10520;
  double t15532;
  double t6675;
  double t12473;
  double t15537;
  double t15543;
  double t15631;
  double t15636;
  double t15648;
  double t15649;
  double t8769;
  double t9427;
  double t15687;
  double t15688;
  double t15697;
  double t15545;
  double t15656;
  double t15660;
  double t15674;
  double t15675;
  double t15676;
  double t15677;
  double t15686;
  double t15698;
  double t15699;
  double t15702;
  double t15703;
  double t15704;
  double t15705;
  double t15706;
  double t15707;
  double t15708;
  double t15719;
  double t15720;
  double t15721;
  double t15711;
  double t15712;
  double t15713;
  double t15714;
  double t15715;
  double t15716;
  double t15717;
  double t15718;
  double t15722;
  double t15723;
  double t15724;
  double t15725;
  double t15726;
  double t15727;
  double t15728;
  double t15729;
  double t15730;
  double t15731;
  double t15732;
  double t15733;
  double t15734;
  double t15735;
  t11423 = Cos(var1[3]);
  t12484 = Sin(var1[2]);
  t10520 = Cos(var1[2]);
  t15532 = Sin(var1[3]);
  t6675 = Cos(var1[4]);
  t12473 = -1.*t10520*t11423;
  t15537 = t12484*t15532;
  t15543 = t12473 + t15537;
  t15631 = t11423*t12484;
  t15636 = t10520*t15532;
  t15648 = t15631 + t15636;
  t15649 = Sin(var1[4]);
  t8769 = -1.*t6675;
  t9427 = 1. + t8769;
  t15687 = -1.*t11423*t12484;
  t15688 = -1.*t10520*t15532;
  t15697 = t15687 + t15688;
  t15545 = 0.4*t9427*t15543;
  t15656 = -0.4*t15648*t15649;
  t15660 = t6675*t15543;
  t15674 = t15648*t15649;
  t15675 = t15660 + t15674;
  t15676 = 0.8*t15675;
  t15677 = t15545 + t15656 + t15676;
  t15686 = var2[2]*t15677;
  t15698 = 0.4*t9427*t15697;
  t15699 = -0.4*t15543*t15649;
  t15702 = t6675*t15697;
  t15703 = t15543*t15649;
  t15704 = t15702 + t15703;
  t15705 = 0.8*t15704;
  t15706 = t15698 + t15699 + t15705;
  t15707 = var2[0]*t15706;
  t15708 = t15686 + t15707;
  t15719 = t10520*t11423;
  t15720 = -1.*t12484*t15532;
  t15721 = t15719 + t15720;
  t15711 = -0.4*t6675*t15543;
  t15712 = 0.4*t15697*t15649;
  t15713 = -1.*t15697*t15649;
  t15714 = t15660 + t15713;
  t15715 = 0.8*t15714;
  t15716 = t15711 + t15712 + t15715;
  t15717 = var2[2]*t15716;
  t15718 = -0.4*t6675*t15697;
  t15722 = 0.4*t15721*t15649;
  t15723 = -1.*t15721*t15649;
  t15724 = t15702 + t15723;
  t15725 = 0.8*t15724;
  t15726 = t15718 + t15722 + t15725;
  t15727 = var2[0]*t15726;
  t15728 = t15717 + t15727;
  t15729 = 0.4*t9427*t15721;
  t15730 = -0.4*t15697*t15649;
  t15731 = t6675*t15721;
  t15732 = t15697*t15649;
  t15733 = t15731 + t15732;
  t15734 = 0.8*t15733;
  t15735 = t15729 + t15730 + t15734;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t15708;
  p_output1[3]=t15708;
  p_output1[4]=t15728;
  p_output1[5]=t15735;
  p_output1[6]=t15706;
  p_output1[7]=t15708;
  p_output1[8]=t15708;
  p_output1[9]=t15728;
  p_output1[10]=t15735;
  p_output1[11]=t15706;
  p_output1[12]=t15728;
  p_output1[13]=t15728;
  p_output1[14]=(t15722 + 0.4*t15648*t6675 + 0.8*(t15723 - 1.*t15648*t6675))*var2[0] + (t15712 + 0.4*t15721*t6675 + 0.8*(t15713 - 1.*t15721*t6675))*var2[2];
  p_output1[15]=0.4*t15648*t15649 + 0.8*(-1.*t15648*t15649 + t15731) - 0.4*t15721*t6675;
  p_output1[16]=t15726;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
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

#include "J_fRightToe_vec_RightStance.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE

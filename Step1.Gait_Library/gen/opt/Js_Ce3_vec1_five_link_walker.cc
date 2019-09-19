/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:24 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double _NotUsed;
  NULL;
  p_output1[0]=3;
  p_output1[1]=3;
  p_output1[2]=3;
  p_output1[3]=3;
  p_output1[4]=3;
  p_output1[5]=3;
  p_output1[6]=3;
  p_output1[7]=3;
  p_output1[8]=3;
  p_output1[9]=3;
  p_output1[10]=3;
  p_output1[11]=3;
  p_output1[12]=4;
  p_output1[13]=4;
  p_output1[14]=4;
  p_output1[15]=4;
  p_output1[16]=4;
  p_output1[17]=4;
  p_output1[18]=4;
  p_output1[19]=4;
  p_output1[20]=5;
  p_output1[21]=5;
  p_output1[22]=5;
  p_output1[23]=5;
  p_output1[24]=5;
  p_output1[25]=5;
  p_output1[26]=5;
  p_output1[27]=5;
  p_output1[28]=6;
  p_output1[29]=6;
  p_output1[30]=6;
  p_output1[31]=6;
  p_output1[32]=6;
  p_output1[33]=6;
  p_output1[34]=6;
  p_output1[35]=6;
  p_output1[36]=7;
  p_output1[37]=7;
  p_output1[38]=7;
  p_output1[39]=7;
  p_output1[40]=7;
  p_output1[41]=7;
  p_output1[42]=7;
  p_output1[43]=7;
  p_output1[44]=3;
  p_output1[45]=4;
  p_output1[46]=5;
  p_output1[47]=6;
  p_output1[48]=7;
  p_output1[49]=8;
  p_output1[50]=9;
  p_output1[51]=10;
  p_output1[52]=11;
  p_output1[53]=12;
  p_output1[54]=13;
  p_output1[55]=14;
  p_output1[56]=3;
  p_output1[57]=4;
  p_output1[58]=5;
  p_output1[59]=8;
  p_output1[60]=9;
  p_output1[61]=10;
  p_output1[62]=11;
  p_output1[63]=12;
  p_output1[64]=3;
  p_output1[65]=4;
  p_output1[66]=5;
  p_output1[67]=8;
  p_output1[68]=9;
  p_output1[69]=10;
  p_output1[70]=11;
  p_output1[71]=12;
  p_output1[72]=3;
  p_output1[73]=6;
  p_output1[74]=7;
  p_output1[75]=8;
  p_output1[76]=9;
  p_output1[77]=10;
  p_output1[78]=13;
  p_output1[79]=14;
  p_output1[80]=3;
  p_output1[81]=6;
  p_output1[82]=7;
  p_output1[83]=8;
  p_output1[84]=9;
  p_output1[85]=10;
  p_output1[86]=13;
  p_output1[87]=14;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ce3_vec1_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Js_Ce3_vec1_five_link_walker_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

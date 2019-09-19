/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:10 GMT-04:00
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
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=1;
  p_output1[6]=1;
  p_output1[7]=1;
  p_output1[8]=1;
  p_output1[9]=1;
  p_output1[10]=1;
  p_output1[11]=1;
  p_output1[12]=2;
  p_output1[13]=2;
  p_output1[14]=2;
  p_output1[15]=2;
  p_output1[16]=2;
  p_output1[17]=2;
  p_output1[18]=2;
  p_output1[19]=2;
  p_output1[20]=2;
  p_output1[21]=2;
  p_output1[22]=2;
  p_output1[23]=2;
  p_output1[24]=3;
  p_output1[25]=3;
  p_output1[26]=3;
  p_output1[27]=3;
  p_output1[28]=3;
  p_output1[29]=3;
  p_output1[30]=3;
  p_output1[31]=3;
  p_output1[32]=3;
  p_output1[33]=3;
  p_output1[34]=3;
  p_output1[35]=3;
  p_output1[36]=4;
  p_output1[37]=4;
  p_output1[38]=4;
  p_output1[39]=4;
  p_output1[40]=4;
  p_output1[41]=4;
  p_output1[42]=4;
  p_output1[43]=4;
  p_output1[44]=5;
  p_output1[45]=5;
  p_output1[46]=5;
  p_output1[47]=5;
  p_output1[48]=5;
  p_output1[49]=5;
  p_output1[50]=5;
  p_output1[51]=5;
  p_output1[52]=6;
  p_output1[53]=6;
  p_output1[54]=6;
  p_output1[55]=6;
  p_output1[56]=6;
  p_output1[57]=6;
  p_output1[58]=6;
  p_output1[59]=6;
  p_output1[60]=7;
  p_output1[61]=7;
  p_output1[62]=7;
  p_output1[63]=7;
  p_output1[64]=7;
  p_output1[65]=7;
  p_output1[66]=7;
  p_output1[67]=7;
  p_output1[68]=3;
  p_output1[69]=4;
  p_output1[70]=5;
  p_output1[71]=6;
  p_output1[72]=7;
  p_output1[73]=8;
  p_output1[74]=9;
  p_output1[75]=10;
  p_output1[76]=11;
  p_output1[77]=12;
  p_output1[78]=13;
  p_output1[79]=14;
  p_output1[80]=3;
  p_output1[81]=4;
  p_output1[82]=5;
  p_output1[83]=6;
  p_output1[84]=7;
  p_output1[85]=8;
  p_output1[86]=9;
  p_output1[87]=10;
  p_output1[88]=11;
  p_output1[89]=12;
  p_output1[90]=13;
  p_output1[91]=14;
  p_output1[92]=3;
  p_output1[93]=4;
  p_output1[94]=5;
  p_output1[95]=6;
  p_output1[96]=7;
  p_output1[97]=8;
  p_output1[98]=9;
  p_output1[99]=10;
  p_output1[100]=11;
  p_output1[101]=12;
  p_output1[102]=13;
  p_output1[103]=14;
  p_output1[104]=3;
  p_output1[105]=4;
  p_output1[106]=5;
  p_output1[107]=8;
  p_output1[108]=9;
  p_output1[109]=10;
  p_output1[110]=11;
  p_output1[111]=12;
  p_output1[112]=3;
  p_output1[113]=4;
  p_output1[114]=5;
  p_output1[115]=8;
  p_output1[116]=9;
  p_output1[117]=10;
  p_output1[118]=11;
  p_output1[119]=12;
  p_output1[120]=3;
  p_output1[121]=6;
  p_output1[122]=7;
  p_output1[123]=8;
  p_output1[124]=9;
  p_output1[125]=10;
  p_output1[126]=13;
  p_output1[127]=14;
  p_output1[128]=3;
  p_output1[129]=6;
  p_output1[130]=7;
  p_output1[131]=8;
  p_output1[132]=9;
  p_output1[133]=10;
  p_output1[134]=13;
  p_output1[135]=14;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 68, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_MmatDx_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Js_MmatDx_five_link_walker_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

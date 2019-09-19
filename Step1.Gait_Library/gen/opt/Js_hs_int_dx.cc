/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:16:57 GMT-04:00
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
  p_output1[7]=2;
  p_output1[8]=2;
  p_output1[9]=2;
  p_output1[10]=2;
  p_output1[11]=2;
  p_output1[12]=2;
  p_output1[13]=2;
  p_output1[14]=3;
  p_output1[15]=3;
  p_output1[16]=3;
  p_output1[17]=3;
  p_output1[18]=3;
  p_output1[19]=3;
  p_output1[20]=3;
  p_output1[21]=4;
  p_output1[22]=4;
  p_output1[23]=4;
  p_output1[24]=4;
  p_output1[25]=4;
  p_output1[26]=4;
  p_output1[27]=4;
  p_output1[28]=5;
  p_output1[29]=5;
  p_output1[30]=5;
  p_output1[31]=5;
  p_output1[32]=5;
  p_output1[33]=5;
  p_output1[34]=5;
  p_output1[35]=6;
  p_output1[36]=6;
  p_output1[37]=6;
  p_output1[38]=6;
  p_output1[39]=6;
  p_output1[40]=6;
  p_output1[41]=6;
  p_output1[42]=7;
  p_output1[43]=7;
  p_output1[44]=7;
  p_output1[45]=7;
  p_output1[46]=7;
  p_output1[47]=7;
  p_output1[48]=7;
  p_output1[49]=8;
  p_output1[50]=8;
  p_output1[51]=8;
  p_output1[52]=8;
  p_output1[53]=8;
  p_output1[54]=8;
  p_output1[55]=8;
  p_output1[56]=9;
  p_output1[57]=9;
  p_output1[58]=9;
  p_output1[59]=9;
  p_output1[60]=9;
  p_output1[61]=9;
  p_output1[62]=9;
  p_output1[63]=10;
  p_output1[64]=10;
  p_output1[65]=10;
  p_output1[66]=10;
  p_output1[67]=10;
  p_output1[68]=10;
  p_output1[69]=10;
  p_output1[70]=11;
  p_output1[71]=11;
  p_output1[72]=11;
  p_output1[73]=11;
  p_output1[74]=11;
  p_output1[75]=11;
  p_output1[76]=11;
  p_output1[77]=12;
  p_output1[78]=12;
  p_output1[79]=12;
  p_output1[80]=12;
  p_output1[81]=12;
  p_output1[82]=12;
  p_output1[83]=12;
  p_output1[84]=13;
  p_output1[85]=13;
  p_output1[86]=13;
  p_output1[87]=13;
  p_output1[88]=13;
  p_output1[89]=13;
  p_output1[90]=13;
  p_output1[91]=14;
  p_output1[92]=14;
  p_output1[93]=14;
  p_output1[94]=14;
  p_output1[95]=14;
  p_output1[96]=14;
  p_output1[97]=14;
  p_output1[98]=1;
  p_output1[99]=2;
  p_output1[100]=3;
  p_output1[101]=10;
  p_output1[102]=24;
  p_output1[103]=31;
  p_output1[104]=38;
  p_output1[105]=1;
  p_output1[106]=2;
  p_output1[107]=4;
  p_output1[108]=11;
  p_output1[109]=25;
  p_output1[110]=32;
  p_output1[111]=39;
  p_output1[112]=1;
  p_output1[113]=2;
  p_output1[114]=5;
  p_output1[115]=12;
  p_output1[116]=26;
  p_output1[117]=33;
  p_output1[118]=40;
  p_output1[119]=1;
  p_output1[120]=2;
  p_output1[121]=6;
  p_output1[122]=13;
  p_output1[123]=27;
  p_output1[124]=34;
  p_output1[125]=41;
  p_output1[126]=1;
  p_output1[127]=2;
  p_output1[128]=7;
  p_output1[129]=14;
  p_output1[130]=28;
  p_output1[131]=35;
  p_output1[132]=42;
  p_output1[133]=1;
  p_output1[134]=2;
  p_output1[135]=8;
  p_output1[136]=15;
  p_output1[137]=29;
  p_output1[138]=36;
  p_output1[139]=43;
  p_output1[140]=1;
  p_output1[141]=2;
  p_output1[142]=9;
  p_output1[143]=16;
  p_output1[144]=30;
  p_output1[145]=37;
  p_output1[146]=44;
  p_output1[147]=1;
  p_output1[148]=2;
  p_output1[149]=3;
  p_output1[150]=10;
  p_output1[151]=17;
  p_output1[152]=31;
  p_output1[153]=38;
  p_output1[154]=1;
  p_output1[155]=2;
  p_output1[156]=4;
  p_output1[157]=11;
  p_output1[158]=18;
  p_output1[159]=32;
  p_output1[160]=39;
  p_output1[161]=1;
  p_output1[162]=2;
  p_output1[163]=5;
  p_output1[164]=12;
  p_output1[165]=19;
  p_output1[166]=33;
  p_output1[167]=40;
  p_output1[168]=1;
  p_output1[169]=2;
  p_output1[170]=6;
  p_output1[171]=13;
  p_output1[172]=20;
  p_output1[173]=34;
  p_output1[174]=41;
  p_output1[175]=1;
  p_output1[176]=2;
  p_output1[177]=7;
  p_output1[178]=14;
  p_output1[179]=21;
  p_output1[180]=35;
  p_output1[181]=42;
  p_output1[182]=1;
  p_output1[183]=2;
  p_output1[184]=8;
  p_output1[185]=15;
  p_output1[186]=22;
  p_output1[187]=36;
  p_output1[188]=43;
  p_output1[189]=1;
  p_output1[190]=2;
  p_output1[191]=9;
  p_output1[192]=16;
  p_output1[193]=23;
  p_output1[194]=37;
  p_output1[195]=44;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 98, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_hs_int_dx.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void Js_hs_int_dx_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE

#include "udf.h"

DEFINE_PROFILE(membrane_speed,th,nv)/* function name   *//* thread          *//* variable number */
{
  face_t f;
  real x[ND_ND];
  real f_time = CURRENT_TIME;

  begin_f_loop (f,th)
    {
      F_CENTROID(x,f,th);
      if (f_time<=10e-6)
        F_PROFILE(f,th,nv) = 3.58*cos(M_PI*f_time/30e-6);
      else
        F_PROFILE(f,th,nv) = 0;
    }
  end_f_loop (f,th)
}

/*--------------------------------*- C++ -*-----------------------------------*\
| 		                     |                                                 |
|Continuum Flow Mathematics  | ANSYS FLUENT: User Defined Functions            |
|*   *     *     * ** * **   | Version:  1.0                                   |
| **  *  *  **  *    *       | Discription:							           |
|   *  **     *   *    *  *  |UDF for specifying mass flow rate profile based  |
|                *    *      |on Physical time steps for mass flow rate        |
|                         *  |boundary. THIS IS FOR CONTRACTION 1 DEVICE,	   |
|*  *       *     *    * *   |WHERE 0.5 IS INLET, AND 0.375 IS OUTLET with	   |
|      ***      *    *       |gas flow rate 1 SLDPM. 						   |	
|  *  *             *        |ANSYS UDF functions for the TWO PHASE FLOW for   |
| *        * **              |the given accessible data.                       |
|                            |												   |
|                  *         |                                                 |
|    *                  *    |	                                               |
\*----------------------------------------------------------------------------*/	 	
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *//
/******************************************************************************/

#include "udf.h"

/*Inlet Mass Flow Rate Profile*/

DEFINE_PROFILE(td_mass_inlet_2_A,t,nv)
{
	face_t f;
	real flow_time = RP_Get_Real("flow-time");
	if(flow_time < 302)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted mass flow rate set at 0.004708 kg/s \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.004708;
		}
		end_f_loop(f,t)
	}
	else if(flow_time < 602 && flow_time > 301)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted mass flow rate set at 0.010109 kg/s \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.010109;
		}
		end_f_loop(f,t)
	}
	else if(flow_time < 902 && flow_time > 601)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted mass flow rate set at 0.015006 kg/s \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.015006;
		}
		end_f_loop(f,t)
	}
	else if(flow_time < 1202 && flow_time > 901)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted mass flow rate set at 0.017608 kg/s \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.017608;
		}
		end_f_loop(f,t)
	}
	else if(flow_time < 1502 && flow_time > 1201)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted mass flow rate set at 0.020204 kg/s \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.020204;
		}
		end_f_loop(f,t)
	}
	else if(flow_time < 1802 && flow_time > 1501)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted mass flow rate set at 0.022639 kg/s \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.022639;
		}
		end_f_loop(f,t)
	}
	else if(flow_time < 2102 && flow_time > 1801)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted mass flow rate set at 0.024463 kg/s \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.024463;
		}
		end_f_loop(f,t)
	}
	else if(flow_time < 2402 && flow_time > 2101)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted mass flow rate set at 0.026513 kg/s \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.026513;
		}
		end_f_loop(f,t)
	}
	else if(flow_time < 2702 && flow_time > 2401)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted mass flow rate set at 0.028398 kg/s \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.028398;
		}
		end_f_loop(f,t)
	}
	else
	{
		printf("Time = %f sec. \n",flow_time);
	 	printf("targeted mass flow rate set at 0.030066 kg/s \n");
		
		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.030066;
		}
		end_f_loop(f,t)
	}
}

/*Pressure for INLET Profile for specified mass flow rate*/

DEFINE_PROFILE(td_pressure_Inlet_2_F,t,nv)
{
	face_t f;
	real flow_time = RP_Get_Real("flow-time");
/*Flow rate at 0.005*/	
	if(flow_time < 302)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at Inlet set at 18601.284 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 18601.284;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.01*/
	else if(flow_time < 602 && flow_time > 301)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at Inlet set at 42035.890 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 42035.890;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.015*/
	else if(flow_time < 902 && flow_time > 601)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at Inlet set at 69526.492 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 69526.492;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.0175*/
	else if(flow_time < 1202 && flow_time > 901)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at Inlet set at 88419.422 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 88419.422;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.02*/
	else if(flow_time < 1502 && flow_time > 1201)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at Inlet set at 108072.6976 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 108072.697;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.0225*/
	else if(flow_time < 1802 && flow_time > 1501)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at Inlet set at 125555.648 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 125555.648;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.0245*/
	else if(flow_time < 2102 && flow_time > 1801)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at Inlet set at 139173.627 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 139173.627;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.0265*/
	else if(flow_time < 2402 && flow_time > 2101)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at Inlet set at 155203.318 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 155203.318;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.0285*/
	else if(flow_time < 2702 && flow_time > 2401)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at Inlet set at 171203.379 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 171203.379;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.03*/
	else
	{
		printf("Time = %f sec. \n",flow_time);
	 	printf("Targeted Pressure at Inlet set at 185756.108 Pa \n");
		
		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 185756.108;
		}
		end_f_loop(f,t)
	}
}

/*Pressure Outlet Profile for specified mass flow rate*/

DEFINE_PROFILE(td_pressure_outlet_2_F,t,nv)
{
	face_t f;
	real flow_time = RP_Get_Real("flow-time");
/*Flow rate at 0.005*/	
	if(flow_time < 302)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at outlet set at 18081.750 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 18081.750;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.01*/
	else if(flow_time < 602 && flow_time > 301)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at outlet set at 41538.104 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 41538.104;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.015*/
	else if(flow_time < 902 && flow_time > 601)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at outlet set at 69013.911 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 69013.911;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.0175*/
	else if(flow_time < 1202 && flow_time > 901)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at outlet set at 87925.546 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 87925.546;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.02*/
	else if(flow_time < 1502 && flow_time > 1201)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at outlet set at 107532.462 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 107532.4629;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.0225*/
	else if(flow_time < 1802 && flow_time > 1501)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at outlet set at 125052.814 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 125052.814;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.0245*/
	else if(flow_time < 2102 && flow_time > 1801)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at outlet set at 138767.087 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 138767.087;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.0265*/
	else if(flow_time < 2402 && flow_time > 2101)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at outlet set at 154665.835 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 154665.835;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.0285*/
	else if(flow_time < 2702 && flow_time > 2401)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Targeted Pressure at outlet set at 170553.468 Pa \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 170553.468;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.03*/
	else
	{
		printf("Time = %f sec. \n",flow_time);
	 	printf("Targeted Pressure at outlet set at 185165.554 Pa \n");
		
		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 185165.554;
		}
		end_f_loop(f,t)
	}
}

/*This part of code describes about the velocity slip ratio which is required for the two phase calculations*/

DEFINE_PROFILE(td_Velocity_slip_ratio,t,nv)
{
	face_t f;
	real flow_time = RP_Get_Real("flow-time");
/*Flow rate at 0.005*/
	if(flow_time < 302)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Velocity slip ratio set at 3.53976 \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 3.53976;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.010*/
	else if(flow_time < 602 && flow_time > 301)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Velocity slip ratio set at 1.64864 \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 1.64864;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.015*/
	else if(flow_time < 902 && flow_time > 601)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Velocity slip ratio set at 1.11059 \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 1.11059;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.0175*/
	else if(flow_time < 1202 && flow_time > 901)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Velocity slip ratio set at 0.94648 \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.94648;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.02*/
	else if(flow_time < 1502 && flow_time > 1201)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Velocity slip ratio set at 0.82488 \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.82488;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.0225*/
	else if(flow_time < 1802 && flow_time > 1501)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Velocity slip ratio set at 0.73617 \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.73617;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.0245*/
	else if(flow_time < 2102 && flow_time > 1801)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Velocity slip ratio set at 0.68126 \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.68126;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.0265*/
	else if(flow_time < 2402 && flow_time > 2101)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Velocity slip ratio set at 0.62859 \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.62859;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.0285*/
	else if(flow_time < 2702 && flow_time > 2401)
	{
		printf("Time = %f sec. \n",flow_time);
		printf("Velocity slip ratio set at 0.58686 \n");

		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.58686;
		}
		end_f_loop(f,t)
	}
/*Flow rate at 0.03*/
	else
	{
		printf("Time = %f sec. \n",flow_time);
	 	printf("Velocity slip ratio set at 0.55432 \n");
		
		begin_f_loop(f,t)
		{
			F_PROFILE(f,t,nv) = 0.55432;
		}
		end_f_loop(f,t)
	}
}
/******************************************************************************
********************************************************************************/

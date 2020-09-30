/**
  * This file is part of Lattice_QCD.
  *
  * Lattice_QCD is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * Lattice_QCD is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with Lattice_QCD.  If not, see <https://www.gnu.org/licenses/>.
  */
/**
 *  @file Calculate.h
 *  @brief the functions used in the calculation for the decay rate points
 *  @author Bradley V Smith
 *  @version 2
 */
#ifndef CALCULATE_H_INCLUDED
#define CALCULATE_H_INCLUDED
#include "Constant.h"
//finds the starting qsqr value
double qsqrmin (double ml);
//finds the nominal decay
double nominalcalc(double qsqr, double param1[set1]);
//finds the higher order decay
double HOcalc(double qsqr, double param2[set2]);
//finds the error for a given decay
double resulterrorcalc(double qsqr, double obs, double *param, double *covar);
//finds the total error for the system
double totalerrorcalc(double resnom, double resHO, double errnom, double errHO);


#endif // CALCULATE_H_INCLUDED

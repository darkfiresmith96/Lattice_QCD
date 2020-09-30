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
 *  @file Constant.h
 *  @brief The global variables and constants used throughout the code
 *  @author Bradley V Smith
 *  @version 1
 */
#ifndef CONSTANT_H_INCLUDED
#define CONSTANT_H_INCLUDED
/**
 *  the number of data points generated
 */
extern const int points;
/**
 * the starting point for the data
 */
extern double start;
/**
 *  the ending point for the data
 */
extern double end;
/**
 *some important constants
 */
extern const double mlambdab;
extern const double mlambdac;
extern const double GF;
extern const double hbar;
extern const double mtau;
extern const double mmu;
extern const double PI;
extern const double vbc;
extern const double vcb;
extern const double m1;
extern const double m2;
extern const double mb;
extern const double mc;
extern const double eps;
extern const double epsneg;
/**
 * pole locations
 */
extern const double mb0minus;
extern const double mb1minus;
extern const double mb0plus;
extern const double mb1plus;
/**
 * the number of parameters for the nominal data set
 */
extern const int set1;
/**
 *  the number of parameters for the higher order data set
 */
extern const int set2;
/**
 *  the number of form factors
 */
extern const int numfactors;
    //t0 parameter of z expansion
extern double tminus;
extern double t0;
extern double qsqrmax;

/**
 *  the names of the parameters for the nominal form factors
 */
extern const char *nominalparam[];
/**
 *  the names of the parameters for the higher order form factors
 */
extern const char *hoparam[];
/**
 *  the maximum length for file names
 */
extern int file_name_length;
/**
 *  the number of parameters for the current data set
 */
extern int param_num;
/**
 *  the precision, number of digits, to take in for the parameters
 */
extern int pressision;
/**
 * the factors used
 */
extern double gs;
extern double gp;
extern double gL;
extern double gR;
extern double gT;
extern double ml;


#endif // CONSTANT_H_INCLUDED

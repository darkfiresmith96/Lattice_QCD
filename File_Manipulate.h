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
 *  @file File_Manipulate.h
 *  @brief The functions used to take in and organize the parameters and covariances
 *  @author Bradley V Smith
 *  @version 1
 */
#ifndef FILE_MANIPULATE_H_INCLUDED
#define FILE_MANIPULATE_H_INCLUDED
//prints the contents of the file
void print_file(FILE *file_ptr);
//extracts and organizes the parameters
void param_org(FILE *file_ptr, double *param, const char *factorlist[]);
//extracts and organizes the covariances
void covar_org(FILE *file_ptr, double *covar, const char *factorlist[]);


#endif // FILE_MANIPULATE_H_INCLUDED

INTRODUCTION
------------
In particle physics, the properties and interactions of the subatomic particles are studied. In the interactions of the quarks, elementary
particles, complex particle exchange between the quarks takes place. This phenomenon is called hadronization. Developing algebraic formula
to encapsulate the effect of the hadronization in the quark interactions is necessary. The algebraic formula is written in terms of functions
called form factors. Form factors are extracted numerically from the particle physics experiments. The code is used to call the values of the
form factor functions for the decay process of particle Lambda b to particle Lambda c from the experiments and employ them in the calculations
of the decay rate.

This program takes in four files containing the following information:
   *  The nominal form factor parameters
   *  The nominal form factor covariances
   *  The higher order form factor parameters
   *  The higher order form factor covariances
With this information the program uses the information to produce the decay rates and their errors with respect to a series qsqr data points.
------------
REQUIREMENTS
------------
This program has no outside requirements
------------
INSTALLATION
------------
Download the executable and run as you would a normal program.
-------------
CONFIGURATION
-------------
This program curently has no configuratable settings
---------------
TROUBLESHOOTING
---------------

---
FAQ
---

----
BUGS
----

-----------
MAINTAINERS
-----------
Current Maintainers:
   *  Bradley V Smith - bs5797@cs.ship.edu

This project has been sponsered by:
  *  Dr Ahmed Rashed: Assistant Professor of Physics, Shippensburg University
	Faculty Mentor, Developer of main idea for the project.
----------------
ACKNOWLEDGEMENTS
----------------
Thank you to the following for:
  *  Dr Stefan Meinel: Associate Professor of Physics, University of Arizona
	for providing of origional Mathmatica program that the results where commpared with
  *  Shippensburg University Student/Faculty Research Engagement (SFRE) Grant
	 Provided funding for first part of project
  *  Shippensburg University Summer Undergraduate Research Experiance (SURE)
	Provided funding for second part of project
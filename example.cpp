#include <npe.h>
#include <pybind11/pybind11.h>
#include <sstream>

const char* add_matrices_doc = R"Qu8mg5v7(
Add two Eigen matrices

Parameters
----------
m1 : The first matrix to add
m2 : The second matrix to add
in_place : if True, the result is stored in m2, False by default

Returns
-------
The sum of the two matrices

)Qu8mg5v7";

npe_function(add_matrices)
npe_arg(m1, dense_i32, dense_i64, dense_f32, dense_f64)
npe_arg(m2, npe_matches(m1))
npe_default_arg(in_place, bool, false)
npe_begin_code()

  if (m1.rows() != m2.rows() || m1.cols() != m2.cols()) {
    std::stringstream ss;
    ss << "Matrices m1 and m2 must have the same shape. Got m1.shape = (" << m1.rows() << ", " << m1.cols() << "), ";
    ss << "m2.shape = (" << m2.rows() << ", " << m2.cols() << ").";
    throw pybind11::value_error(ss.str());
  }

  if (in_place) {
    m2 += m1;
    return npe::move(m2);
  } else {
    npe_Matrix_m1 m3 = m1 + m2;
    return npe::move(m3);
  }

npe_end_code()

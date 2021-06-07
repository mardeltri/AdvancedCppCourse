TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
#        src/main.cpp \
#        src/exceptions/exceptions.cpp \
#        src/file/writing_file.cpp
#        src/file/reading_file.cpp
#         src/file/parsing_file.cpp
#         src/file/binary_file.cpp
#         src/standard_template_library/vectors.cpp\
#         src/standard_template_library/vectors2d.cpp
#         src/standard_template_library/list.cpp
#            src/standard_template_library/maps.cpp\
#         src/standard_template_library/custom_objects_maps.cpp\
#         src/standard_template_library/multimaps.cpp\
#         src/standard_template_library/sets.cpp\
#         src/standard_template_library/stackandqueue.cpp
#         src/standard_template_library/sortingvectors.cpp \
#         src/operator_overloading/assignment_operator.cpp \
#         src/operator_overloading/comparison_operator_pointer.cpp \
#         src/operator_overloading/printing_operator.cpp\
#         src/operator_overloading/main_complex.cpp\
#         src/operator_overloading/complex_numbers.cpp\
#         src/operator_overloading/plus_operator.cpp\
#         src/operator_overloading/comparison_operator.cpp\
#         src/operator_overloading/dereference_operator.cpp\
#         src/templates/templates.cpp\
#         src/templates/template_class.cpp\
#         src/templates/template_function.cpp\
#         src/passing_functions_to_functions/function_pointers.cpp\
#         src/passing_functions_to_functions/using_function_pointers.cpp\
#         src/passing_functions_to_functions/polymorphism.cpp\
#         src/passing_functions_to_functions/abstract_classes.cpp\
#         src/passing_functions_to_functions/functors.cpp\
#         src/cpp11_new_features/enhanced_for_loop.cpp\
#         src/cpp11_new_features/nested_template_classes.cpp\
#         src/cpp11_new_features/ring_buffer.cpp\
#         src/cpp11_new_features/c98_initialization.cpp\
#         src/cpp11_new_features/c11_initialization.cpp\
#         src/cpp11_new_features/initializer_lists.cpp\
#         src/cpp11_new_features/object_initialization.cpp\
#         src/cpp11_new_features/intro_lambda_expressions.cpp\
#          src/cpp11_new_features/lambda_parameters_and_return_types.cpp\
#          src/cpp11_new_features/lambda_capture_expressions.cpp\
#          src/cpp11_new_features/capturing_this_in_lambda.cpp\
#          src/cpp11_new_features/functional.cpp\
#          src/cpp11_new_features/mutable_lambdas.cpp\
#          src/cpp11_new_features/delegating_constructors.cpp\
#          src/cpp11_new_features/constructors_and_memory.cpp\
#          src/cpp11_new_features/rvalues_lvalues.cpp\
#          src/cpp11_new_features/lvalue_references.cpp\
#          src/cpp11_new_features/rvalue_references.cpp\
#          src/cpp11_new_features/move_constructors.cpp\
#          src/cpp11_new_features/move_assignment_constructors.cpp\
#          src/cpp11_new_features/static_cast.cpp\
#          src/cpp11_new_features/dynamic_cast.cpp\
#          src/cpp11_new_features/reinterpret_cast.cpp\
#          src/cpp11_new_features/perfect_forwarding.cpp\
           src/bitmap/bitmap.cpp\
           src/bitmap/zoomlist.cpp \
           src/final_project/fractalcreator.cpp \
           src/final_project/main.cpp \
           src/mandelbrot/mandelbrot.cpp

HEADERS += \
#    include/operator_overloading/complex_numbers.h
#    include/cpp11_new_features/ring.h\
    bitmap.h \
    include/bitmap/bitmap.h \
    include/bitmap/zoom.h \
    include/bitmap/bitmapFileHeader.h \
    include/bitmap/bitmapInfoHeader.h \
    include/mandelbrot/mandelbrot.h \
    include/bitmap/zoomlist.h \
    include/final_project/fractalcreator.h


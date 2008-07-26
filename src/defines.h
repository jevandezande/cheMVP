#ifndef DEFINES_H_
#define DEFINES_H_

//These are the types used in the enums to distinguish drawing types
#define ATOMTYPE  1
#define BONDTYPE  2
#define ANGLELABELTYPE 3
#define BONDLABELTYPE 4
#define ANGLETYPE 5
#define ANGLEMARKERTYPE 6
#define ARROWTYPE 7
#define DRAGBOXTYPE 8

#define TINY 0.00001

#define EXTRA_DRAWING_SPACE 0.2

#define DEFAULT_LABEL_FONT "Helvetica"
#define DEFAULT_LABEL_FONT_SIZE 13

#define DEFAULT_ATOM_LABEL_FONT "Helvetica"
#define DEFAULT_ATOM_LABEL_FONT_SIZE 12


#define DEFAULT_SCENE_SIZE_X 700.0
#define DEFAULT_SCENE_SIZE_Y 550.0
#define DZ_ZERO_TOL 0.01
#define SELECTED_COLOR QColor(104,250,14,150)

#define DEFAULT_BOND_LABEL_PRECISION 3
#define DEFAULT_ANGLE_LABEL_PRECISION 1

#define DEFAULT_ATOM_SCALE_FACTOR 0.55
#define DEFAULT_BOND_THICKNESS 0.2
#define DEFAULT_DASHED_BOND_THICKNESS 0.05

#define BOHR_TO_ANG 0.529177249
#define ANG_TO_BOHR 1.889725989
#define DEG_TO_RAD 0.01745329251994330
#define RAD_TO_DEG 57.29577951308232
#define PI 3.14159265

#define ANGLE_MARKER_OFFSET 0.3


#endif /*DEFINES_H_*/
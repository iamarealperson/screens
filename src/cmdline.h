/** @file cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.6
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef CMDLINE_H
#define CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE "maim"
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define CMDLINE_PARSER_PACKAGE_NAME "maim"
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION "v2.3.19"
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  char * xdisplay_arg;	/**< @brief Sets the x display. (default=':0').  */
  char * xdisplay_orig;	/**< @brief Sets the x display. original value given at command line.  */
  const char *xdisplay_help; /**< @brief Sets the x display. help description.  */
  int select_flag;	/**< @brief Enables user region selection. Requires slop to be installed. (default=off).  */
  const char *select_help; /**< @brief Enables user region selection. Requires slop to be installed. help description.  */
  int x_arg;	/**< @brief Sets the x coordinate for taking an image.  */
  char * x_orig;	/**< @brief Sets the x coordinate for taking an image original value given at command line.  */
  const char *x_help; /**< @brief Sets the x coordinate for taking an image help description.  */
  int y_arg;	/**< @brief Sets the y coordinate for taking an image.  */
  char * y_orig;	/**< @brief Sets the y coordinate for taking an image original value given at command line.  */
  const char *y_help; /**< @brief Sets the y coordinate for taking an image help description.  */
  int w_arg;	/**< @brief Sets the width for taking an image.  */
  char * w_orig;	/**< @brief Sets the width for taking an image original value given at command line.  */
  const char *w_help; /**< @brief Sets the width for taking an image help description.  */
  int h_arg;	/**< @brief Sets the height for taking an image.  */
  char * h_orig;	/**< @brief Sets the height for taking an image original value given at command line.  */
  const char *h_help; /**< @brief Sets the height for taking an image help description.  */
  char * geometry_arg;	/**< @brief Set the region to capture.  */
  char * geometry_orig;	/**< @brief Set the region to capture original value given at command line.  */
  const char *geometry_help; /**< @brief Set the region to capture help description.  */
  char * delay_arg;	/**< @brief Set the amount of time to wait before taking an image. (default='0.0').  */
  char * delay_orig;	/**< @brief Set the amount of time to wait before taking an image. original value given at command line.  */
  const char *delay_help; /**< @brief Set the amount of time to wait before taking an image. help description.  */
  int windowid_arg;	/**< @brief Set the window to capture. Defaults to the root window id..  */
  char * windowid_orig;	/**< @brief Set the window to capture. Defaults to the root window id. original value given at command line.  */
  const char *windowid_help; /**< @brief Set the window to capture. Defaults to the root window id. help description.  */
  int localize_flag;	/**< @brief Localizes given geometry to the given window. So \"maim -i $ID -g 100x100+0+0 --localize\" would screenshot the top-left 100x100 pixels of the given window, rather than the top-left 100x100 pixels of the root window. (default=off).  */
  const char *localize_help; /**< @brief Localizes given geometry to the given window. So \"maim -i $ID -g 100x100+0+0 --localize\" would screenshot the top-left 100x100 pixels of the given window, rather than the top-left 100x100 pixels of the root window. help description.  */
  int hidecursor_flag;	/**< @brief Prevents the system cursor from showing up in screenshots. (default=off).  */
  const char *hidecursor_help; /**< @brief Prevents the system cursor from showing up in screenshots. help description.  */
  char * mask_arg;	/**< @brief Masks off-screen pixels so they don't show up in screenshots. (default='auto').  */
  char * mask_orig;	/**< @brief Masks off-screen pixels so they don't show up in screenshots. original value given at command line.  */
  const char *mask_help; /**< @brief Masks off-screen pixels so they don't show up in screenshots. help description.  */
  int nokeyboard_flag;	/**< @brief Disables the ability to cancel selections with the keyboard. (default=off).  */
  const char *nokeyboard_help; /**< @brief Disables the ability to cancel selections with the keyboard. help description.  */
  int bordersize_arg;	/**< @brief Set the selection rectangle's thickness. Does nothing when --highlight is enabled. (default='5').  */
  char * bordersize_orig;	/**< @brief Set the selection rectangle's thickness. Does nothing when --highlight is enabled. original value given at command line.  */
  const char *bordersize_help; /**< @brief Set the selection rectangle's thickness. Does nothing when --highlight is enabled. help description.  */
  int padding_arg;	/**< @brief Set the padding size of the selection. Can be negative. (default='0').  */
  char * padding_orig;	/**< @brief Set the padding size of the selection. Can be negative. original value given at command line.  */
  const char *padding_help; /**< @brief Set the padding size of the selection. Can be negative. help description.  */
  int tolerance_arg;	/**< @brief How far in pixels the mouse can move after clicking and still be detected as a normal click instead of a click and drag. Setting this to 0 will disable window selections. (default='2').  */
  char * tolerance_orig;	/**< @brief How far in pixels the mouse can move after clicking and still be detected as a normal click instead of a click and drag. Setting this to 0 will disable window selections. original value given at command line.  */
  const char *tolerance_help; /**< @brief How far in pixels the mouse can move after clicking and still be detected as a normal click instead of a click and drag. Setting this to 0 will disable window selections. help description.  */
  char * gracetime_arg;	/**< @brief Set the amount of time before slop will check for keyboard cancellations in seconds. (default='0.4').  */
  char * gracetime_orig;	/**< @brief Set the amount of time before slop will check for keyboard cancellations in seconds. original value given at command line.  */
  const char *gracetime_help; /**< @brief Set the amount of time before slop will check for keyboard cancellations in seconds. help description.  */
  char * color_arg;	/**< @brief Set the selection rectangle's color. Supports RGB or RGBA values. (default='0.5,0.5,0.5,1').  */
  char * color_orig;	/**< @brief Set the selection rectangle's color. Supports RGB or RGBA values. original value given at command line.  */
  const char *color_help; /**< @brief Set the selection rectangle's color. Supports RGB or RGBA values. help description.  */
  int nodecorations_flag;	/**< @brief Attempt to select child windows in order to avoid window decorations. (default=off).  */
  const char *nodecorations_help; /**< @brief Attempt to select child windows in order to avoid window decorations. help description.  */
  int min_arg;	/**< @brief Set the minimum output of width or height values. This is useful to avoid outputting 0. Setting min and max to the same value disables drag selections. (default='0').  */
  char * min_orig;	/**< @brief Set the minimum output of width or height values. This is useful to avoid outputting 0. Setting min and max to the same value disables drag selections. original value given at command line.  */
  const char *min_help; /**< @brief Set the minimum output of width or height values. This is useful to avoid outputting 0. Setting min and max to the same value disables drag selections. help description.  */
  int max_arg;	/**< @brief Set the maximum output of width or height values. Setting min and max to the same value disables drag selections. (default='0').  */
  char * max_orig;	/**< @brief Set the maximum output of width or height values. Setting min and max to the same value disables drag selections. original value given at command line.  */
  const char *max_help; /**< @brief Set the maximum output of width or height values. Setting min and max to the same value disables drag selections. help description.  */
  int highlight_flag;	/**< @brief Instead of outlining selections, slop highlights it. This is only useful when --color is set to a transparent color. (default=off).  */
  const char *highlight_help; /**< @brief Instead of outlining selections, slop highlights it. This is only useful when --color is set to a transparent color. help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int xdisplay_given ;	/**< @brief Whether xdisplay was given.  */
  unsigned int select_given ;	/**< @brief Whether select was given.  */
  unsigned int x_given ;	/**< @brief Whether x was given.  */
  unsigned int y_given ;	/**< @brief Whether y was given.  */
  unsigned int w_given ;	/**< @brief Whether w was given.  */
  unsigned int h_given ;	/**< @brief Whether h was given.  */
  unsigned int geometry_given ;	/**< @brief Whether geometry was given.  */
  unsigned int delay_given ;	/**< @brief Whether delay was given.  */
  unsigned int windowid_given ;	/**< @brief Whether windowid was given.  */
  unsigned int localize_given ;	/**< @brief Whether localize was given.  */
  unsigned int hidecursor_given ;	/**< @brief Whether hidecursor was given.  */
  unsigned int mask_given ;	/**< @brief Whether mask was given.  */
  unsigned int nokeyboard_given ;	/**< @brief Whether nokeyboard was given.  */
  unsigned int bordersize_given ;	/**< @brief Whether bordersize was given.  */
  unsigned int padding_given ;	/**< @brief Whether padding was given.  */
  unsigned int tolerance_given ;	/**< @brief Whether tolerance was given.  */
  unsigned int gracetime_given ;	/**< @brief Whether gracetime was given.  */
  unsigned int color_given ;	/**< @brief Whether color was given.  */
  unsigned int nodecorations_given ;	/**< @brief Whether nodecorations was given.  */
  unsigned int min_given ;	/**< @brief Whether min was given.  */
  unsigned int max_given ;	/**< @brief Whether max was given.  */
  unsigned int highlight_given ;	/**< @brief Whether highlight was given.  */

  char **inputs ; /**< @brief unamed options (options without names) */
  unsigned inputs_num ; /**< @brief unamed options number */
} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief the description string of the program */
extern const char *gengetopt_args_info_description;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);

extern const char *cmdline_parser_mask_values[];  /**< @brief Possible values for mask. */


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_H */

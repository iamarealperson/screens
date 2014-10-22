/*
  File autogenerated by gengetopt version 2.22.6
  generated with the following command:
  gengetopt --unamed-opts

  The developers of gengetopt consider the fixed text that goes in all
  gengetopt output files to be in the public domain:
  we make no copyright claims on it.
*/

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef FIX_UNUSED
#define FIX_UNUSED(X) (void) (X) /* avoid warnings for unused params */
#endif

#include <getopt.h>

#include "cmdline.h"

const char *gengetopt_args_info_purpose = "Takes screenshots.";

const char *gengetopt_args_info_usage = "Usage: maim [options] [file]";

const char *gengetopt_args_info_versiontext = "Copyright (C) 2014 Dalton Nell, GPLv3";

const char *gengetopt_args_info_description = "maim (Make Image) is a utility that takes screenshots of your desktop using\nimlib2. It's meant to overcome shortcomings of scrot and performs better than\nscrot in several ways.";

const char *gengetopt_args_info_help[] = {
  "      --help                    Print help and exit",
  "  -V, --version                 Print version and exit",
  "Options",
  "      --xdisplay=hostname:number.screen_number\n                                Sets the x display.  (default=`:0')",
  "  -s, --select                  Enables user region selection. Requires slop to\n                                  be installed.  (default=off)",
  "  -x, --x=INT                   Sets the x coordinate for taking an image",
  "  -y, --y=INT                   Sets the y coordinate for taking an image",
  "  -w, --w=INT                   Sets the width for taking an image",
  "  -h, --h=INT                   Sets the height for taking an image",
  "  -g, --geometry=WxH+X+Y        Set the region to capture",
  "  -d, --delay=FLOAT             Set the amount of time to wait before taking an\n                                  image.  (default=`0.0')",
  "  -i, --windowid=INT            Set the window to capture. Defaults to the root\n                                  window id.",
  "      --hidecursor              Prevents the system cursor from showing up in\n                                  screenshots.  (default=off)",
  "  -m, --mask=STRING             Masks off-screen pixels so they don't show up\n                                  in screenshots.  (possible values=\"auto\",\n                                  \"off\", \"on\" default=`auto')",
  "\nSlop Options",
  "      --nokeyboard              Disables the ability to cancel selections with\n                                  the keyboard.  (default=off)",
  "  -b, --bordersize=INT          Set the selection rectangle's thickness. Does\n                                  nothing when --highlight is enabled.\n                                  (default=`5')",
  "  -p, --padding=INT             Set the padding size of the selection. Can be\n                                  negative.  (default=`0')",
  "  -t, --tolerance=INT           How far in pixels the mouse can move after\n                                  clicking and still be detected as a normal\n                                  click instead of a click and drag. Setting\n                                  this to 0 will disable window selections.\n                                  (default=`2')",
  "      --gracetime=FLOAT         Set the amount of time before slop will check\n                                  for keyboard cancellations in seconds.\n                                  (default=`0.4')",
  "  -c, --color=FLOAT,FLOAT,FLOAT,FLOAT\n                                Set the selection rectangle's color. Supports\n                                  RGB or RGBA values.\n                                  (default=`0.5,0.5,0.5,1')",
  "  -n, --nodecorations           Attempt to select child windows in order to\n                                  avoid window decorations.  (default=off)",
  "      --min=INT                 Set the minimum output of width or height\n                                  values. This is useful to avoid outputting 0.\n                                  Setting min and max to the same value\n                                  disables drag selections.  (default=`0')",
  "      --max=INT                 Set the maximum output of width or height\n                                  values. Setting min and max to the same value\n                                  disables drag selections.  (default=`0')",
  "  -l, --highlight               Instead of outlining selections, slop\n                                  highlights it. This is only useful when\n                                  --color is set to a transparent color.\n                                  (default=off)",
  "\nExamples\n    $ # Screenshot the active window\n    $ maim -id $(xdotool getactivewindow)\n\n    $ # Prompt a transparent red selection to screenshot.\n    $ maim -s -c 1,0,0,0.6\n\n    $ # Save a dated screenshot.\n    $ maim \"~/$(date +%F-%T).png\"\n",
    0
};

typedef enum {ARG_NO
  , ARG_FLAG
  , ARG_STRING
  , ARG_INT
} cmdline_parser_arg_type;

static
void clear_given (struct gengetopt_args_info *args_info);
static
void clear_args (struct gengetopt_args_info *args_info);

static int
cmdline_parser_internal (int argc, char **argv, struct gengetopt_args_info *args_info,
                        struct cmdline_parser_params *params, const char *additional_error);


const char *cmdline_parser_mask_values[] = {"auto", "off", "on", 0}; /*< Possible values for mask. */

static char *
gengetopt_strdup (const char *s);

static
void clear_given (struct gengetopt_args_info *args_info)
{
  args_info->help_given = 0 ;
  args_info->version_given = 0 ;
  args_info->xdisplay_given = 0 ;
  args_info->select_given = 0 ;
  args_info->x_given = 0 ;
  args_info->y_given = 0 ;
  args_info->w_given = 0 ;
  args_info->h_given = 0 ;
  args_info->geometry_given = 0 ;
  args_info->delay_given = 0 ;
  args_info->windowid_given = 0 ;
  args_info->hidecursor_given = 0 ;
  args_info->mask_given = 0 ;
  args_info->nokeyboard_given = 0 ;
  args_info->bordersize_given = 0 ;
  args_info->padding_given = 0 ;
  args_info->tolerance_given = 0 ;
  args_info->gracetime_given = 0 ;
  args_info->color_given = 0 ;
  args_info->nodecorations_given = 0 ;
  args_info->min_given = 0 ;
  args_info->max_given = 0 ;
  args_info->highlight_given = 0 ;
}

static
void clear_args (struct gengetopt_args_info *args_info)
{
  FIX_UNUSED (args_info);
  args_info->xdisplay_arg = gengetopt_strdup (":0");
  args_info->xdisplay_orig = NULL;
  args_info->select_flag = 0;
  args_info->x_orig = NULL;
  args_info->y_orig = NULL;
  args_info->w_orig = NULL;
  args_info->h_orig = NULL;
  args_info->geometry_arg = NULL;
  args_info->geometry_orig = NULL;
  args_info->delay_arg = gengetopt_strdup ("0.0");
  args_info->delay_orig = NULL;
  args_info->windowid_orig = NULL;
  args_info->hidecursor_flag = 0;
  args_info->mask_arg = gengetopt_strdup ("auto");
  args_info->mask_orig = NULL;
  args_info->nokeyboard_flag = 0;
  args_info->bordersize_arg = 5;
  args_info->bordersize_orig = NULL;
  args_info->padding_arg = 0;
  args_info->padding_orig = NULL;
  args_info->tolerance_arg = 2;
  args_info->tolerance_orig = NULL;
  args_info->gracetime_arg = gengetopt_strdup ("0.4");
  args_info->gracetime_orig = NULL;
  args_info->color_arg = gengetopt_strdup ("0.5,0.5,0.5,1");
  args_info->color_orig = NULL;
  args_info->nodecorations_flag = 0;
  args_info->min_arg = 0;
  args_info->min_orig = NULL;
  args_info->max_arg = 0;
  args_info->max_orig = NULL;
  args_info->highlight_flag = 0;
  
}

static
void init_args_info(struct gengetopt_args_info *args_info)
{


  args_info->help_help = gengetopt_args_info_help[0] ;
  args_info->version_help = gengetopt_args_info_help[1] ;
  args_info->xdisplay_help = gengetopt_args_info_help[3] ;
  args_info->select_help = gengetopt_args_info_help[4] ;
  args_info->x_help = gengetopt_args_info_help[5] ;
  args_info->y_help = gengetopt_args_info_help[6] ;
  args_info->w_help = gengetopt_args_info_help[7] ;
  args_info->h_help = gengetopt_args_info_help[8] ;
  args_info->geometry_help = gengetopt_args_info_help[9] ;
  args_info->delay_help = gengetopt_args_info_help[10] ;
  args_info->windowid_help = gengetopt_args_info_help[11] ;
  args_info->hidecursor_help = gengetopt_args_info_help[12] ;
  args_info->mask_help = gengetopt_args_info_help[13] ;
  args_info->nokeyboard_help = gengetopt_args_info_help[15] ;
  args_info->bordersize_help = gengetopt_args_info_help[16] ;
  args_info->padding_help = gengetopt_args_info_help[17] ;
  args_info->tolerance_help = gengetopt_args_info_help[18] ;
  args_info->gracetime_help = gengetopt_args_info_help[19] ;
  args_info->color_help = gengetopt_args_info_help[20] ;
  args_info->nodecorations_help = gengetopt_args_info_help[21] ;
  args_info->min_help = gengetopt_args_info_help[22] ;
  args_info->max_help = gengetopt_args_info_help[23] ;
  args_info->highlight_help = gengetopt_args_info_help[24] ;
  
}

void
cmdline_parser_print_version (void)
{
  printf ("%s %s\n",
     (strlen(CMDLINE_PARSER_PACKAGE_NAME) ? CMDLINE_PARSER_PACKAGE_NAME : CMDLINE_PARSER_PACKAGE),
     CMDLINE_PARSER_VERSION);

  if (strlen(gengetopt_args_info_versiontext) > 0)
    printf("\n%s\n", gengetopt_args_info_versiontext);
}

static void print_help_common(void) {
  cmdline_parser_print_version ();

  if (strlen(gengetopt_args_info_purpose) > 0)
    printf("\n%s\n", gengetopt_args_info_purpose);

  if (strlen(gengetopt_args_info_usage) > 0)
    printf("\n%s\n", gengetopt_args_info_usage);

  printf("\n");

  if (strlen(gengetopt_args_info_description) > 0)
    printf("%s\n\n", gengetopt_args_info_description);
}

void
cmdline_parser_print_help (void)
{
  int i = 0;
  print_help_common();
  while (gengetopt_args_info_help[i])
    printf("%s\n", gengetopt_args_info_help[i++]);
}

void
cmdline_parser_init (struct gengetopt_args_info *args_info)
{
  clear_given (args_info);
  clear_args (args_info);
  init_args_info (args_info);

  args_info->inputs = 0;
  args_info->inputs_num = 0;
}

void
cmdline_parser_params_init(struct cmdline_parser_params *params)
{
  if (params)
    { 
      params->override = 0;
      params->initialize = 1;
      params->check_required = 1;
      params->check_ambiguity = 0;
      params->print_errors = 1;
    }
}

struct cmdline_parser_params *
cmdline_parser_params_create(void)
{
  struct cmdline_parser_params *params = 
    (struct cmdline_parser_params *)malloc(sizeof(struct cmdline_parser_params));
  cmdline_parser_params_init(params);  
  return params;
}

static void
free_string_field (char **s)
{
  if (*s)
    {
      free (*s);
      *s = 0;
    }
}


static void
cmdline_parser_release (struct gengetopt_args_info *args_info)
{
  unsigned int i;
  free_string_field (&(args_info->xdisplay_arg));
  free_string_field (&(args_info->xdisplay_orig));
  free_string_field (&(args_info->x_orig));
  free_string_field (&(args_info->y_orig));
  free_string_field (&(args_info->w_orig));
  free_string_field (&(args_info->h_orig));
  free_string_field (&(args_info->geometry_arg));
  free_string_field (&(args_info->geometry_orig));
  free_string_field (&(args_info->delay_arg));
  free_string_field (&(args_info->delay_orig));
  free_string_field (&(args_info->windowid_orig));
  free_string_field (&(args_info->mask_arg));
  free_string_field (&(args_info->mask_orig));
  free_string_field (&(args_info->bordersize_orig));
  free_string_field (&(args_info->padding_orig));
  free_string_field (&(args_info->tolerance_orig));
  free_string_field (&(args_info->gracetime_arg));
  free_string_field (&(args_info->gracetime_orig));
  free_string_field (&(args_info->color_arg));
  free_string_field (&(args_info->color_orig));
  free_string_field (&(args_info->min_orig));
  free_string_field (&(args_info->max_orig));
  
  
  for (i = 0; i < args_info->inputs_num; ++i)
    free (args_info->inputs [i]);

  if (args_info->inputs_num)
    free (args_info->inputs);

  clear_given (args_info);
}

/**
 * @param val the value to check
 * @param values the possible values
 * @return the index of the matched value:
 * -1 if no value matched,
 * -2 if more than one value has matched
 */
static int
check_possible_values(const char *val, const char *values[])
{
  int i, found, last;
  size_t len;

  if (!val)   /* otherwise strlen() crashes below */
    return -1; /* -1 means no argument for the option */

  found = last = 0;

  for (i = 0, len = strlen(val); values[i]; ++i)
    {
      if (strncmp(val, values[i], len) == 0)
        {
          ++found;
          last = i;
          if (strlen(values[i]) == len)
            return i; /* exact macth no need to check more */
        }
    }

  if (found == 1) /* one match: OK */
    return last;

  return (found ? -2 : -1); /* return many values or none matched */
}


static void
write_into_file(FILE *outfile, const char *opt, const char *arg, const char *values[])
{
  int found = -1;
  if (arg) {
    if (values) {
      found = check_possible_values(arg, values);      
    }
    if (found >= 0)
      fprintf(outfile, "%s=\"%s\" # %s\n", opt, arg, values[found]);
    else
      fprintf(outfile, "%s=\"%s\"\n", opt, arg);
  } else {
    fprintf(outfile, "%s\n", opt);
  }
}


int
cmdline_parser_dump(FILE *outfile, struct gengetopt_args_info *args_info)
{
  int i = 0;

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot dump options to stream\n", CMDLINE_PARSER_PACKAGE);
      return EXIT_FAILURE;
    }

  if (args_info->help_given)
    write_into_file(outfile, "help", 0, 0 );
  if (args_info->version_given)
    write_into_file(outfile, "version", 0, 0 );
  if (args_info->xdisplay_given)
    write_into_file(outfile, "xdisplay", args_info->xdisplay_orig, 0);
  if (args_info->select_given)
    write_into_file(outfile, "select", 0, 0 );
  if (args_info->x_given)
    write_into_file(outfile, "x", args_info->x_orig, 0);
  if (args_info->y_given)
    write_into_file(outfile, "y", args_info->y_orig, 0);
  if (args_info->w_given)
    write_into_file(outfile, "w", args_info->w_orig, 0);
  if (args_info->h_given)
    write_into_file(outfile, "h", args_info->h_orig, 0);
  if (args_info->geometry_given)
    write_into_file(outfile, "geometry", args_info->geometry_orig, 0);
  if (args_info->delay_given)
    write_into_file(outfile, "delay", args_info->delay_orig, 0);
  if (args_info->windowid_given)
    write_into_file(outfile, "windowid", args_info->windowid_orig, 0);
  if (args_info->hidecursor_given)
    write_into_file(outfile, "hidecursor", 0, 0 );
  if (args_info->mask_given)
    write_into_file(outfile, "mask", args_info->mask_orig, cmdline_parser_mask_values);
  if (args_info->nokeyboard_given)
    write_into_file(outfile, "nokeyboard", 0, 0 );
  if (args_info->bordersize_given)
    write_into_file(outfile, "bordersize", args_info->bordersize_orig, 0);
  if (args_info->padding_given)
    write_into_file(outfile, "padding", args_info->padding_orig, 0);
  if (args_info->tolerance_given)
    write_into_file(outfile, "tolerance", args_info->tolerance_orig, 0);
  if (args_info->gracetime_given)
    write_into_file(outfile, "gracetime", args_info->gracetime_orig, 0);
  if (args_info->color_given)
    write_into_file(outfile, "color", args_info->color_orig, 0);
  if (args_info->nodecorations_given)
    write_into_file(outfile, "nodecorations", 0, 0 );
  if (args_info->min_given)
    write_into_file(outfile, "min", args_info->min_orig, 0);
  if (args_info->max_given)
    write_into_file(outfile, "max", args_info->max_orig, 0);
  if (args_info->highlight_given)
    write_into_file(outfile, "highlight", 0, 0 );
  

  i = EXIT_SUCCESS;
  return i;
}

int
cmdline_parser_file_save(const char *filename, struct gengetopt_args_info *args_info)
{
  FILE *outfile;
  int i = 0;

  outfile = fopen(filename, "w");

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot open file for writing: %s\n", CMDLINE_PARSER_PACKAGE, filename);
      return EXIT_FAILURE;
    }

  i = cmdline_parser_dump(outfile, args_info);
  fclose (outfile);

  return i;
}

void
cmdline_parser_free (struct gengetopt_args_info *args_info)
{
  cmdline_parser_release (args_info);
}

/** @brief replacement of strdup, which is not standard */
char *
gengetopt_strdup (const char *s)
{
  char *result = 0;
  if (!s)
    return result;

  result = (char*)malloc(strlen(s) + 1);
  if (result == (char*)0)
    return (char*)0;
  strcpy(result, s);
  return result;
}

int
cmdline_parser (int argc, char **argv, struct gengetopt_args_info *args_info)
{
  return cmdline_parser2 (argc, argv, args_info, 0, 1, 1);
}

int
cmdline_parser_ext (int argc, char **argv, struct gengetopt_args_info *args_info,
                   struct cmdline_parser_params *params)
{
  int result;
  result = cmdline_parser_internal (argc, argv, args_info, params, 0);

  if (result == EXIT_FAILURE)
    {
      cmdline_parser_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
cmdline_parser2 (int argc, char **argv, struct gengetopt_args_info *args_info, int override, int initialize, int check_required)
{
  int result;
  struct cmdline_parser_params params;
  
  params.override = override;
  params.initialize = initialize;
  params.check_required = check_required;
  params.check_ambiguity = 0;
  params.print_errors = 1;

  result = cmdline_parser_internal (argc, argv, args_info, &params, 0);

  if (result == EXIT_FAILURE)
    {
      cmdline_parser_free (args_info);
      exit (EXIT_FAILURE);
    }
  
  return result;
}

int
cmdline_parser_required (struct gengetopt_args_info *args_info, const char *prog_name)
{
  FIX_UNUSED (args_info);
  FIX_UNUSED (prog_name);
  return EXIT_SUCCESS;
}


static char *package_name = 0;

/**
 * @brief updates an option
 * @param field the generic pointer to the field to update
 * @param orig_field the pointer to the orig field
 * @param field_given the pointer to the number of occurrence of this option
 * @param prev_given the pointer to the number of occurrence already seen
 * @param value the argument for this option (if null no arg was specified)
 * @param possible_values the possible values for this option (if specified)
 * @param default_value the default value (in case the option only accepts fixed values)
 * @param arg_type the type of this option
 * @param check_ambiguity @see cmdline_parser_params.check_ambiguity
 * @param override @see cmdline_parser_params.override
 * @param no_free whether to free a possible previous value
 * @param multiple_option whether this is a multiple option
 * @param long_opt the corresponding long option
 * @param short_opt the corresponding short option (or '-' if none)
 * @param additional_error possible further error specification
 */
static
int update_arg(void *field, char **orig_field,
               unsigned int *field_given, unsigned int *prev_given, 
               char *value, const char *possible_values[],
               const char *default_value,
               cmdline_parser_arg_type arg_type,
               int check_ambiguity, int override,
               int no_free, int multiple_option,
               const char *long_opt, char short_opt,
               const char *additional_error)
{
  char *stop_char = 0;
  const char *val = value;
  int found;
  char **string_field;
  FIX_UNUSED (field);

  stop_char = 0;
  found = 0;

  if (!multiple_option && prev_given && (*prev_given || (check_ambiguity && *field_given)))
    {
      if (short_opt != '-')
        fprintf (stderr, "%s: `--%s' (`-%c') option given more than once%s\n", 
               package_name, long_opt, short_opt,
               (additional_error ? additional_error : ""));
      else
        fprintf (stderr, "%s: `--%s' option given more than once%s\n", 
               package_name, long_opt,
               (additional_error ? additional_error : ""));
      return 1; /* failure */
    }

  if (possible_values && (found = check_possible_values((value ? value : default_value), possible_values)) < 0)
    {
      if (short_opt != '-')
        fprintf (stderr, "%s: %s argument, \"%s\", for option `--%s' (`-%c')%s\n", 
          package_name, (found == -2) ? "ambiguous" : "invalid", value, long_opt, short_opt,
          (additional_error ? additional_error : ""));
      else
        fprintf (stderr, "%s: %s argument, \"%s\", for option `--%s'%s\n", 
          package_name, (found == -2) ? "ambiguous" : "invalid", value, long_opt,
          (additional_error ? additional_error : ""));
      return 1; /* failure */
    }
    
  if (field_given && *field_given && ! override)
    return 0;
  if (prev_given)
    (*prev_given)++;
  if (field_given)
    (*field_given)++;
  if (possible_values)
    val = possible_values[found];

  switch(arg_type) {
  case ARG_FLAG:
    *((int *)field) = !*((int *)field);
    break;
  case ARG_INT:
    if (val) *((int *)field) = strtol (val, &stop_char, 0);
    break;
  case ARG_STRING:
    if (val) {
      string_field = (char **)field;
      if (!no_free && *string_field)
        free (*string_field); /* free previous string */
      *string_field = gengetopt_strdup (val);
    }
    break;
  default:
    break;
  };

  /* check numeric conversion */
  switch(arg_type) {
  case ARG_INT:
    if (val && !(stop_char && *stop_char == '\0')) {
      fprintf(stderr, "%s: invalid numeric value: %s\n", package_name, val);
      return 1; /* failure */
    }
    break;
  default:
    ;
  };

  /* store the original value */
  switch(arg_type) {
  case ARG_NO:
  case ARG_FLAG:
    break;
  default:
    if (value && orig_field) {
      if (no_free) {
        *orig_field = value;
      } else {
        if (*orig_field)
          free (*orig_field); /* free previous string */
        *orig_field = gengetopt_strdup (value);
      }
    }
  };

  return 0; /* OK */
}


int
cmdline_parser_internal (
  int argc, char **argv, struct gengetopt_args_info *args_info,
                        struct cmdline_parser_params *params, const char *additional_error)
{
  int c;	/* Character of the parsed option.  */

  int error_occurred = 0;
  struct gengetopt_args_info local_args_info;
  
  int override;
  int initialize;
  int check_required;
  int check_ambiguity;
  
  package_name = argv[0];
  
  override = params->override;
  initialize = params->initialize;
  check_required = params->check_required;
  check_ambiguity = params->check_ambiguity;

  if (initialize)
    cmdline_parser_init (args_info);

  cmdline_parser_init (&local_args_info);

  optarg = 0;
  optind = 0;
  opterr = params->print_errors;
  optopt = '?';

  while (1)
    {
      int option_index = 0;

      static struct option long_options[] = {
        { "help",	0, NULL, 0 },
        { "version",	0, NULL, 'V' },
        { "xdisplay",	1, NULL, 0 },
        { "select",	0, NULL, 's' },
        { "x",	1, NULL, 'x' },
        { "y",	1, NULL, 'y' },
        { "w",	1, NULL, 'w' },
        { "h",	1, NULL, 'h' },
        { "geometry",	1, NULL, 'g' },
        { "delay",	1, NULL, 'd' },
        { "windowid",	1, NULL, 'i' },
        { "hidecursor",	0, NULL, 0 },
        { "mask",	1, NULL, 'm' },
        { "nokeyboard",	0, NULL, 0 },
        { "bordersize",	1, NULL, 'b' },
        { "padding",	1, NULL, 'p' },
        { "tolerance",	1, NULL, 't' },
        { "gracetime",	1, NULL, 0 },
        { "color",	1, NULL, 'c' },
        { "nodecorations",	0, NULL, 'n' },
        { "min",	1, NULL, 0 },
        { "max",	1, NULL, 0 },
        { "highlight",	0, NULL, 'l' },
        { 0,  0, 0, 0 }
      };

      c = getopt_long (argc, argv, "Vsx:y:w:h:g:d:i:m:b:p:t:c:nl", long_options, &option_index);

      if (c == -1) break;	/* Exit from `while (1)' loop.  */

      switch (c)
        {
        case 'V':	/* Print version and exit.  */
          cmdline_parser_print_version ();
          cmdline_parser_free (&local_args_info);
          exit (EXIT_SUCCESS);

        case 's':	/* Enables user region selection. Requires slop to be installed..  */
        
        
          if (update_arg((void *)&(args_info->select_flag), 0, &(args_info->select_given),
              &(local_args_info.select_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "select", 's',
              additional_error))
            goto failure;
        
          break;
        case 'x':	/* Sets the x coordinate for taking an image.  */
        
        
          if (update_arg( (void *)&(args_info->x_arg), 
               &(args_info->x_orig), &(args_info->x_given),
              &(local_args_info.x_given), optarg, 0, 0, ARG_INT,
              check_ambiguity, override, 0, 0,
              "x", 'x',
              additional_error))
            goto failure;
        
          break;
        case 'y':	/* Sets the y coordinate for taking an image.  */
        
        
          if (update_arg( (void *)&(args_info->y_arg), 
               &(args_info->y_orig), &(args_info->y_given),
              &(local_args_info.y_given), optarg, 0, 0, ARG_INT,
              check_ambiguity, override, 0, 0,
              "y", 'y',
              additional_error))
            goto failure;
        
          break;
        case 'w':	/* Sets the width for taking an image.  */
        
        
          if (update_arg( (void *)&(args_info->w_arg), 
               &(args_info->w_orig), &(args_info->w_given),
              &(local_args_info.w_given), optarg, 0, 0, ARG_INT,
              check_ambiguity, override, 0, 0,
              "w", 'w',
              additional_error))
            goto failure;
        
          break;
        case 'h':	/* Sets the height for taking an image.  */
        
        
          if (update_arg( (void *)&(args_info->h_arg), 
               &(args_info->h_orig), &(args_info->h_given),
              &(local_args_info.h_given), optarg, 0, 0, ARG_INT,
              check_ambiguity, override, 0, 0,
              "h", 'h',
              additional_error))
            goto failure;
        
          break;
        case 'g':	/* Set the region to capture.  */
        
        
          if (update_arg( (void *)&(args_info->geometry_arg), 
               &(args_info->geometry_orig), &(args_info->geometry_given),
              &(local_args_info.geometry_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "geometry", 'g',
              additional_error))
            goto failure;
        
          break;
        case 'd':	/* Set the amount of time to wait before taking an image..  */
        
        
          if (update_arg( (void *)&(args_info->delay_arg), 
               &(args_info->delay_orig), &(args_info->delay_given),
              &(local_args_info.delay_given), optarg, 0, "0.0", ARG_STRING,
              check_ambiguity, override, 0, 0,
              "delay", 'd',
              additional_error))
            goto failure;
        
          break;
        case 'i':	/* Set the window to capture. Defaults to the root window id..  */
        
        
          if (update_arg( (void *)&(args_info->windowid_arg), 
               &(args_info->windowid_orig), &(args_info->windowid_given),
              &(local_args_info.windowid_given), optarg, 0, 0, ARG_INT,
              check_ambiguity, override, 0, 0,
              "windowid", 'i',
              additional_error))
            goto failure;
        
          break;
        case 'm':	/* Masks off-screen pixels so they don't show up in screenshots..  */
        
        
          if (update_arg( (void *)&(args_info->mask_arg), 
               &(args_info->mask_orig), &(args_info->mask_given),
              &(local_args_info.mask_given), optarg, cmdline_parser_mask_values, "auto", ARG_STRING,
              check_ambiguity, override, 0, 0,
              "mask", 'm',
              additional_error))
            goto failure;
        
          break;
        case 'b':	/* Set the selection rectangle's thickness. Does nothing when --highlight is enabled..  */
        
        
          if (update_arg( (void *)&(args_info->bordersize_arg), 
               &(args_info->bordersize_orig), &(args_info->bordersize_given),
              &(local_args_info.bordersize_given), optarg, 0, "5", ARG_INT,
              check_ambiguity, override, 0, 0,
              "bordersize", 'b',
              additional_error))
            goto failure;
        
          break;
        case 'p':	/* Set the padding size of the selection. Can be negative..  */
        
        
          if (update_arg( (void *)&(args_info->padding_arg), 
               &(args_info->padding_orig), &(args_info->padding_given),
              &(local_args_info.padding_given), optarg, 0, "0", ARG_INT,
              check_ambiguity, override, 0, 0,
              "padding", 'p',
              additional_error))
            goto failure;
        
          break;
        case 't':	/* How far in pixels the mouse can move after clicking and still be detected as a normal click instead of a click and drag. Setting this to 0 will disable window selections..  */
        
        
          if (update_arg( (void *)&(args_info->tolerance_arg), 
               &(args_info->tolerance_orig), &(args_info->tolerance_given),
              &(local_args_info.tolerance_given), optarg, 0, "2", ARG_INT,
              check_ambiguity, override, 0, 0,
              "tolerance", 't',
              additional_error))
            goto failure;
        
          break;
        case 'c':	/* Set the selection rectangle's color. Supports RGB or RGBA values..  */
        
        
          if (update_arg( (void *)&(args_info->color_arg), 
               &(args_info->color_orig), &(args_info->color_given),
              &(local_args_info.color_given), optarg, 0, "0.5,0.5,0.5,1", ARG_STRING,
              check_ambiguity, override, 0, 0,
              "color", 'c',
              additional_error))
            goto failure;
        
          break;
        case 'n':	/* Attempt to select child windows in order to avoid window decorations..  */
        
        
          if (update_arg((void *)&(args_info->nodecorations_flag), 0, &(args_info->nodecorations_given),
              &(local_args_info.nodecorations_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "nodecorations", 'n',
              additional_error))
            goto failure;
        
          break;
        case 'l':	/* Instead of outlining selections, slop highlights it. This is only useful when --color is set to a transparent color..  */
        
        
          if (update_arg((void *)&(args_info->highlight_flag), 0, &(args_info->highlight_given),
              &(local_args_info.highlight_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "highlight", 'l',
              additional_error))
            goto failure;
        
          break;

        case 0:	/* Long option with no short option */
          if (strcmp (long_options[option_index].name, "help") == 0) {
            cmdline_parser_print_help ();
            cmdline_parser_free (&local_args_info);
            exit (EXIT_SUCCESS);
          }

          /* Sets the x display..  */
          if (strcmp (long_options[option_index].name, "xdisplay") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->xdisplay_arg), 
                 &(args_info->xdisplay_orig), &(args_info->xdisplay_given),
                &(local_args_info.xdisplay_given), optarg, 0, ":0", ARG_STRING,
                check_ambiguity, override, 0, 0,
                "xdisplay", '-',
                additional_error))
              goto failure;
          
          }
          /* Prevents the system cursor from showing up in screenshots..  */
          else if (strcmp (long_options[option_index].name, "hidecursor") == 0)
          {
          
          
            if (update_arg((void *)&(args_info->hidecursor_flag), 0, &(args_info->hidecursor_given),
                &(local_args_info.hidecursor_given), optarg, 0, 0, ARG_FLAG,
                check_ambiguity, override, 1, 0, "hidecursor", '-',
                additional_error))
              goto failure;
          
          }
          /* Disables the ability to cancel selections with the keyboard..  */
          else if (strcmp (long_options[option_index].name, "nokeyboard") == 0)
          {
          
          
            if (update_arg((void *)&(args_info->nokeyboard_flag), 0, &(args_info->nokeyboard_given),
                &(local_args_info.nokeyboard_given), optarg, 0, 0, ARG_FLAG,
                check_ambiguity, override, 1, 0, "nokeyboard", '-',
                additional_error))
              goto failure;
          
          }
          /* Set the amount of time before slop will check for keyboard cancellations in seconds..  */
          else if (strcmp (long_options[option_index].name, "gracetime") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->gracetime_arg), 
                 &(args_info->gracetime_orig), &(args_info->gracetime_given),
                &(local_args_info.gracetime_given), optarg, 0, "0.4", ARG_STRING,
                check_ambiguity, override, 0, 0,
                "gracetime", '-',
                additional_error))
              goto failure;
          
          }
          /* Set the minimum output of width or height values. This is useful to avoid outputting 0. Setting min and max to the same value disables drag selections..  */
          else if (strcmp (long_options[option_index].name, "min") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->min_arg), 
                 &(args_info->min_orig), &(args_info->min_given),
                &(local_args_info.min_given), optarg, 0, "0", ARG_INT,
                check_ambiguity, override, 0, 0,
                "min", '-',
                additional_error))
              goto failure;
          
          }
          /* Set the maximum output of width or height values. Setting min and max to the same value disables drag selections..  */
          else if (strcmp (long_options[option_index].name, "max") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->max_arg), 
                 &(args_info->max_orig), &(args_info->max_given),
                &(local_args_info.max_given), optarg, 0, "0", ARG_INT,
                check_ambiguity, override, 0, 0,
                "max", '-',
                additional_error))
              goto failure;
          
          }
          
          break;
        case '?':	/* Invalid option.  */
          /* `getopt_long' already printed an error message.  */
          goto failure;

        default:	/* bug: option not considered.  */
          fprintf (stderr, "%s: option unknown: %c%s\n", CMDLINE_PARSER_PACKAGE, c, (additional_error ? additional_error : ""));
          abort ();
        } /* switch */
    } /* while */




  cmdline_parser_release (&local_args_info);

  if ( error_occurred )
    return (EXIT_FAILURE);

  if (optind < argc)
    {
      int i = 0 ;
      int found_prog_name = 0;
      /* whether program name, i.e., argv[0], is in the remaining args
         (this may happen with some implementations of getopt,
          but surely not with the one included by gengetopt) */

      i = optind;
      while (i < argc)
        if (argv[i++] == argv[0]) {
          found_prog_name = 1;
          break;
        }
      i = 0;

      args_info->inputs_num = argc - optind - found_prog_name;
      args_info->inputs =
        (char **)(malloc ((args_info->inputs_num)*sizeof(char *))) ;
      while (optind < argc)
        if (argv[optind++] != argv[0])
          args_info->inputs[ i++ ] = gengetopt_strdup (argv[optind-1]) ;
    }

  return 0;

failure:
  
  cmdline_parser_release (&local_args_info);
  return (EXIT_FAILURE);
}

/*
 * this was initially generated by glib-mkenums, but i stripped out all the
 * non-Error definitions, as we won't use them.
 */

#include "gperl.h"

/* --------------------------------------------------------------------------
 * --- Enums/Flags: ---------------------------------------------------------
 * -------------------------------------------------------------------------- */

GType
gperl_connect_flags_get_type (void)
{
  static GType etype = 0;
  if ( etype == 0 ) {
    static const GFlagsValue values[] = {
      { G_CONNECT_AFTER,   "G_CONNECT_AFTER",   "after" },
      { G_CONNECT_SWAPPED, "G_CONNECT_SWAPPED", "swapped" },
      { 0, NULL, NULL }
    };
    etype = g_flags_register_static ("GConnectFlags", values);
  }
  return etype;
}

/* -------------------------------------------------------------------------- */

#if GLIB_CHECK_VERSION (2, 6, 0)
GType
gperl_key_file_flags_get_type ()
{
  static GType type = 0;
  if (! type) {
    static const GFlagsValue values[] = {
      { G_KEY_FILE_NONE,              "G_KEY_FILE_NONE",              "none" },
      { G_KEY_FILE_KEEP_COMMENTS,     "G_KEY_FILE_KEEP_COMMENTS",     "keep-comments" },
      { G_KEY_FILE_KEEP_TRANSLATIONS, "G_KEY_FILE_KEEP_TRANSLATIONS", "keep-translations" },
      { 0, NULL, NULL }
    };
    type = g_flags_register_static ("GKeyFileFlags", values);
  }
  return type;
}
#endif

/* -------------------------------------------------------------------------- */

GType
gperl_log_level_flags_get_type (void)
{
  static GType etype = 0;
  if ( etype == 0 ) {
    static const GFlagsValue values[] = {
      { G_LOG_FLAG_RECURSION,  "G_LOG_FLAG_RECURSION", "recursion" },
      { G_LOG_FLAG_FATAL,      "G_LOG_FLAG_FATAL",     "fatal" },

      { G_LOG_LEVEL_ERROR,     "G_LOG_LEVEL_ERROR",    "error" },
      { G_LOG_LEVEL_CRITICAL,  "G_LOG_LEVEL_CRITICAL", "critical" },
      { G_LOG_LEVEL_WARNING,   "G_LOG_LEVEL_WARNING",  "warning" },
      { G_LOG_LEVEL_MESSAGE,   "G_LOG_LEVEL_MESSAGE",  "message" },
      { G_LOG_LEVEL_INFO,      "G_LOG_LEVEL_INFO",     "info" },
      { G_LOG_LEVEL_DEBUG,     "G_LOG_LEVEL_DEBUG",    "debug" },

      { G_LOG_FATAL_MASK,      "G_LOG_FATAL_MASK",     "fatal-mask" },

      { 0, NULL, NULL }
    };
    etype = g_flags_register_static ("GLogLevelFlags", values);
  }
  return etype;
}

/* -------------------------------------------------------------------------- */

#if GLIB_CHECK_VERSION (2, 6, 0)
GType
gperl_option_arg_get_type (void)
{
  static GType t = 0;
  if (t == 0) {
    static const GEnumValue values[] = {
      {G_OPTION_ARG_NONE,           "G_OPTION_ARG_NONE",           "none"},
      {G_OPTION_ARG_STRING,         "G_OPTION_ARG_STRING",         "string"},
      {G_OPTION_ARG_INT,            "G_OPTION_ARG_INT",            "int"},
      {G_OPTION_ARG_CALLBACK,       "G_OPTION_ARG_CALLBACK",       "callback"},
      {G_OPTION_ARG_FILENAME,       "G_OPTION_ARG_FILENAME",       "filename"},
      {G_OPTION_ARG_STRING_ARRAY,   "G_OPTION_ARG_STRING_ARRAY",   "string-array"},
      {G_OPTION_ARG_FILENAME_ARRAY, "G_OPTION_ARG_FILENAME_ARRAY", "filename-array"},
#if GLIB_CHECK_VERSION (2, 12, 0)
      {G_OPTION_ARG_DOUBLE,         "G_OPTION_ARG_DOUBLE",         "double"},
      {G_OPTION_ARG_INT64,          "G_OPTION_ARG_INT64",          "int64"},
#endif
      {0, NULL, NULL}
    };
    t = g_enum_register_static ("GOptionArg", values);
  }
  return t;
}
#endif

/* -------------------------------------------------------------------------- */

#if GLIB_CHECK_VERSION (2, 6, 0)
GType
gperl_option_flags_get_type (void)
{
  static GType t = 0;
  if (t == 0) {
    static const GFlagsValue values[] = {
      {G_OPTION_FLAG_HIDDEN,       "G_OPTION_FLAG_HIDDEN",       "hidden"},
      {G_OPTION_FLAG_IN_MAIN,      "G_OPTION_FLAG_IN_MAIN",      "in-main"},
      {G_OPTION_FLAG_REVERSE,      "G_OPTION_FLAG_REVERSE",      "reverse"},
#if GLIB_CHECK_VERSION (2, 8, 0)
      {G_OPTION_FLAG_NO_ARG,       "G_OPTION_FLAG_NO_ARG",       "no-arg"},
      {G_OPTION_FLAG_FILENAME,     "G_OPTION_FLAG_FILENAME",     "filename"},
      {G_OPTION_FLAG_OPTIONAL_ARG, "G_OPTION_FLAG_OPTIONAL_ARG", "optional-arg"},
      {G_OPTION_FLAG_NOALIAS,      "G_OPTION_FLAG_NOALIAS",      "noalias"},
#endif
      {0, NULL, NULL}
    };
    t = g_flags_register_static ("GOptionFlags", values);
  }
  return t;
}
#endif

/* -------------------------------------------------------------------------- */

/* the obvious GParamFlags is taken by GParamSpecFlags. */
GType
gperl_param_flags_get_type (void)
{
  static GType etype = 0;
  G_GNUC_BEGIN_IGNORE_DEPRECATIONS
  if (etype == 0) {
    static const GFlagsValue values[] = {
      {G_PARAM_READABLE,       "G_PARAM_READABLE",       "readable"},
      {G_PARAM_WRITABLE,       "G_PARAM_WRITABLE",       "writable"},
      {G_PARAM_CONSTRUCT,      "G_PARAM_CONSTRUCT",      "construct"},
      {G_PARAM_CONSTRUCT_ONLY, "G_PARAM_CONSTRUCT_ONLY", "construct-only"},
      {G_PARAM_LAX_VALIDATION, "G_PARAM_LAX_VALIDATION", "lax-validation"},
      {G_PARAM_PRIVATE,        "G_PARAM_PRIVATE",        "private"},
#if GLIB_CHECK_VERSION (2, 8, 0)
      {G_PARAM_STATIC_NAME,    "G_PARAM_STATIC_NAME",    "static-name"},
      {G_PARAM_STATIC_NICK,    "G_PARAM_STATIC_NICK",    "static-nick"},
      {G_PARAM_STATIC_BLURB,   "G_PARAM_STATIC_BLURB",   "static-blurb"},
#endif
#if GLIB_CHECK_VERSION (2, 42, 0)
      {G_PARAM_EXPLICIT_NOTIFY, "G_PARAM_EXPLICIT_NOTIFY", "explicit-notify"},
#endif
#if GLIB_CHECK_VERSION (2, 26, 0)
      {G_PARAM_DEPRECATED,     "G_PARAM_DEPRECATED",     "deprecated"},
#endif
      {0, NULL, NULL}
    };
    etype = g_flags_register_static ("GPerlParamFlags", values);
  }
  G_GNUC_END_IGNORE_DEPRECATIONS
  return etype;
}

/* -------------------------------------------------------------------------- */

GType
gperl_signal_flags_get_type (void)
{
  static GType etype = 0;
  if ( etype == 0 ) {
    static const GFlagsValue values[] = {
      { G_SIGNAL_RUN_FIRST,    "G_SIGNAL_RUN_FIRST",   "run-first" },
      { G_SIGNAL_RUN_LAST,     "G_SIGNAL_RUN_LAST",    "run-last" },
      { G_SIGNAL_RUN_CLEANUP,  "G_SIGNAL_RUN_CLEANUP", "run-cleanup" },
      { G_SIGNAL_NO_RECURSE,   "G_SIGNAL_NO_RECURSE",  "no-recurse" },
      { G_SIGNAL_DETAILED,     "G_SIGNAL_DETAILED",    "detailed" },
      { G_SIGNAL_ACTION,       "G_SIGNAL_ACTION",      "action" },
      { G_SIGNAL_NO_HOOKS,     "G_SIGNAL_NO_HOOKS",    "no-hooks" },
      { 0, NULL, NULL }
    };
    etype = g_flags_register_static ("GSignalFlags", values);
  }
  return etype;
}

/* -------------------------------------------------------------------------- */

GType
gperl_spawn_flags_get_type (void)
{
  static GType etype = 0;
  if (G_UNLIKELY(etype == 0)) {
    static const GFlagsValue values[] = {
#if GLIB_CHECK_VERSION (2, 38, 0)
      { G_SPAWN_DEFAULT, "G_SPAWN_DEFAULT", "default" },
#endif
      { G_SPAWN_LEAVE_DESCRIPTORS_OPEN, "G_SPAWN_LEAVE_DESCRIPTORS_OPEN", "leave-descriptors-open" },
      { G_SPAWN_DO_NOT_REAP_CHILD, "G_SPAWN_DO_NOT_REAP_CHILD", "do-not-reap-child" },
      { G_SPAWN_SEARCH_PATH, "G_SPAWN_SEARCH_PATH", "search-path" },
      { G_SPAWN_STDOUT_TO_DEV_NULL, "G_SPAWN_STDOUT_TO_DEV_NULL", "stdout-to-dev-null" },
      { G_SPAWN_STDERR_TO_DEV_NULL, "G_SPAWN_STDERR_TO_DEV_NULL", "stderr-to-dev-null" },
      { G_SPAWN_CHILD_INHERITS_STDIN, "G_SPAWN_CHILD_INHERITS_STDIN", "child-inherits-stdin" },
      { G_SPAWN_FILE_AND_ARGV_ZERO, "G_SPAWN_FILE_AND_ARGV_ZERO", "file-and-argv-zero" },
#if GLIB_CHECK_VERSION (2, 34, 0)
      { G_SPAWN_SEARCH_PATH_FROM_ENVP, "G_SPAWN_SEARCH_PATH_FROM_ENVP", "search-path-from-envp" },
#endif
      { 0, NULL, NULL }
    };
    etype = g_flags_register_static (g_intern_static_string ("GSpawnFlags"), values);
  }
  return etype;
}

/* -------------------------------------------------------------------------- */

#if GLIB_CHECK_VERSION (2, 14, 0)
GType gperl_user_directory_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { G_USER_DIRECTORY_DESKTOP, "G_USER_DIRECTORY_DESKTOP", "desktop" },
      { G_USER_DIRECTORY_DOCUMENTS, "G_USER_DIRECTORY_DOCUMENTS", "documents" },
      { G_USER_DIRECTORY_DOWNLOAD, "G_USER_DIRECTORY_DOWNLOAD", "download" },
      { G_USER_DIRECTORY_MUSIC, "G_USER_DIRECTORY_MUSIC", "music" },
      { G_USER_DIRECTORY_PICTURES, "G_USER_DIRECTORY_PICTURES", "pictures" },
      { G_USER_DIRECTORY_PUBLIC_SHARE, "G_USER_DIRECTORY_PUBLIC_SHARE", "public-share" },
      { G_USER_DIRECTORY_TEMPLATES, "G_USER_DIRECTORY_TEMPLATES", "templates" },
      { G_USER_DIRECTORY_VIDEOS, "G_USER_DIRECTORY_VIDEOS", "videos" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("GUserDirectory", values);
  }
  return etype;
}
#endif

/* --------------------------------------------------------------------------
 * --- Error values: --------------------------------------------------------
 * -------------------------------------------------------------------------- */

static const GEnumValue _gperl_convert_error_values[] = {
  { G_CONVERT_ERROR_NO_CONVERSION, "G_CONVERT_ERROR_NO_CONVERSION", "no-conversion" },
  { G_CONVERT_ERROR_ILLEGAL_SEQUENCE, "G_CONVERT_ERROR_ILLEGAL_SEQUENCE", "illegal-sequence" },
  { G_CONVERT_ERROR_FAILED, "G_CONVERT_ERROR_FAILED", "failed" },
  { G_CONVERT_ERROR_PARTIAL_INPUT, "G_CONVERT_ERROR_PARTIAL_INPUT", "partial-input" },
  { G_CONVERT_ERROR_BAD_URI, "G_CONVERT_ERROR_BAD_URI", "bad-uri" },
  { G_CONVERT_ERROR_NOT_ABSOLUTE_PATH, "G_CONVERT_ERROR_NOT_ABSOLUTE_PATH", "not-absolute-path" },
  { 0, NULL, NULL }
};

GType
gperl_convert_error_get_type (void)
{
  static GType type = 0;

  if (!type)
    type = g_enum_register_static ("GConvertError", _gperl_convert_error_values);

  return type;
}

/* -------------------------------------------------------------------------- */

static const GEnumValue _gperl_file_error_values[] = {
  { G_FILE_ERROR_EXIST, "G_FILE_ERROR_EXIST", "exist" },
  { G_FILE_ERROR_ISDIR, "G_FILE_ERROR_ISDIR", "isdir" },
  { G_FILE_ERROR_ACCES, "G_FILE_ERROR_ACCES", "acces" },
  { G_FILE_ERROR_NAMETOOLONG, "G_FILE_ERROR_NAMETOOLONG", "nametoolong" },
  { G_FILE_ERROR_NOENT, "G_FILE_ERROR_NOENT", "noent" },
  { G_FILE_ERROR_NOTDIR, "G_FILE_ERROR_NOTDIR", "notdir" },
  { G_FILE_ERROR_NXIO, "G_FILE_ERROR_NXIO", "nxio" },
  { G_FILE_ERROR_NODEV, "G_FILE_ERROR_NODEV", "nodev" },
  { G_FILE_ERROR_ROFS, "G_FILE_ERROR_ROFS", "rofs" },
  { G_FILE_ERROR_TXTBSY, "G_FILE_ERROR_TXTBSY", "txtbsy" },
  { G_FILE_ERROR_FAULT, "G_FILE_ERROR_FAULT", "fault" },
  { G_FILE_ERROR_LOOP, "G_FILE_ERROR_LOOP", "loop" },
  { G_FILE_ERROR_NOSPC, "G_FILE_ERROR_NOSPC", "nospc" },
  { G_FILE_ERROR_NOMEM, "G_FILE_ERROR_NOMEM", "nomem" },
  { G_FILE_ERROR_MFILE, "G_FILE_ERROR_MFILE", "mfile" },
  { G_FILE_ERROR_NFILE, "G_FILE_ERROR_NFILE", "nfile" },
  { G_FILE_ERROR_BADF, "G_FILE_ERROR_BADF", "badf" },
  { G_FILE_ERROR_INVAL, "G_FILE_ERROR_INVAL", "inval" },
  { G_FILE_ERROR_PIPE, "G_FILE_ERROR_PIPE", "pipe" },
  { G_FILE_ERROR_AGAIN, "G_FILE_ERROR_AGAIN", "again" },
  { G_FILE_ERROR_INTR, "G_FILE_ERROR_INTR", "intr" },
  { G_FILE_ERROR_IO, "G_FILE_ERROR_IO", "io" },
  { G_FILE_ERROR_PERM, "G_FILE_ERROR_PERM", "perm" },
  { G_FILE_ERROR_FAILED, "G_FILE_ERROR_FAILED", "failed" },
  { 0, NULL, NULL }
};

GType
gperl_file_error_get_type (void)
{
  static GType type = 0;

  if (!type)
    type = g_enum_register_static ("GFileError", _gperl_file_error_values);

  return type;
}

#define GPERL_TYPE_FILE_ERROR gperl_file_error_get_type()
GType gperl_file_error_get_type (void);

/* -------------------------------------------------------------------------- */

static const GEnumValue _gperl_io_error_values[] = {
  { G_IO_ERROR_NONE, "G_IO_ERROR_NONE", "none" },
  { G_IO_ERROR_AGAIN, "G_IO_ERROR_AGAIN", "again" },
  { G_IO_ERROR_INVAL, "G_IO_ERROR_INVAL", "inval" },
  { G_IO_ERROR_UNKNOWN, "G_IO_ERROR_UNKNOWN", "unknown" },
  { 0, NULL, NULL }
};

GType
gperl_io_error_get_type (void)
{
  static GType type = 0;

  if (!type)
    type = g_enum_register_static ("GIOError", _gperl_io_error_values);

  return type;
}

#define GPERL_TYPE_IO_ERROR gperl_io_error_get_type()
GType gperl_io_error_get_type (void);

/* -------------------------------------------------------------------------- */

static const GEnumValue _gperl_io_channel_error_values[] = {
  { G_IO_CHANNEL_ERROR_FBIG, "G_IO_CHANNEL_ERROR_FBIG", "fbig" },
  { G_IO_CHANNEL_ERROR_INVAL, "G_IO_CHANNEL_ERROR_INVAL", "inval" },
  { G_IO_CHANNEL_ERROR_IO, "G_IO_CHANNEL_ERROR_IO", "io" },
  { G_IO_CHANNEL_ERROR_ISDIR, "G_IO_CHANNEL_ERROR_ISDIR", "isdir" },
  { G_IO_CHANNEL_ERROR_NOSPC, "G_IO_CHANNEL_ERROR_NOSPC", "nospc" },
  { G_IO_CHANNEL_ERROR_NXIO, "G_IO_CHANNEL_ERROR_NXIO", "nxio" },
  { G_IO_CHANNEL_ERROR_OVERFLOW, "G_IO_CHANNEL_ERROR_OVERFLOW", "overflow" },
  { G_IO_CHANNEL_ERROR_PIPE, "G_IO_CHANNEL_ERROR_PIPE", "pipe" },
  { G_IO_CHANNEL_ERROR_FAILED, "G_IO_CHANNEL_ERROR_FAILED", "failed" },
  { 0, NULL, NULL }
};

GType
gperl_io_channel_error_get_type (void)
{
  static GType type = 0;

  if (!type)
    type = g_enum_register_static ("GIOChannelError", _gperl_io_channel_error_values);

  return type;
}

#define GPERL_TYPE_IO_CHANNEL_ERROR gperl_io_channel_error_get_type()
GType gperl_io_channel_error_get_type (void);

/* -------------------------------------------------------------------------- */

#if GLIB_CHECK_VERSION (2, 6, 0)
static const GEnumValue _gperl_key_file_error_values[] = {
  { G_KEY_FILE_ERROR_UNKNOWN_ENCODING, "G_KEY_FILE_ERROR_UNKNOWN_ENCODING", "unknwon-encoding" },
  { G_KEY_FILE_ERROR_PARSE, "G_KEY_FILE_ERROR_PARSE", "parse" },
  { G_KEY_FILE_ERROR_NOT_FOUND, "G_KEY_FILE_ERROR_NOT_FOUND", "not-found" },
  { G_KEY_FILE_ERROR_KEY_NOT_FOUND, "G_KEY_FILE_ERROR_KEY_NOT_FOUND", "key-not-found" },
  { G_KEY_FILE_ERROR_GROUP_NOT_FOUND, "G_KEY_FILE_ERROR_GROUP_NOT_FOUND", "group-not-found" },
  { G_KEY_FILE_ERROR_INVALID_VALUE, "G_KEY_FILE_ERROR_INVALID_VALUE", "invalid-value" },
  { 0, NULL, NULL }
};

GType
gperl_key_file_error_get_type (void)
{
  static GType type = 0;

  if (!type)
    type = g_enum_register_static ("GKeyFileError", _gperl_key_file_error_values);

  return type;
}

#define GPERL_TYPE_KEY_FILE_ERROR gperl_key_file_error_get_type()
GType gperl_key_file_error_get_type (void);
#endif /* GLIB_CHECK_VERSION (2, 6, 0) */

/* -------------------------------------------------------------------------- */

#if GLIB_CHECK_VERSION (2, 12, 0)
static const GEnumValue _gperl_bookmark_file_error_values[] = {
  { G_BOOKMARK_FILE_ERROR_INVALID_URI, "G_BOOKMARK_FILE_ERROR_INVALID_URI", "invalid-uri" },
  { G_BOOKMARK_FILE_ERROR_INVALID_VALUE, "G_BOOKMARK_FILE_ERROR_INVALID_VALUE", "invalid-value" },
  { G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED, "G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED", "not-registered" },
  { G_BOOKMARK_FILE_ERROR_URI_NOT_FOUND, "G_BOOKMARK_FILE_ERROR_URI_NOT_FOUND", "uri-not-found" },
  { G_BOOKMARK_FILE_ERROR_READ, "G_BOOKMARK_FILE_ERROR_URI_NOT_FOUND", "read" },
  { G_BOOKMARK_FILE_ERROR_UNKNOWN_ENCODING, "G_BOOKMARK_FILE_ERROR_UNKNOWN_ENCODING", "unknown-encoding" },
  { G_BOOKMARK_FILE_ERROR_WRITE, "G_BOOKMARK_FILE_ERROR_WRITE", "write" },
  { G_BOOKMARK_FILE_ERROR_FILE_NOT_FOUND, "G_BOOKMARK_FILE_ERROR_FILE_NOT_FOUND", "not-found" },
  { 0, NULL, NULL },
};

GType
gperl_bookmark_file_error_get_type (void)
{
  static GType type = 0;

  if (!type)
    type = g_enum_register_static ("GBookmarkFileError", _gperl_bookmark_file_error_values);

  return type;
}

#define GPERL_TYPE_BOOKMARK_FILE_ERROR gperl_bookmark_file_error_get_type()
GType gperl_bookmark_file_error_get_type (void);
#endif /* GLIB_CHECK_VERSION (2, 12, 0) */

/* -------------------------------------------------------------------------- */

static const GEnumValue _gperl_markup_error_values[] = {
  { G_MARKUP_ERROR_BAD_UTF8, "G_MARKUP_ERROR_BAD_UTF8", "bad-utf8" },
  { G_MARKUP_ERROR_EMPTY, "G_MARKUP_ERROR_EMPTY", "empty" },
  { G_MARKUP_ERROR_PARSE, "G_MARKUP_ERROR_PARSE", "parse" },
  { G_MARKUP_ERROR_UNKNOWN_ELEMENT, "G_MARKUP_ERROR_UNKNOWN_ELEMENT", "unknown-element" },
  { G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE, "G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE", "unknown-attribute" },
  { G_MARKUP_ERROR_INVALID_CONTENT, "G_MARKUP_ERROR_INVALID_CONTENT", "invalid-content" },
  { 0, NULL, NULL }
};

GType
gperl_markup_error_get_type (void)
{
  static GType type = 0;

  if (!type)
    type = g_enum_register_static ("GMarkupError", _gperl_markup_error_values);

  return type;
}

#define GPERL_TYPE_MARKUP_ERROR gperl_markup_error_get_type()
GType gperl_markup_error_get_type (void);

/* -------------------------------------------------------------------------- */

static const GEnumValue _gperl_shell_error_values[] = {
  { G_SHELL_ERROR_BAD_QUOTING, "G_SHELL_ERROR_BAD_QUOTING", "bad-quoting" },
  { G_SHELL_ERROR_EMPTY_STRING, "G_SHELL_ERROR_EMPTY_STRING", "empty-string" },
  { G_SHELL_ERROR_FAILED, "G_SHELL_ERROR_FAILED", "failed" },
  { 0, NULL, NULL }
};

GType
gperl_shell_error_get_type (void)
{
  static GType type = 0;

  if (!type)
    type = g_enum_register_static ("GShellError", _gperl_shell_error_values);

  return type;
}

#define GPERL_TYPE_SHELL_ERROR gperl_shell_error_get_type()
GType gperl_shell_error_get_type (void);

/* -------------------------------------------------------------------------- */

G_GNUC_BEGIN_IGNORE_DEPRECATIONS
static const GEnumValue _gperl_spawn_error_values[] = {
  { G_SPAWN_ERROR_FORK, "G_SPAWN_ERROR_FORK", "fork" },
  { G_SPAWN_ERROR_READ, "G_SPAWN_ERROR_READ", "read" },
  { G_SPAWN_ERROR_CHDIR, "G_SPAWN_ERROR_CHDIR", "chdir" },
  { G_SPAWN_ERROR_ACCES, "G_SPAWN_ERROR_ACCES", "acces" },
  { G_SPAWN_ERROR_PERM, "G_SPAWN_ERROR_PERM", "perm" },
#if GLIB_CHECK_VERSION (2, 32, 0)
  { G_SPAWN_ERROR_TOO_BIG, "G_SPAWN_ERROR_TOO_BIG", "too-big" },
#endif
  { G_SPAWN_ERROR_2BIG, "G_SPAWN_ERROR_2BIG", "2big" },
  { G_SPAWN_ERROR_NOEXEC, "G_SPAWN_ERROR_NOEXEC", "noexec" },
  { G_SPAWN_ERROR_NAMETOOLONG, "G_SPAWN_ERROR_NAMETOOLONG", "nametoolong" },
  { G_SPAWN_ERROR_NOENT, "G_SPAWN_ERROR_NOENT", "noent" },
  { G_SPAWN_ERROR_NOMEM, "G_SPAWN_ERROR_NOMEM", "nomem" },
  { G_SPAWN_ERROR_NOTDIR, "G_SPAWN_ERROR_NOTDIR", "notdir" },
  { G_SPAWN_ERROR_LOOP, "G_SPAWN_ERROR_LOOP", "loop" },
  { G_SPAWN_ERROR_TXTBUSY, "G_SPAWN_ERROR_TXTBUSY", "txtbusy" },
  { G_SPAWN_ERROR_IO, "G_SPAWN_ERROR_IO", "io" },
  { G_SPAWN_ERROR_NFILE, "G_SPAWN_ERROR_NFILE", "nfile" },
  { G_SPAWN_ERROR_MFILE, "G_SPAWN_ERROR_MFILE", "mfile" },
  { G_SPAWN_ERROR_INVAL, "G_SPAWN_ERROR_INVAL", "inval" },
  { G_SPAWN_ERROR_ISDIR, "G_SPAWN_ERROR_ISDIR", "isdir" },
  { G_SPAWN_ERROR_LIBBAD, "G_SPAWN_ERROR_LIBBAD", "libbad" },
  { G_SPAWN_ERROR_FAILED, "G_SPAWN_ERROR_FAILED", "failed" },
  { 0, NULL, NULL }
};
G_GNUC_END_IGNORE_DEPRECATIONS

GType
gperl_spawn_error_get_type (void)
{
  static GType type = 0;

  if (!type)
    type = g_enum_register_static ("GSpawnError", _gperl_spawn_error_values);

  return type;
}

#define GPERL_TYPE_SPAWN_ERROR gperl_spawn_error_get_type()
GType gperl_spawn_error_get_type (void);

/* -------------------------------------------------------------------------- */

static const GEnumValue _gperl_thread_error_values[] = {
  { G_THREAD_ERROR_AGAIN, "G_THREAD_ERROR_AGAIN", "again" },
  { 0, NULL, NULL }
};

GType
gperl_thread_error_get_type (void)
{
  static GType type = 0;

  if (!type)
    type = g_enum_register_static ("GThreadError", _gperl_thread_error_values);

  return type;
}

#define GPERL_TYPE_THREAD_ERROR gperl_thread_error_get_type()
GType gperl_thread_error_get_type (void);

/* -------------------------------------------------------------------------- */

/* The enum in its current form was added later than GVariant itself. */
#if GLIB_CHECK_VERSION (2, 28, 0)

GType
gperl_variant_parse_error_get_type (void)
{
  static GType type = 0;

  if (!type) {
    static const GEnumValue values[] = {
      { G_VARIANT_PARSE_ERROR_FAILED, "G_VARIANT_PARSE_ERROR_FAILED", "failed" },
      { G_VARIANT_PARSE_ERROR_BASIC_TYPE_EXPECTED, "G_VARIANT_PARSE_ERROR_BASIC_TYPE_EXPECTED", "basic-type-expected" },
      { G_VARIANT_PARSE_ERROR_CANNOT_INFER_TYPE, "G_VARIANT_PARSE_ERROR_CANNOT_INFER_TYPE", "cannot-infer-type" },
      { G_VARIANT_PARSE_ERROR_DEFINITE_TYPE_EXPECTED, "G_VARIANT_PARSE_ERROR_DEFINITE_TYPE_EXPECTED", "definite-type-expected" },
      { G_VARIANT_PARSE_ERROR_INPUT_NOT_AT_END, "G_VARIANT_PARSE_ERROR_INPUT_NOT_AT_END", "input-not-at-end" },
      { G_VARIANT_PARSE_ERROR_INVALID_CHARACTER, "G_VARIANT_PARSE_ERROR_INVALID_CHARACTER", "invalid-character" },
      { G_VARIANT_PARSE_ERROR_INVALID_FORMAT_STRING, "G_VARIANT_PARSE_ERROR_INVALID_FORMAT_STRING", "invalid-format-string" },
      { G_VARIANT_PARSE_ERROR_INVALID_OBJECT_PATH, "G_VARIANT_PARSE_ERROR_INVALID_OBJECT_PATH", "invalid-object-path" },
      { G_VARIANT_PARSE_ERROR_INVALID_SIGNATURE, "G_VARIANT_PARSE_ERROR_INVALID_SIGNATURE", "invalid-signature" },
      { G_VARIANT_PARSE_ERROR_INVALID_TYPE_STRING, "G_VARIANT_PARSE_ERROR_INVALID_TYPE_STRING", "invalid-type-string" },
      { G_VARIANT_PARSE_ERROR_NO_COMMON_TYPE, "G_VARIANT_PARSE_ERROR_NO_COMMON_TYPE", "no-common-type" },
      { G_VARIANT_PARSE_ERROR_NUMBER_OUT_OF_RANGE, "G_VARIANT_PARSE_ERROR_NUMBER_OUT_OF_RANGE", "number-out-of-range" },
      { G_VARIANT_PARSE_ERROR_NUMBER_TOO_BIG, "G_VARIANT_PARSE_ERROR_NUMBER_TOO_BIG", "number-too-big" },
      { G_VARIANT_PARSE_ERROR_TYPE_ERROR, "G_VARIANT_PARSE_ERROR_TYPE_ERROR", "type-error" },
      { G_VARIANT_PARSE_ERROR_UNEXPECTED_TOKEN, "G_VARIANT_PARSE_ERROR_UNEXPECTED_TOKEN", "unexpected-token" },
      { G_VARIANT_PARSE_ERROR_UNKNOWN_KEYWORD, "G_VARIANT_PARSE_ERROR_UNKNOWN_KEYWORD", "unknown-keyword" },
      { G_VARIANT_PARSE_ERROR_UNTERMINATED_STRING_CONSTANT, "G_VARIANT_PARSE_ERROR_UNTERMINATED_STRING_CONSTANT", "unterminated-string-constant" },
      { G_VARIANT_PARSE_ERROR_VALUE_EXPECTED, "G_VARIANT_PARSE_ERROR_VALUE_EXPECTED", "value-expected" },
      { 0, NULL, NULL }
    };
    type = g_enum_register_static ("GVariantParseError", values);
  }

  return type;
}

#endif
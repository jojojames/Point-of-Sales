/* confdefs.h.  */
#define PACKAGE_NAME "PostgreSQL"
#define PACKAGE_TARNAME "postgresql"
#define PACKAGE_VERSION "9.1.1"
#define PACKAGE_STRING "PostgreSQL 9.1.1"
#define PACKAGE_BUGREPORT "pgsql-bugs@postgresql.org"
#define PG_VERSION "9.1.1"
#define PG_MAJORVERSION "9.1"
#define USE_INTEGER_DATETIMES 1
#define DEF_PGPORT 5432
#define DEF_PGPORT_STR "5432"
#define BLCKSZ 8192
#define RELSEG_SIZE 131072
#define XLOG_BLCKSZ 8192
#define XLOG_SEG_SIZE (16 * 1024 * 1024)
#define ENABLE_THREAD_SAFETY 1
#define PG_KRB_SRVNAM "postgres"
#define HAVE_LIBM 1
#define HAVE_LIBREADLINE 1
#define HAVE_LIBZ 1
#define HAVE_SPINLOCKS 1
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define HAVE_GETOPT_H 1
#define HAVE_IFADDRS_H 1
#define HAVE_LANGINFO_H 1
#define HAVE_POLL_H 1
#define HAVE_PWD_H 1
#define HAVE_SYS_IOCTL_H 1
#define HAVE_SYS_IPC_H 1
#define HAVE_SYS_POLL_H 1
#define HAVE_SYS_RESOURCE_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_SYS_SEM_H 1
#define HAVE_SYS_SHM_H 1
#define HAVE_SYS_SOCKET_H 1
#define HAVE_SYS_SOCKIO_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_UCRED_H 1
#define HAVE_SYS_UN_H 1
#define HAVE_TERMIOS_H 1
#define HAVE_UTIME_H 1
#define HAVE_WCHAR_H 1
#define HAVE_WCTYPE_H 1
#define HAVE_NET_IF_H 1
#define HAVE_NETINET_IN_H 1
#define HAVE_NETINET_TCP_H 1
#define HAVE_READLINE_READLINE_H 1
#define HAVE_READLINE_HISTORY_H 1
#define USE_INLINE 1
#define HAVE_STRINGIZE 1
#define HAVE_FUNCNAME__FUNC 1
#define HAVE_STRUCT_TM_TM_ZONE 1
#define HAVE_TM_ZONE 1
#define HAVE_TZNAME 1
#define HAVE_UNION_SEMUN 1
#define HAVE_STRUCT_SOCKADDR_UN 1
#define HAVE_UNIX_SOCKETS 1
#define HAVE_STRUCT_SOCKADDR_STORAGE 1
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_LEN 1
#define HAVE_STRUCT_SOCKADDR_SA_LEN 1
#define HAVE_STRUCT_ADDRINFO 1
#define HAVE_INTPTR_T 1
#define HAVE_UINTPTR_T 1
#define HAVE_LONG_LONG_INT 1
#define HAVE_LOCALE_T 1
#define LOCALE_T_IN_XLOCALE 1
#define HAVE_STRUCT_OPTION 1
#define SIZEOF_OFF_T 8
#define HAVE_INT_TIMEZONE /**/
#define ACCEPT_TYPE_RETURN int
#define ACCEPT_TYPE_ARG1 int
#define ACCEPT_TYPE_ARG2 struct sockaddr *
#define ACCEPT_TYPE_ARG3 socklen_t
#define HAVE_CBRT 1
#define HAVE_DLOPEN 1
#define HAVE_FCVT 1
#define HAVE_FDATASYNC 1
#define HAVE_GETIFADDRS 1
#define HAVE_GETRLIMIT 1
#define HAVE_MEMMOVE 1
#define HAVE_POLL 1
#define HAVE_READLINK 1
#define HAVE_SCANDIR 1
#define HAVE_SETSID 1
#define HAVE_SIGPROCMASK 1
#define HAVE_SYMLINK 1
#define HAVE_SYSCONF 1
#define HAVE_TOWLOWER 1
#define HAVE_UTIME 1
/* end confdefs.h.  */
/* Define utimes to an innocuous variant, in case <limits.h> declares utimes.
   For example, HP-UX 11i <limits.h> declares gettimeofday.  */
#define utimes innocuous_utimes

/* System header to define __stub macros and hopefully few prototypes,
    which can conflict with char utimes (); below.
    Prefer <limits.h> to <assert.h> if __STDC__ is defined, since
    <limits.h> exists even on freestanding compilers.  */

#ifdef __STDC__
# include <limits.h>
#else
# include <assert.h>
#endif

#undef utimes

/* Override any GCC internal prototype to avoid an error.
   Use char because int might match the return type of a GCC
   builtin and then its argument prototype would still apply.  */
#ifdef __cplusplus
extern "C"
#endif
char utimes ();
/* The GNU C library defines this for functions which it implements
    to always fail with ENOSYS.  Some functions are actually named
    something starting with __ and the normal name is an alias.  */
#if defined __stub_utimes || defined __stub___utimes
choke me
#endif

int
main ()
{
return utimes ();
  ;
  return 0;
}
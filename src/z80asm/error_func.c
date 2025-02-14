/* generated by Template::Toolkit - do not edit */

#include "errors.h"
#include "error_func.h"
#include "str.h"
#include <stdio.h>
#include <stdlib.h>

void error_read_file(const char *filename)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "cannot read file '%s'", filename );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_write_file(const char *filename)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "cannot write file '%s'", filename );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_include_recursion(const char *filename)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "cannot include file '%s' recursively", filename );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_no_src_file(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "source file missing" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_illegal_option(const char *option)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "illegal option: %s", option );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_glob(const char *filename, const char *error)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "problem with '%s': %s", filename, error );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_glob_no_files(const char *filename)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "pattern '%s' returned no files", filename );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_not_regular_file(const char *filename)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "file '%s' is not a regular file", filename );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void warn_symbol_different(const char *name, const char *used)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "symbol '%s' used as '%s'", name, used );
	do_error( ErrWarn, Str_data(msg) );
	
	STR_DELETE(msg);
}
void warn_expr_in_parens(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "interpreting indirect value as immediate" );
	do_error( ErrWarn, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_redefined_macro(const char *name)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "macro '%s' redefined", name );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_syntax(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "syntax error" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_syntax_expr(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "syntax error in expression" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_invalid_squoted_string(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "invalid single quoted character" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_unclosed_string(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "unclosed quoted string" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_string_too_long(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "string longer than reserved space" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_divide_by_zero(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "division by zero" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_missing_block(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "missing {} block" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_missing_close_block(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "{} block not closed" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_unbalanced_struct_at(const char *filename, int line_nr)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "unbalanced control structure started at file '%s' line %d", filename, line_nr );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_unbalanced_struct(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "unbalanced control structure" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_not_defined(const char *name)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "symbol '%s' not defined", name );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_illegal_ident(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "illegal identifier" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_jr_not_local(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "relative jump address must be local" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_expected_const_expr(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "expected constant expression" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_symbol_redefined(const char *symbol)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "symbol '%s' already defined", symbol );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_symbol_redefined_module(const char *symbol, const char *module)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "symbol '%s' already defined in module '%s'", symbol, module );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_symbol_decl_local(const char *symbol)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "symbol '%s' already declared local", symbol );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_symbol_redecl(const char *symbol)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "re-declaration of '%s' not allowed", symbol );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_expression_recursion(const char *name)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "expression for '%s' depends on itself", name );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_max_codesize(long size)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "max. code size of %ld bytes reached", size );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_org_redefined(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "ORG redefined" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_align_redefined(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "ALIGN redefined" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_org_not_aligned(int org, int align)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "ORG '0x%04X' not ALIGNed '%d'", org, align );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_invalid_org_option(const char *org_hex)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "invalid origin (-r) option '%s'", org_hex );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_invalid_define_option(const char *define)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "invalid -DVAR=VAL option '%s'", define );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_invalid_org(int origin)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "invalid origin: %d", origin );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_invalid_filler_option(const char *filler_hex)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "invalid filler value: %s", filler_hex );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void warn_org_ignored(const char *filename, const char *section_name)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "ORG ignored at file '%s', section '%s'", filename, section_name );
	do_error( ErrWarn, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_not_obj_file(const char *filename)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "file '%s' not an object file", filename );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_obj_file_version(const char *filename, int found_version, int expected_version)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "object file '%s' version %d, expected version %d", filename, found_version, expected_version );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_not_lib_file(const char *filename)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "file '%s' not a library file", filename );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_lib_file_version(const char *filename, int found_version, int expected_version)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "library file '%s' version %d, expected version %d", filename, found_version, expected_version );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void warn_int_range(long value)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "integer '%ld' out of range", value );
	do_error( ErrWarn, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_int_range(long value)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "integer '%ld' out of range", value );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_base_register_illegal(long value)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "base register byte '%ld' is illegal", value );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_missing_arguments(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "DMA missing register group member(s)" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_extra_arguments(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "DMA too many arguments" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_port_A_timing(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "port A timing is illegal" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_dma_unsupported_interrupts(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "DMA does not support interrupts" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_dma_illegal_mode(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "DMA mode is illegal" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_dma_illegal_command(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "illegal DMA command" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_dma_illegal_read_mask(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "DMA read mask is illegal" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_port_B_timing(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "port B timing is illegal" );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}
void warn_dma_unsupported_features(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "DMA does not support some features" );
	do_error( ErrWarn, Str_data(msg) );
	
	STR_DELETE(msg);
}
void warn_dma_unsupported_command(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "DMA does not implement this command" );
	do_error( ErrWarn, Str_data(msg) );
	
	STR_DELETE(msg);
}
void warn_dma_half_cycle_timing(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "DMA does not support half cycle timing" );
	do_error( ErrWarn, Str_data(msg) );
	
	STR_DELETE(msg);
}
void warn_dma_ready_signal_unsupported(void)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "DMA does not support ready signals" );
	do_error( ErrWarn, Str_data(msg) );
	
	STR_DELETE(msg);
}
void error_cmd_failed(const char *cmd)
{
	STR_DEFINE(msg, STR_SIZE);

	Str_append_sprintf( msg, "command '%s' failed", cmd );
	do_error( ErrError, Str_data(msg) );
	
	STR_DELETE(msg);
}

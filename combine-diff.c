#include "xdiff/xmacros.h"
static int match_string_spaces(const char *line1, int len1,
			       const char *line2, int len2,
			       long flags)
{
	if (flags & XDF_WHITESPACE_FLAGS) {
		for (; len1 > 0 && XDL_ISSPACE(line1[len1 - 1]); len1--);
		for (; len2 > 0 && XDL_ISSPACE(line2[len2 - 1]); len2--);
	}

	if (!(flags & (XDF_IGNORE_WHITESPACE | XDF_IGNORE_WHITESPACE_CHANGE)))
		return (len1 == len2 && !memcmp(line1, line2, len1));

	while (len1 > 0 && len2 > 0) {
		len1--;
		len2--;
		if (XDL_ISSPACE(line1[len1]) || XDL_ISSPACE(line2[len2])) {
			if ((flags & XDF_IGNORE_WHITESPACE_CHANGE) &&
			    (!XDL_ISSPACE(line1[len1]) || !XDL_ISSPACE(line2[len2])))
				return 0;

			for (; len1 > 0 && XDL_ISSPACE(line1[len1]); len1--);
			for (; len2 > 0 && XDL_ISSPACE(line2[len2]); len2--);
		}
		if (line1[len1] != line2[len2])
			return 0;
	}

	if (flags & XDF_IGNORE_WHITESPACE) {
		/* Consume remaining spaces */
		for (; len1 > 0 && XDL_ISSPACE(line1[len1 - 1]); len1--);
		for (; len2 > 0 && XDL_ISSPACE(line2[len2 - 1]); len2--);
	}

	/* We matched full line1 and line2 */
	if (!len1 && !len2)
		return 1;

	return 0;
}

static void append_lost(struct sline *sline, int n, const char *line, int len, long flags)
			if (match_string_spaces(lline->line, lline->len,
						line, len, flags)) {
	long flags;
		append_lost(state->lost_bucket, state->n, line+1, len-1, state->flags);
			 const char *path, long flags)
	xpp.flags = flags;
	state.flags = flags;
static void dump_sline(struct sline *sline, const char *line_prefix,
		       unsigned long cnt, int num_parent,
		printf("%s%s", line_prefix, c_frag);
				printf("%s%s", line_prefix, c_old);
			fputs(line_prefix, stdout);
			     const char *line_prefix,
	strbuf_addstr(&buf, line_prefix);
				 const char *line_prefix,
			 "", elem->path, line_prefix, c_meta, c_reset);
	printf("%s%sindex ", line_prefix, c_meta);
			printf("%s%snew file mode %06o",
			       line_prefix, c_meta, elem->mode);
				printf("%s%sdeleted file ",
				       line_prefix, c_meta);
				 line_prefix, c_meta, c_reset);
				 line_prefix, c_meta, c_reset);
				 line_prefix, c_meta, c_reset);
				 line_prefix, c_meta, c_reset);
	const char *line_prefix = diff_line_prefix(opt);
				     line_prefix, mode_differs, 0);
				     textconv, elem->path, opt->xdl_opts);
				     line_prefix, mode_differs, 1);
		dump_sline(sline, line_prefix, cnt, num_parent,
	const char *line_prefix = diff_line_prefix(opt);

		printf("%s", line_prefix);



				printf("%s%c", diff_line_prefix(opt),
				       opt->line_termination);
				printf("%s%c", diff_line_prefix(opt),
				       opt->line_termination);
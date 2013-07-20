########################################################### -*- Makefile -*- ##
## $Id: Makefile.am 551 2005-07-08 21:58:00Z mdeters $
###############################################################################

pkgdocdocsdir = $(datadir)/doc/$(PACKAGE)/docs

nobase_dist_pkgdocdocs_DATA = \
	index.html

EXTRA_DIST = \
	api/index.html

install-data-local:
	for file in `find api -type f \! -path '*/.svn/*'`; do \
		$(top_builddir)/install-sh -d "`dirname "$$file"`"; \
		$(top_builddir)/install-sh -m 644 "$$file" "$(pkgdocdocsdir)/$$file"; \
	done

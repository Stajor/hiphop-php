###############################################################################
#
# Predefined Targets
#
# Author: hzhao (09/2007)
#
###############################################################################
#
# This file is included as sub-make in rules.mk. It is slower than defining
# these targets inline in each Makefile, but it just saves a lot of work
# preparing these targets for each directory.

unexport SUB_CLEAN_DIRS

# delete all intermediate files and built targets
.PHONY: clobber
clobber:
	$(V)$(RM) $(SUB_INTERMEDIATE_FILES) $(SUB_OBJECTS) $(SUB_OBJECTS:.o=.d)
	$(V)$(RM) *.merge-left.* *.merge-right.* *.working www.pid
	$(V)$(RM) $(OUT_DIR)lib$(PROJECT_NAME).so $(OUT_DIR)lib$(PROJECT_NAME).a
	$(V)$(RM) $(filter-out $(SUB_PROGRAMS) $(SUB_LIB_TARGETS), $(TARGETS))
	$(V)$(RM) $(shell echo `find $(OUT_DIR) -name "*.o"`)
	$(V)$(RM) $(shell echo `find $(OUT_DIR) -name "*.d"`)
	$(V)$(RM) $(shell echo `find $(OUT_DIR) -name "*.litstr"`)
	$(V)$(RM) $(shell echo `find . -name "*~"`)
	$(V)$(RMDIR) gen-cpp
	$(V)for mdir in $(dir $(wildcard $(addsuffix /Makefile, \
		$(SUB_CLEAN_DIRS) $(SUB_PROGRAMS) $(SUB_LIB_TARGETS)))); \
		do $(MAKE) -C $$mdir clobber; done
	$(V)for mdir in $(INTERMEDIATE_DIRS); do rm -fR $$mdir; done

.PHONY: clean
clean: clobber

# delete targets only
.PHONY: clear-targets
cleartargets:
	$(V)$(RM) $(TARGETS)
	$(V)for mdir in $(SUB_PROGRAMS); do $(MAKE) -C $$mdir cleartargets; done
	$(V)for mdir in $(SUB_LIB_TARGETS); do $(MAKE) -C $$mdir cleartargets; done

# default no-op "make install"
.PHONY: install
install:
	$(V)for mdir in $(SUB_PROGRAMS); do $(MAKE) -C $$mdir install; done
	$(V)for mdir in $(SUB_LIB_TARGETS); do $(MAKE) -C $$mdir install; done

.PHONY: list-targets
list-targets:
	@echo $(TARGETS) | tr ' ' '\n'
	$(V)for mdir in $(SUB_PROGRAMS); do $(MAKE) -C $$mdir list-targets; done
	$(V)for mdir in $(SUB_LIB_TARGETS); do $(MAKE) -C $$mdir list-targets; done

.PHONY: list-sources
list-sources:
	@echo $(SOURCES) | tr ' ' '\n'
	$(V)for mdir in $(SUB_PROGRAMS); do $(MAKE) -C $$mdir list-sources; done
	$(V)for mdir in $(SUB_LIB_TARGETS); do $(MAKE) -C $$mdir list-sources; done

.EXPORT_ALL_VARIABLES:;
unexport SUB_PROGRAMS SUB_LIB_TARGETS

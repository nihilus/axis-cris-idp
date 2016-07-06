PROC=cris

O1= idp
ifneq ($(or $(__MAC__),$(__LINUX__)),)
__CFLAGS=-std=c++11
endif

include ../../module/module.mak

# MAKEDEP dependency list ------------------
$(F)ana$(O)     : $(I)area.hpp $(I)auto.hpp $(I)bitrange.hpp $(I)bytes.hpp   \
              $(I)fpro.h $(I)funcs.hpp $(I)ida.hpp $(I)idp.hpp          \
              $(I)kernwin.hpp $(I)lines.hpp $(I)llong.hpp               \
              $(I)loader.hpp $(I)nalt.hpp $(I)name.hpp $(I)netnode.hpp  \
              $(I)offset.hpp $(I)pro.h $(I)queue.hpp $(I)segment.hpp    \
              $(I)srarea.hpp $(I)ua.hpp $(I)xref.hpp ../idaidp.hpp      \
              ana.cpp ins.hpp mep.hpp
$(F)emu$(O)     : $(I)area.hpp $(I)auto.hpp $(I)bitrange.hpp $(I)bytes.hpp   \
              $(I)fpro.h $(I)funcs.hpp $(I)ida.hpp $(I)idp.hpp          \
              $(I)kernwin.hpp $(I)lines.hpp $(I)llong.hpp $(I)frame.hpp \
              $(I)loader.hpp $(I)nalt.hpp $(I)name.hpp $(I)netnode.hpp  \
              $(I)offset.hpp $(I)pro.h $(I)queue.hpp $(I)segment.hpp    \
              $(I)srarea.hpp $(I)ua.hpp $(I)xref.hpp ../idaidp.hpp      \
              emu.cpp ins.hpp mep.hpp
$(F)ins$(O)     : $(I)area.hpp $(I)bitrange.hpp $(I)bytes.hpp $(I)fpro.h     \
              $(I)funcs.hpp $(I)ida.hpp $(I)idp.hpp $(I)kernwin.hpp     \
              $(I)lines.hpp $(I)llong.hpp $(I)nalt.hpp $(I)netnode.hpp  \
              $(I)pro.h $(I)segment.hpp $(I)ua.hpp $(I)xref.hpp         \
              ins.cpp ins.hpp
$(F)out$(O)     : $(I)area.hpp $(I)auto.hpp $(I)bitrange.hpp $(I)bytes.hpp   \
              $(I)fpro.h $(I)funcs.hpp $(I)ida.hpp $(I)idp.hpp          \
              $(I)kernwin.hpp $(I)lines.hpp $(I)llong.hpp               \
              $(I)loader.hpp $(I)nalt.hpp $(I)name.hpp $(I)netnode.hpp  \
              $(I)offset.hpp $(I)pro.h $(I)queue.hpp $(I)segment.hpp    \
              $(I)srarea.hpp $(I)ua.hpp $(I)xref.hpp ../idaidp.hpp      \
              ins.hpp out.cpp mep.hpp
$(F)reg$(O)     : $(I)area.hpp $(I)auto.hpp $(I)bitrange.hpp $(I)bytes.hpp   \
              $(I)diskio.hpp $(I)entry.hpp $(I)fpro.h $(I)funcs.hpp     \
              $(I)ida.hpp $(I)idp.hpp $(I)kernwin.hpp $(I)lines.hpp     \
              $(I)llong.hpp $(I)loader.hpp $(I)nalt.hpp $(I)name.hpp    \
              $(I)netnode.hpp $(I)offset.hpp $(I)pro.h $(I)queue.hpp    \
              $(I)segment.hpp $(I)srarea.hpp $(I)ua.hpp $(I)xref.hpp    \
              ../idaidp.hpp ../iocommon.cpp ins.hpp reg.cpp mep.hpp
idp$(O)        : $(I)area.hpp $(I)auto.hpp $(I)bitrange.hpp $(I)bytes.hpp   \
              $(I)diskio.hpp $(I)entry.hpp $(I)fpro.h $(I)funcs.hpp     \
              $(I)ida.hpp $(I)idp.hpp $(I)kernwin.hpp $(I)lines.hpp     \
              $(I)llong.hpp $(I)loader.hpp $(I)nalt.hpp $(I)name.hpp    \
              $(I)netnode.hpp $(I)offset.hpp $(I)pro.h $(I)queue.hpp    \
              $(I)segment.hpp $(I)srarea.hpp $(I)ua.hpp $(I)xref.hpp    \
              ../idaidp.hpp ../iocommon.cpp ins.hpp reg.cpp mep.hpp

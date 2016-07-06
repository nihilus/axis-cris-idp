#!/bin/sh

CGEN="../cgen/cgen"
GUILE="guile"
SED="sed"

${GUILE} -l "${CGEN}/guile.scm" -s "${CGEN}/cgen-idp.scm" -s "${CGEN}" -a "${CGEN}/../cpu/cris.cpu" -b -i cris -m c5 -f with-scache -A ana.cpp -E emu.cpp -R reg.cpp -I ins.cpp -J ins.hpp -O out.cpp -H cris.hpp
${SED} -i.sedbak -e "s/@ARCH@/CRIS/g" -e "s/@arch@/cris/g" -e "s/@prefix@/cris/g" -e "s/@PREFIX@/MEP/g" ana.cpp
${SED} -i.sedbak -e "s/@ARCH@/CRIS/g" -e "s/@arch@/cris/g" -e "s/@prefix@/cris/g" -e "s/@PREFIX@/MEP/g" emu.cpp
${SED} -i.sedbak -e "s/@ARCH@/CRIS/g" -e "s/@arch@/cris/g" -e "s/@prefix@/cris/g" -e "s/@PREFIX@/MEP/g" ins.cpp
${SED} -i.sedbak -e "s/@ARCH@/CRIS/g" -e "s/@arch@/cris/g" -e "s/@prefix@/cris/g" -e "s/@PREFIX@/MEP/g" ins.hpp
${SED} -i.sedbak -e "s/@ARCH@/CRIS/g" -e "s/@arch@/cris/g" -e "s/@prefix@/cris/g" -e "s/@PREFIX@/MEP/g" cris.hpp
${SED} -i.sedbak -e "s/@ARCH@/CRIS/g" -e "s/@arch@/cris/g" -e "s/@prefix@/cris/g" -e "s/@PREFIX@/MEP/g" out.cpp
${SED} -i.sedbak -e "s/@ARCH@/CRIS/g" -e "s/@arch@/cris/g" -e "s/@prefix@/cris/g" -e "s/@PREFIX@/MEP/g" reg.cpp
rm *.sedbak

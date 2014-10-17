@echo off
set DOC=document
set PDFREADER=start
if exist "%DOC%.pdf" del "%DOC%.pdf"
pdflatex -interaction=nonstopmode %DOC%.tex
bibtex %DOC%
if exist %DOC%.pdf %PDFREADER% %DOC%.pdf
if not exist %DOC%.pdf echo Errors in %DOC%.tex.
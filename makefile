outfile:mainline.o add.o delete.o modify.o show.o save.o sort.o generate.o
	cc mainline.c add.c delete.c modify.c show.c save.c sort.c generate.c -o student

mainline.o:mainline.c
	cc -c mainline.c
add.o:add.c
	cc -c add.c
delete.o:delete.c
	cc -c delete.c
modify.o:modify.c
	cc -c modify.c
show.o:show.c
	cc -c show.c
save.o:save.c
	cc -c save.c
sort.o:sort.c
	cc -c sort.c
generate.o:generate.c
	cc -c generate.c
